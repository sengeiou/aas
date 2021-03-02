//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPUImageInput.h"

@class GPUImageFramebuffer, NSString;

@interface GPUImageTextureOutput : NSObject <GPUImageInput>
{
    GPUImageFramebuffer *firstInputFramebuffer;
    _Bool enabled;
    unsigned int _texture;
    id <GPUImageTextureOutputDelegate> _delegate;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(readonly) unsigned int texture; // @synthesize texture=_texture;
@property(nonatomic) id <GPUImageTextureOutputDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)doneWithTexture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

