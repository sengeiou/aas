//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLKITx_FBMLAggregatedAutoMLImageLabelingInferenceLogEvent_LogEventKey, MLKITx_FBMLDurationStats;

@interface MLKITx_FBMLAggregatedAutoMLImageLabelingInferenceLogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int eventCount; // @dynamic eventCount;
@property(nonatomic) _Bool hasEventCount; // @dynamic hasEventCount;
@property(nonatomic) _Bool hasInferenceDurationStats; // @dynamic hasInferenceDurationStats;
@property(nonatomic) _Bool hasLogEventKey; // @dynamic hasLogEventKey;
@property(retain, nonatomic) MLKITx_FBMLDurationStats *inferenceDurationStats; // @dynamic inferenceDurationStats;
@property(retain, nonatomic) MLKITx_FBMLAggregatedAutoMLImageLabelingInferenceLogEvent_LogEventKey *logEventKey; // @dynamic logEventKey;

@end

