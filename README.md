# UnityTest
Swift 3.0 项目集成EasyAR Unity 2.0 SDK

>前言
>公司需要在原先Swift 3.0项目中引入EasyAR 的Unity SDK。这篇文章记录了集成过程和遇到的问题。
>开发环境：macOS 10.12.5， iOS 8，Xcode 8.3.3，Unity 5.6.1f1

# 准备工作
1. 导出Unity工程

导出Unity工程时的设置

![导出Unity工程时的设置](http://upload-images.jianshu.io/upload_images/1374191-faf90853edc0c9ab.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

2. 新建空的Swift项目

新建一个空的Swift项目，再建立一个UnityFix文件夹，用于存放Unity文件。

![建立UnityFix文件夹](http://upload-images.jianshu.io/upload_images/1374191-8448d884a1f02a83.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

# 项目设置
1. 将下载得到的Unity.xconfig、UnityBridge.h、UnityUtils.h和UnityUtils.mm这4个文件复制到UnityFix中。[点这里下载](https://github.com/blitzagency/ios-unity5)
![导入Unity配置文件](http://upload-images.jianshu.io/upload_images/1374191-549299bddf06a756.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![导入Unity配置文件](http://upload-images.jianshu.io/upload_images/1374191-7603b65f74102e8b.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
导入过程中，Xcode会讯问是否生成桥接文件。这里我们选择不生成桥接文件
2. 设置使用Unity的配置
![设置使用Unity的配置](http://upload-images.jianshu.io/upload_images/1374191-d613500005171ff4.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
3. 修改BuildSetting配置，Unity路径和Unity版本号
![BuildSetting配置](http://upload-images.jianshu.io/upload_images/1374191-42143483d1f7a3a7.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![设置路径](http://upload-images.jianshu.io/upload_images/1374191-d70289af8ae8a8a7.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![设置路径](http://upload-images.jianshu.io/upload_images/1374191-bb3360534439ddd0.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
4. 在BuildPhases中添加运行脚本
```
rm -rf "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Data";
cp -Rf "$UNITY_IOS_EXPORT_PATH/Data" "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Data";
```
![设置运行脚本](http://upload-images.jianshu.io/upload_images/1374191-1dc403719dc6b2a3.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

# 代码整合

1. 修改UnityUtils.mm中的代码
```
//用下列代码替换原代码
extern "C" int custom_unity_init(int argc, char* argv[])
{
    @autoreleasepool
    {
        UnityInitTrampoline();
        //这行代码不注释，可能会报错
        //        UnityParseCommandLine(argc, argv);
        UnityInitRuntime(argc, argv);
        
        RegisterMonoModules();
        NSLog(@"-> registered mono modules %p\n", &constsection);
        RegisterFeatures();
        
        // iOS terminates open sockets when an application enters background mode.
        // The next write to any of such socket causes SIGPIPE signal being raised,
        // even if the request has been done from scripting side. This disables the
        // signal and allows Mono to throw a proper C# exception.
        std::signal(SIGPIPE, SIG_IGN);
        
        //        UIApplicationMain(argc, argv, nil, [NSString stringWithUTF8String:"AppControllerClassName"]);
    }
    
    return 0;
}
```
2. 把Unity工程中的Classes、Data、Libraries文件按照如下方式添加到Unity文件夹中
* Classes和Libraries需要选择copy if needs、create groups
![这里直接盗图了](http://upload-images.jianshu.io/upload_images/2647396-7005d6af7baeb675.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
* Data需要选择Create folder references
![这里直接盗图了](http://upload-images.jianshu.io/upload_images/2647396-ad8be12213137132.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![完成后的截图](http://upload-images.jianshu.io/upload_images/1374191-a4302601fe6f792d.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

删除libraries里面的libil2cpp文件夹的引用，然后再删除Classes里面的Native文件夹里面的所有.h文件的引用. 

3. 在Classes中找到main.mm文件
```
//替换原来的代码
int main_unity_default(int argc, char* argv[])
{
    @autoreleasepool
    {
        UnityInitTrampoline();
        //        UnityParseCommandLine(argc, argv);
        UnityInitRuntime(argc, argv);
        RegisterMonoModules();
        NSLog(@"-> registered mono modules %p\n", &constsection);
        RegisterFeatures();
        
        // iOS terminates open sockets when an application enters background mode.
        // The next write to any of such socket causes SIGPIPE signal being raised,
        // even if the request has been done from scripting side. This disables the
        // signal and allows Mono to throw a proper C# exception.
        std::signal(SIGPIPE, SIG_IGN);
        
        //UIApplicationMain(argc, argv, nil, [NSString stringWithUTF8String:AppControllerClassName]);
        //        UIApplicationMain(argc, argv, nil, NSStringFromClass([UnitySubAppDelegate class]));
        UIApplicationMain(argc, argv, nil, [NSString stringWithUTF8String:AppControllerClassName]);
    }
    
    return 0;
}
```
4. 在Classes中找到UnityAppController.h做如下修改
```
//添加如下代码
#import <UIKit/UIKit.h>
//若没有@class UnityViewControllerBase;
//还需要添加@class UnityViewControllerBase;
```
```
//inline UnityAppController*  GetAppController()
//{
//    return (UnityAppController*)[UIApplication sharedApplication].delegate;
//}
NS_INLINE UnityAppController* GetAppController()
{
    NSObject<UIApplicationDelegate>* delegate = [UIApplication sharedApplication].delegate;
    UnityAppController* currentUnityController = (UnityAppController *)[delegate valueForKey:@"currentUnityController"];
    return currentUnityController;
}
```
5. 修改Swift工程
新建一个main.swift文件，添加如下代码
```
import Foundation
import UIKit
// overriding @UIApplicationMain
custom_unity_init(CommandLine.argc, CommandLine.unsafeArgv)
UIApplicationMain(
    CommandLine.argc,
    UnsafeMutableRawPointer(CommandLine.unsafeArgv)
        .bindMemory(
            to: UnsafeMutablePointer<Int8>.self,
            capacity: Int(CommandLine.argc)),
    nil,
    NSStringFromClass(AppDelegate.self)
)
```
6. 对AppDelegate.swift文件做如下修改

```
import UIKit

//这里需要注释
//@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?
    var currentUnityController: UnityAppController!

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        
        window = UIWindow(frame: UIScreen.main.bounds)
        window?.backgroundColor = UIColor.white
        let vc: ViewController = ViewController()
        let nav: UINavigationController = UINavigationController(rootViewController: vc)
        window?.rootViewController = nav

        currentUnityController = UnityAppController()
        currentUnityController.application(application,didFinishLaunchingWithOptions: launchOptions)
        
        window?.makeKeyAndVisible()
        
        return true
    }

    func applicationWillResignActive(_ application: UIApplication) {
        currentUnityController.applicationWillResignActive(application)
    }

    func applicationDidEnterBackground(_ application: UIApplication) {
        currentUnityController.applicationDidEnterBackground(application)
    }

    func applicationWillEnterForeground(_ application: UIApplication) {
        currentUnityController.applicationWillEnterForeground(application)
    }

    func applicationDidBecomeActive(_ application: UIApplication) {
        currentUnityController.applicationDidBecomeActive(application)
    }

    func applicationWillTerminate(_ application: UIApplication) {
        currentUnityController.applicationWillTerminate(application)
    }
}
```

7. 添加依赖库
在Build Phase中添加依赖库

![添加依赖库](http://upload-images.jianshu.io/upload_images/1374191-a6458a00b5b20868.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

依赖库的组成参考你导出的原Unity项目的依赖库组成。.dylib用.tbd代替也是可以的

8. Unity.xcconfig修改

```
SWIFT_OBJC_BRIDGING_HEADER = UnityFix/UnityBridge.h;
```

9. 编译器修改

我用Xcode 8.3.3 生成的项目默认就是这样的配置，所以这里没有做更改
![编译器修改](http://upload-images.jianshu.io/upload_images/1374191-2b8fece2024bbb98.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

# 收尾
1. 针对iOS 10添加摄像头权限
在Info.plist文件中添加申请摄像头权限，否则会闪退。
![申请摄像头权限](http://upload-images.jianshu.io/upload_images/1374191-134494b6dd5c469e.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
2. 如果遇到如下问题
![Control may reach end of non-void function](http://upload-images.jianshu.io/upload_images/1374191-9df3b47887545832.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
添加一行代码
![返回 NULL](http://upload-images.jianshu.io/upload_images/1374191-57ffedb164f59b9e.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
3. 解决黑屏问题
在Libraries->Plugins->iOS 中找到EasyARAppController.mm，将其代码迁移到我们自己生成的一个UnityAppController子类中

ZTARController.h

```
#import <UIKit/UIKit.h>
#import "UnityAppController.h"

@interface ZTARController : UnityAppController
{
}
- (void)shouldAttachRenderDelegate;
@end
```
ZTARController.mm
```
#import "ZTARController.h"

extern "C" void ezarUnitySetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void ezarUnityRenderEvent(int marker);

@implementation ZTARController

- (void)shouldAttachRenderDelegate;
{
    UnityRegisterRenderingPlugin(&ezarUnitySetGraphicsDevice, &ezarUnityRenderEvent);
}
@end


IMPL_APP_CONTROLLER_SUBCLASS(ZTARController)
```

记得在AppDelegate中做如下修改
```
//var currentUnityController: UnityAppController!
var currentUnityController: ZTARController!
```

# 初始化Unity视图
```
import UIKit

class AViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        //初始化Unity视图
        let unityview = UnityGetGLView()!
        unityview.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(unityview)
        unityview.frame = view.bounds
        
        //退出的按钮
        let button = UIButton(frame: CGRect(x: 200, y: 100, width: 100, height: 100))
        button.backgroundColor = UIColor.blue
        view.addSubview(button)
        button.addTarget(self, action: #selector(dismissSelf), for: UIControlEvents.touchUpInside)
    }

    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        //开启Unity
        UnityPause(0)
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        //关闭Unity
        UnityPause(1)
    }
    
    //MARK: 退出视图
    func dismissSelf(){
        self.presentingViewController?.dismiss(animated: true, completion: nil)
    }
}
```

# 最后，在真机上运行一下你的工程吧
为了方便调试，楼主在视图上添加了两个按钮
[录了一段小视频](http://ucardstorevideo.b0.upaiyun.com/iOSImages/video/unity_swift.mp4)

# 更新集成CocoaPods
cd到工程根目录
```
pod init
```
添加
```
pod 'Alamofire'
```
最后运行
```
pod install
```

安装完成之后做如下更改
![更改](http://upload-images.jianshu.io/upload_images/1374191-41b9b56cf2f66585.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
更改BuildSetting里的设置
![更改BuildSetting设置](http://upload-images.jianshu.io/upload_images/1374191-b8ab1fa8d14e1447.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
Clean一下你的工程，然后重新编译。

遇到找不到头文件
![遇到找不到头文件](http://upload-images.jianshu.io/upload_images/1374191-20764358b9367d2a.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

在Header Search Paths 中添加
```
"$(PODS_ROOT)/Headers/Public"
"$(PODS_ROOT)/Headers/Public/JPush"
```

到此，成功集成CocoaPods

# 参考
[swift3.0融合Unity](http://www.jianshu.com/p/e8217896d6ff)

[unity 整合到原生iOS项目(swift 2.3)](http://www.jianshu.com/p/1a141e4fccb3)

[Unity嵌入Swift3.0](http://www.jianshu.com/p/102573403e6d)

[unity3D与iOS原生工程项目合并以及合并过程中的问题](http://www.jianshu.com/p/f98bcfe09dc7)

[下载Unity.xcconfig，由blitzagency提供](https://github.com/blitzagency/ios-unity5)

