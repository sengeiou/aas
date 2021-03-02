//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface PushPlugin : CDVPlugin
{
    NSDictionary *notificationMessage;
    _Bool isInline;
    NSString *notificationCallbackId;
    NSString *callback;
    _Bool clearBadge;
    NSMutableDictionary *handlerObj;
    CDUnknownBlockType completionHandler;
    _Bool ready;
    _Bool coldstart;
    _Bool usesFCM;
    NSString *callbackId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesFCM; // @synthesize usesFCM;
@property(retain, nonatomic) NSMutableDictionary *handlerObj; // @synthesize handlerObj;
@property _Bool clearBadge; // @synthesize clearBadge;
@property(copy, nonatomic) NSString *callback; // @synthesize callback;
@property(copy, nonatomic) NSString *notificationCallbackId; // @synthesize notificationCallbackId;
@property(copy, nonatomic) NSString *callbackId; // @synthesize callbackId;
@property _Bool coldstart; // @synthesize coldstart;
@property _Bool isInline; // @synthesize isInline;
@property(retain, nonatomic) NSDictionary *notificationMessage; // @synthesize notificationMessage;
- (void)stopBackgroundTask:(id)arg1;
- (void)finish:(id)arg1;
- (void)failWithMessage:(id)arg1 withMsg:(id)arg2 withError:(id)arg3;
- (void)registerWithToken:(id)arg1;
- (void)successWithMessage:(id)arg1 withMsg:(id)arg2;
- (void)hasPermission:(id)arg1;
- (void)clearAllNotifications:(id)arg1;
- (void)getApplicationIconBadgeNumber:(id)arg1;
- (void)setApplicationIconBadgeNumber:(id)arg1;
- (void)notificationReceived;
- (void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
- (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (id)getRawStringFromData:(id)arg1;
- (id)createAction:(id)arg1;
- (void)init:(id)arg1;
- (void)didDeleteMessagesOnServer;
- (void)willSendDataMessageWithID:(id)arg1 error:(id)arg2;
- (void)didSendDataMessageWithID:(id)arg1;
- (void)sendDataMessageSuccess:(id)arg1;
- (void)sendDataMessageFailure:(id)arg1;

@end
