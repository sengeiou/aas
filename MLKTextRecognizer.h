//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLKAnalyticsLoggerAggregationProvider.h"

@class MLKAnalyticsLogger, MLKITx_GMVDetector, NSObject<OS_dispatch_queue>, NSString;

@interface MLKTextRecognizer : NSObject <MLKAnalyticsLoggerAggregationProvider>
{
    MLKITx_GMVDetector *_mobileVisionDetector;
    MLKAnalyticsLogger *_analyticsLogger;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)keyForContext:(id)arg1;
+ (void)clearTextRecognizerInstances;
+ (id)textRecognizerForContext:(id)arg1 logger:(id)arg2 detector:(id)arg3;
+ (id)textRecognizer;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MLKAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) MLKITx_GMVDetector *mobileVisionDetector; // @synthesize mobileVisionDetector=_mobileVisionDetector;
- (void).cxx_destruct;
- (void)logThrottledEventWithErrorCode:(int)arg1 beginTime:(double)arg2 image:(id)arg3;
- (id)textInImage:(id)arg1 beginTime:(double)arg2;
- (id)initWithLogger:(id)arg1 detector:(id)arg2;
- (id)durationMsFromLogEvent:(id)arg1;
- (int)aggregationEventNameFromCommonLogEvent:(id)arg1;
- (id)aggregatedLogEventFromLogEventKey:(id)arg1 count:(long long)arg2 durationStats:(id)arg3;
- (id)aggregatedLogEventKeyFromLogEvent:(id)arg1;
- (id)resultsInImage:(id)arg1 error:(id *)arg2;
- (void)processImage:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

