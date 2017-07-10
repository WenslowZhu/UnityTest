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
    }

    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        //开启Unity
        if UnityIsPaused() == 0{
            UnityPause(0)
        }
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        //关闭Unity
        if UnityIsPaused() == 1{
            UnityPause(1)
        }
    }
}
