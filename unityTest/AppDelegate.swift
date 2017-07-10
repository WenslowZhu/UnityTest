//
//  AppDelegate.swift
//  unityTest
//
//  Created by Wenslow on 2017/6/26.
//  Copyright © 2017年 com.ucard.app. All rights reserved.
//

import UIKit


//这里需要注释
//@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?
    //var currentUnityController: UnityAppController!
    var currentUnityController: ZTARController!

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        
        window = UIWindow(frame: UIScreen.main.bounds)
        window?.backgroundColor = UIColor.white
        let vc: ViewController = ViewController()
        let nav: UINavigationController = UINavigationController(rootViewController: vc)
        window?.rootViewController = nav

        currentUnityController = ZTARController()
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

