//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

@class NSMutableDictionary;

@interface NativePage : CDVPlugin
{
    NSMutableDictionary *controllerObjects;
    id showWebViewObserver;
}

+ (void)showWebView:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *controllerObjects; // @synthesize controllerObjects;
- (void).cxx_destruct;
- (void)show:(id)arg1;
- (id)getControllerInstance:(id)arg1;
- (void)pluginInitialize;

@end

