//
//  ZTARController.m
//  unityTest
//
//  Created by Wenslow on 2017/6/26.
//  Copyright © 2017年 com.ucard.app. All rights reserved.
//

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
