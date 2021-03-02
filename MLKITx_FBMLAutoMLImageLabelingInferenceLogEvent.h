//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLKITx_FBMLImageInfo, MLKITx_FBMLInferenceCommonLogEvent, MLKITx_FBMLModelOptions;

@interface MLKITx_FBMLAutoMLImageLabelingInferenceLogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float confidenceThreshold; // @dynamic confidenceThreshold;
@property(nonatomic) _Bool hasConfidenceThreshold; // @dynamic hasConfidenceThreshold;
@property(nonatomic) _Bool hasImageInfo; // @dynamic hasImageInfo;
@property(nonatomic) _Bool hasInferenceCommonLogEvent; // @dynamic hasInferenceCommonLogEvent;
@property(nonatomic) _Bool hasModelInitializationMs; // @dynamic hasModelInitializationMs;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(retain, nonatomic) MLKITx_FBMLImageInfo *imageInfo; // @dynamic imageInfo;
@property(retain, nonatomic) MLKITx_FBMLInferenceCommonLogEvent *inferenceCommonLogEvent; // @dynamic inferenceCommonLogEvent;
@property(nonatomic) unsigned long long modelInitializationMs; // @dynamic modelInitializationMs;
@property(retain, nonatomic) MLKITx_FBMLModelOptions *options; // @dynamic options;

@end

