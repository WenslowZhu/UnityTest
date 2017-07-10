//
//  ViewController.swift
//  unityTest
//
//  Created by Wenslow on 2017/6/26.
//  Copyright © 2017年 com.ucard.app. All rights reserved.
//

import UIKit
import Alamofire

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let button = UIButton(frame: CGRect(x: 100, y: 100, width: 100, height: 100))
        button.backgroundColor = UIColor.red
        view.addSubview(button)
        button.addTarget(self, action: #selector(enterUnityView), for: UIControlEvents.touchUpInside)
    }

    
    func enterUnityView(){
        let vc = AViewController()
        let nav = UINavigationController(rootViewController: vc)
        present(nav, animated: true, completion: nil)
        
        Alamofire.request("qw", method: HTTPMethod.post, parameters: nil, encoding: JSONEncoding.default, headers: nil)
    }
}

