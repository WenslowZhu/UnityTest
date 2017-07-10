//
//  AViewController.swift
//  unityTest
//
//  Created by Wenslow on 2017/6/26.
//  Copyright © 2017年 com.ucard.app. All rights reserved.
//

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
