//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLKITx_FBMLImageInfo;

@interface MLKITx_FBMLAggregatedOnDeviceTextDetectionLogEvent_LogEventKey : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasHasResult; // @dynamic hasHasResult;
@property(nonatomic) _Bool hasImageInfo; // @dynamic hasImageInfo;
@property(nonatomic) _Bool hasIsColdCall; // @dynamic hasIsColdCall;
@property(nonatomic) _Bool hasResult; // @dynamic hasResult;
@property(retain, nonatomic) MLKITx_FBMLImageInfo *imageInfo; // @dynamic imageInfo;
@property(nonatomic) _Bool isColdCall; // @dynamic isColdCall;

@end

