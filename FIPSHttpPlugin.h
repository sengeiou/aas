//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

@interface FIPSHttpPlugin : CDVPlugin
{
}

+ (void)sendFIPSRequestWithDelegate:(id)arg1 withCallbackId:(id)arg2 url:(id)arg3 method:(id)arg4 headers:(id)arg5 data:(id)arg6;
+ (void)resetCookies;
+ (Class)getVPNClass;
+ (unsigned char)isFIPSEnabled;
- (void)successCallback:(id)arg1 withResponse:(id)arg2;
- (void)enable:(id)arg1;
- (void)send:(id)arg1;

@end

