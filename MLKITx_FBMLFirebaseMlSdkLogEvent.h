//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

#import "GDTCOREventDataObject.h"

@class MLKITx_FBMLAggregatedAutoMLImageLabelingInferenceLogEvent, MLKITx_FBMLAggregatedOnDeviceBarcodeDetectionLogEvent, MLKITx_FBMLAggregatedOnDeviceFaceDetectionLogEvent, MLKITx_FBMLAggregatedOnDeviceImageLabelDetectionLogEvent, MLKITx_FBMLAggregatedOnDeviceObjectInferenceLogEvent, MLKITx_FBMLAggregatedOnDeviceTextDetectionLogEvent, MLKITx_FBMLAutoMLImageLabelingCreateLogEvent, MLKITx_FBMLAutoMLImageLabelingInferenceLogEvent, MLKITx_FBMLAutoMLImageLabelingLoadLogEvent, MLKITx_FBMLDeleteModelLogEvent, MLKITx_FBMLIsModelDownloadedLogEvent, MLKITx_FBMLModelDownloadLogEvent, MLKITx_FBMLOnDeviceBarcodeDetectionLogEvent, MLKITx_FBMLOnDeviceFaceDetectionLogEvent, MLKITx_FBMLOnDeviceImageLabelCreateLogEvent, MLKITx_FBMLOnDeviceImageLabelDetectionLogEvent, MLKITx_FBMLOnDeviceImageLabelLoadLogEvent, MLKITx_FBMLOnDeviceLanguageIdentificationLogEvent, MLKITx_FBMLOnDeviceObjectCreateLogEvent, MLKITx_FBMLOnDeviceObjectInferenceLogEvent, MLKITx_FBMLOnDeviceObjectLoadLogEvent, MLKITx_FBMLOnDeviceSmartReplyLogEvent, MLKITx_FBMLOnDeviceTextDetectionLogEvent, MLKITx_FBMLOnDeviceTranslationLogEvent, MLKITx_FBMLRemoteConfigLogEvent, MLKITx_FBMLSystemInfo, NSString;

@interface MLKITx_FBMLFirebaseMlSdkLogEvent : GPBMessage <GDTCOREventDataObject>
{
}

+ (id)descriptor;
- (id)transportBytes;

