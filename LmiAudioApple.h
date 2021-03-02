//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LmiAudioApple : NSObject
{
    struct OpaqueAudioComponentInstance *ioUnit;
    struct OpaqueAudioComponentInstance *retainedAudioUnit;
    struct AudioStreamBasicDescription description;
    struct AudioBufferList *inputBuffer;
    unsigned int inputBufferSize;
    struct LmiAudioPlaybackDevice_ *playbackDevice;
    struct LmiAudioCapturer_ *capturer;
    unsigned char audioSessionInitialized;
    unsigned char audioSessionStarted;
    int playbackMode;
    unsigned char inPlaybackCallback;
    unsigned char inCapturerCallback;
    struct LmiAllocatorS_ *a;
    unsigned int samplingRate;
    unsigned int numberOfChannels;
    unsigned int bitsPerSample;
    unsigned long long maxBytesPerFrame;
    unsigned long long bytesPerFrame;
    CDStruct_83113961 sampleAudioBuffer;
    unsigned char started;
    CDUnknownFunctionPointerType playbackInterruptCb;
    CDUnknownFunctionPointerType capturerInterruptCb;
    unsigned int capturerBitsPerSample;
    unsigned int capturerPacketInterval;
    int routeInUse;
    int defaultRoute;
    int initRoute;
    unsigned char autoRouteIsSpeakerphone;
    unsigned char autoRouteMode;
}

@property(readonly, nonatomic) unsigned char audioSessionInitialized; // @synthesize audioSessionInitialized;
@property(readonly, nonatomic) unsigned char inCapturerCallback; // @synthesize inCapturerCallback;
@property(readonly, nonatomic) unsigned char inPlaybackCallback; // @synthesize inPlaybackCallback;
@property(nonatomic) CDUnknownFunctionPointerType capturerInterruptCb; // @synthesize capturerInterruptCb;
@property(nonatomic) CDUnknownFunctionPointerType playbackInterruptCb; // @synthesize playbackInterruptCb;
@property(readonly, nonatomic) unsigned int numberOfChannels; // @synthesize numberOfChannels;
@property(readonly, nonatomic) unsigned int samplingRate; // @synthesize samplingRate;
- (void)getAutoGainWrapper:(id)arg1;
- (unsigned char)getAutoGain:(char *)arg1;
- (void)setAutoGainWrapper:(id)arg1;
- (unsigned char)setAutoGain:(unsigned char)arg1;
- (void)agcIsSettableWrapper:(id)arg1;
- (unsigned char)agcIsSettable:(char *)arg1;
- (void)getVoiceProcessingWrapper:(id)arg1;
- (unsigned char)getVoiceProcessing:(char *)arg1;
- (void)setVoiceProcessingWrapper:(id)arg1;
- (unsigned char)setVoiceProcessing:(unsigned char)arg1;
- (void)voiceProcessingIsSettableWrapper:(id)arg1;
- (unsigned char)voiceProcessingIsSettable:(char *)arg1;
- (struct LmiAudioPlaybackDevice_ *)playbackDevice;
- (struct LmiAudioCapturer_ *)capturer;
- (void)capturerStopWrapper:(id)arg1;
- (unsigned char)capturerStop;
- (void)capturerStartWrapper:(id)arg1;
- (unsigned char)capturerStart:(struct LmiAudioCapturer_ *)arg1;
- (void)playbackDeviceStopWrapper:(id)arg1;
- (unsigned char)playbackDeviceStop;
- (void)playbackDeviceStartWrapper:(id)arg1;
- (unsigned char)playbackDeviceStart:(struct LmiAudioPlaybackDevice_ *)arg1;
- (void)resume;
- (void)suspend;
- (_Bool)stop:(_Bool)arg1;
- (_Bool)start;
- (void)dealloc;
- (id)init:(struct LmiAllocatorS_ *)arg1;
- (_Bool)setPlaybackMode:(int)arg1;
- (_Bool)getPlaybackMode:(int *)arg1;
- (_Bool)restartAudioSession;
- (void)stopAudioSession;
- (_Bool)startAudioSession;
- (void)setDefaultRouteWrapper:(id)arg1;
- (_Bool)setDefaultRoute:(int)arg1;
- (void)setRouteWrapper:(id)arg1;
- (_Bool)setRoute:(int)arg1;
- (_Bool)isHeadsetPluggedIn;
- (void)notifyRouteChangeTo:(id)arg1 from:(id)arg2 reason:(unsigned long long)arg3;
- (_Bool)setRouteToBluetooth;
- (_Bool)enableBluetooth:(_Bool)arg1;
- (_Bool)setRouteToSpeaker:(_Bool)arg1;
- (_Bool)setDefaultRouteToSpeaker:(_Bool)arg1;
- (_Bool)setCategoryOption:(unsigned long long)arg1 toState:(_Bool)arg2;
- (_Bool)getCurrentRoute:(int *)arg1;
- (void)stopAudioUnitWrapper:(id)arg1;
- (void)stopAudioUnit:(_Bool)arg1;
- (void)startAudioUnit;
- (void)startVoiceProcessingAudioUnit;
- (int)captureProc:(struct AudioBufferList *)arg1 withFrames:(unsigned int)arg2 withFlags:(unsigned int *)arg3 withBusNumber:(unsigned int)arg4 withTimeStamp:(const struct AudioTimeStamp *)arg5;
- (void)renderProc:(struct AudioBufferList *)arg1 with:(unsigned int)arg2;
- (void)routeChangeNotificationCallback:(id)arg1;
- (id)getInputPortType:(id)arg1;
- (id)getOutputPortType:(id)arg1;
- (void)interruptionNotificationCallback:(id)arg1;
- (void)mediaServicesWereResetNotificationCallback:(id)arg1;
- (void)mediaServicesWereLostNotificationCallback:(id)arg1;

@end

