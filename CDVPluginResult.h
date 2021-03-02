//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface CDVPluginResult : NSObject
{
    NSNumber *status;
    id message;
    NSNumber *keepCallback;
    id associatedObject;
}

+ (_Bool)isVerbose;
+ (void)setVerbose:(_Bool)arg1;
+ (id)resultWithStatus:(int)arg1 messageToErrorObject:(int)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsMultipart:(id)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsArrayBuffer:(id)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsDictionary:(id)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsBool:(_Bool)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsDouble:(double)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsNSUInteger:(unsigned long long)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsNSInteger:(long long)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsInt:(int)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsArray:(id)arg2;
+ (id)resultWithStatus:(int)arg1 messageAsString:(id)arg2;
+ (id)resultWithStatus:(int)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) id associatedObject; // @synthesize associatedObject;
@property(retain, nonatomic) NSNumber *keepCallback; // @synthesize keepCallback;
@property(readonly, nonatomic) id message; // @synthesize message;
@property(readonly, nonatomic) NSNumber *status; // @synthesize status;
- (id)argumentsAsJSON;
- (void)setKeepCallbackAsBool:(_Bool)arg1;
- (id)initWithStatus:(int)arg1 message:(id)arg2;
- (id)init;

@end
