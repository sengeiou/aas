//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

@class NSString;

@interface CDVMobileAccessibility : CDVPlugin
{
    NSString *callbackId;
    NSString *commandCallbackId;
    _Bool boldTextEnabled;
    _Bool closedCaptioningEnabled;
    _Bool darkerSystemColorsEnabled;
    _Bool grayscaleEnabled;
    _Bool guidedAccessEnabled;
    _Bool invertColorsEnabled;
    _Bool monoAudioEnabled;
    _Bool reduceMotionEnabled;
    _Bool reduceTransparencyEnabled;
    _Bool speakScreenEnabled;
    _Bool speakSelectionEnabled;
    _Bool switchControlRunning;
    _Bool voiceOverRunning;
    double mFontScale;
}

- (void).cxx_destruct;
@property double mFontScale; // @synthesize mFontScale;
@property _Bool voiceOverRunning; // @synthesize voiceOverRunning;
@property _Bool switchControlRunning; // @synthesize switchControlRunning;
@property _Bool speakSelectionEnabled; // @synthesize speakSelectionEnabled;
@property _Bool speakScreenEnabled; // @synthesize speakScreenEnabled;
@property _Bool reduceTransparencyEnabled; // @synthesize reduceTransparencyEnabled;
@property _Bool reduceMotionEnabled; // @synthesize reduceMotionEnabled;
@property _Bool monoAudioEnabled; // @synthesize monoAudioEnabled;
@property _Bool invertColorsEnabled; // @synthesize invertColorsEnabled;
@property _Bool guidedAccessEnabled; // @synthesize guidedAccessEnabled;
@property _Bool grayscaleEnabled; // @synthesize grayscaleEnabled;
@property _Bool darkerSystemColorsEnabled; // @synthesize darkerSystemColorsEnabled;
@property _Bool closedCaptioningEnabled; // @synthesize closedCaptioningEnabled;
@property _Bool boldTextEnabled; // @synthesize boldTextEnabled;
@property(retain) NSString *commandCallbackId; // @synthesize commandCallbackId;
@property(retain) NSString *callbackId; // @synthesize callbackId;
- (void)stop:(id)arg1;
- (void)start:(id)arg1;
- (id)getMobileAccessibilityStatus;
- (void)sendMobileAccessibilityStatusChangedCallback;
- (void)mobileAccessibilityStatusChanged:(id)arg1;
- (_Bool)getClosedCaptioningEnabledStatus;
- (void)mobileAccessibilityAnnouncementDidFinish:(id)arg1;
- (_Bool)isValidNotificationType:(unsigned int)arg1;
- (void)postNotification:(id)arg1;
- (void)updateTextZoom:(id)arg1;
- (void)setTextZoom:(id)arg1;
- (void)mSetTextZoom:(double)arg1;
- (void)getTextZoom:(id)arg1;
- (double)mGetTextZoom;
- (double)mGetFontScale;
- (void)isSwitchControlRunning:(id)arg1;
- (void)isSpeakSelectionEnabled:(id)arg1;
- (void)isSpeakScreenEnabled:(id)arg1;
- (void)isScreenReaderRunning:(id)arg1;
- (void)isReduceTransparencyEnabled:(id)arg1;
- (void)isReduceMotionEnabled:(id)arg1;
- (void)isMonoAudioEnabled:(id)arg1;
- (void)isInvertColorsEnabled:(id)arg1;
- (void)isGuidedAccessEnabled:(id)arg1;
- (void)isGrayscaleEnabled:(id)arg1;
- (void)isDarkerSystemColorsEnabled:(id)arg1;
- (void)isClosedCaptioningEnabled:(id)arg1;
- (void)isBoldTextEnabled:(id)arg1;
- (void)onApplicationDidBecomeActive;
- (void)onResume;
- (void)onPause;
- (void)onReset;
- (void)dealloc;
- (void)pluginInitialize;
- (id)settingForKey:(id)arg1;

@end
