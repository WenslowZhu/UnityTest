//
//  main.swift
//  unityTest
//
//  Created by Wenslow on 2017/6/26.
//  Copyright © 2017年 com.ucard.app. All rights reserved.
//

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