// Remaining properties
@property(retain, nonatomic) MLKITx_FBMLAggregatedAutoMLImageLabelingInferenceLogEvent *aggregatedAutomlImageLabelingInferenceLogEvent; // @dynamic aggregatedAutomlImageLabelingInferenceLogEvent;
@property(retain, nonatomic) MLKITx_FBMLAggregatedOnDeviceBarcodeDetectionLogEvent *aggregatedOnDeviceBarcodeDetectionLogEvent; // @dynamic aggregatedOnDeviceBarcodeDetectionLogEvent;
@property(retain, nonatomic) MLKITx_FBMLAggregatedOnDeviceFaceDetectionLogEvent *aggregatedOnDeviceFaceDetectionLogEvent; // @dynamic aggregatedOnDeviceFaceDetectionLogEvent;
@property(retain, nonatomic) MLKITx_FBMLAggregatedOnDeviceImageLabelDetectionLogEvent *aggregatedOnDeviceImageLabelDetectionLogEvent; // @dynamic aggregatedOnDeviceImageLabelDetectionLogEvent;
@property(retain, nonatomic) MLKITx_FBMLAggregatedOnDeviceObjectInferenceLogEvent *aggregatedOnDeviceObjectInferenceLogEvent; // @dynamic aggregatedOnDeviceObjectInferenceLogEvent;
@property(retain, nonatomic) MLKITx_FBMLAggregatedOnDeviceTextDetectionLogEvent *aggregatedOnDeviceTextDetectionLogEvent; // @dynamic aggregatedOnDeviceTextDetectionLogEvent;
@property(retain, nonatomic) MLKITx_FBMLAutoMLImageLabelingCreateLogEvent *automlImageLabelingCreateLogEvent; // @dynamic automlImageLabelingCreateLogEvent;
@property(retain, nonatomic) MLKITx_FBMLAutoMLImageLabelingInferenceLogEvent *automlImageLabelingInferenceLogEvent; // @dynamic automlImageLabelingInferenceLogEvent;
@property(retain, nonatomic) MLKITx_FBMLAutoMLImageLabelingLoadLogEvent *automlImageLabelingLoadLogEvent; // @dynamic automlImageLabelingLoadLogEvent;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) MLKITx_FBMLDeleteModelLogEvent *deleteModelLogEvent; // @dynamic deleteModelLogEvent;
@property(readonly, copy) NSString *description;
@property(nonatomic) int eventName; // @dynamic eventName;
@property(nonatomic) _Bool hasAggregatedAutomlImageLabelingInferenceLogEvent; // @dynamic hasAggregatedAutomlImageLabelingInferenceLogEvent;
@property(nonatomic) _Bool hasAggregatedOnDeviceBarcodeDetectionLogEvent; // @dynamic hasAggregatedOnDeviceBarcodeDetectionLogEvent;
@property(nonatomic) _Bool hasAggregatedOnDeviceFaceDetectionLogEvent; // @dynamic hasAggregatedOnDeviceFaceDetectionLogEvent;
@property(nonatomic) _Bool hasAggregatedOnDeviceImageLabelDetectionLogEvent; // @dynamic hasAggregatedOnDeviceImageLabelDetectionLogEvent;
@property(nonatomic) _Bool hasAggregatedOnDeviceObjectInferenceLogEvent; // @dynamic hasAggregatedOnDeviceObjectInferenceLogEvent;
@property(nonatomic) _Bool hasAggregatedOnDeviceTextDetectionLogEvent; // @dynamic hasAggregatedOnDeviceTextDetectionLogEvent;
@property(nonatomic) _Bool hasAutomlImageLabelingCreateLogEvent; // @dynamic hasAutomlImageLabelingCreateLogEvent;
@property(nonatomic) _Bool hasAutomlImageLabelingInferenceLogEvent; // @dynamic hasAutomlImageLabelingInferenceLogEvent;
@property(nonatomic) _Bool hasAutomlImageLabelingLoadLogEvent; // @dynamic hasAutomlImageLabelingLoadLogEvent;
@property(nonatomic) _Bool hasDeleteModelLogEvent; // @dynamic hasDeleteModelLogEvent;
@property(nonatomic) _Bool hasEventName; // @dynamic hasEventName;
@property(nonatomic) _Bool hasIsModelDownloadedLogEvent; // @dynamic hasIsModelDownloadedLogEvent;
@property(nonatomic) _Bool hasIsThickClient; // @dynamic hasIsThickClient;
@property(nonatomic) _Bool hasModelDownloadLogEvent; // @dynamic hasModelDownloadLogEvent;
@property(nonatomic) _Bool hasOnDeviceBarcodeDetectionLogEvent; // @dynamic hasOnDeviceBarcodeDetectionLogEvent;
@property(nonatomic) _Bool hasOnDeviceFaceDetectionLogEvent; // @dynamic hasOnDeviceFaceDetectionLogEvent;
@property(nonatomic) _Bool hasOnDeviceImageLabelCreateLogEvent; // @dynamic hasOnDeviceImageLabelCreateLogEvent;
@property(nonatomic) _Bool hasOnDeviceImageLabelDetectionLogEvent; // @dynamic hasOnDeviceImageLabelDetectionLogEvent;
@property(nonatomic) _Bool hasOnDeviceImageLabelLoadLogEvent; // @dynamic hasOnDeviceImageLabelLoadLogEvent;
@property(nonatomic) _Bool hasOnDeviceLanguageIdentificationLogEvent; // @dynamic hasOnDeviceLanguageIdentificationLogEvent;
@property(nonatomic) _Bool hasOnDeviceObjectCreateLogEvent; // @dynamic hasOnDeviceObjectCreateLogEvent;
@property(nonatomic) _Bool hasOnDeviceObjectInferenceLogEvent; // @dynamic hasOnDeviceObjectInferenceLogEvent;
@property(nonatomic) _Bool hasOnDeviceObjectLoadLogEvent; // @dynamic hasOnDeviceObjectLoadLogEvent;
@property(nonatomic) _Bool hasOnDeviceSmartReplyLogEvent; // @dynamic hasOnDeviceSmartReplyLogEvent;
@property(nonatomic) _Bool hasOnDeviceTextDetectionLogEvent; // @dynamic hasOnDeviceTextDetectionLogEvent;
@property(nonatomic) _Bool hasOnDeviceTranslationLogEvent; // @dynamic hasOnDeviceTranslationLogEvent;
@property(nonatomic) _Bool hasRemoteConfigLogEvent; // @dynamic hasRemoteConfigLogEvent;
@property(nonatomic) _Bool hasSystemInfo; // @dynamic hasSystemInfo;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MLKITx_FBMLIsModelDownloadedLogEvent *isModelDownloadedLogEvent; // @dynamic isModelDownloadedLogEvent;
@property(nonatomic) _Bool isThickClient; // @dynamic isThickClient;
@property(retain, nonatomic) MLKITx_FBMLModelDownloadLogEvent *modelDownloadLogEvent; // @dynamic modelDownloadLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceBarcodeDetectionLogEvent *onDeviceBarcodeDetectionLogEvent; // @dynamic onDeviceBarcodeDetectionLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceFaceDetectionLogEvent *onDeviceFaceDetectionLogEvent; // @dynamic onDeviceFaceDetectionLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceImageLabelCreateLogEvent *onDeviceImageLabelCreateLogEvent; // @dynamic onDeviceImageLabelCreateLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceImageLabelDetectionLogEvent *onDeviceImageLabelDetectionLogEvent; // @dynamic onDeviceImageLabelDetectionLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceImageLabelLoadLogEvent *onDeviceImageLabelLoadLogEvent; // @dynamic onDeviceImageLabelLoadLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceLanguageIdentificationLogEvent *onDeviceLanguageIdentificationLogEvent; // @dynamic onDeviceLanguageIdentificationLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceObjectCreateLogEvent *onDeviceObjectCreateLogEvent; // @dynamic onDeviceObjectCreateLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceObjectInferenceLogEvent *onDeviceObjectInferenceLogEvent; // @dynamic onDeviceObjectInferenceLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceObjectLoadLogEvent *onDeviceObjectLoadLogEvent; // @dynamic onDeviceObjectLoadLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceSmartReplyLogEvent *onDeviceSmartReplyLogEvent; // @dynamic onDeviceSmartReplyLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceTextDetectionLogEvent *onDeviceTextDetectionLogEvent; // @dynamic onDeviceTextDetectionLogEvent;
@property(retain, nonatomic) MLKITx_FBMLOnDeviceTranslationLogEvent *onDeviceTranslationLogEvent; // @dynamic onDeviceTranslationLogEvent;
@property(retain, nonatomic) MLKITx_FBMLRemoteConfigLogEvent *remoteConfigLogEvent; // @dynamic remoteConfigLogEvent;
@property(readonly) Class superclass;
@property(retain, nonatomic) MLKITx_FBMLSystemInfo *systemInfo; // @dynamic systemInfo;

@end

