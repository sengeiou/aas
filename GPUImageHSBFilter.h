//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageColorMatrixFilter.h"

@interface GPUImageHSBFilter : GPUImageColorMatrixFilter
{
    float matrix[4][4];
}

- (void)_updateColorMatrix;
- (void)adjustBrightness:(float)arg1;
- (void)adjustSaturation:(float)arg1;
- (void)rotateHue:(float)arg1;
- (void)reset;
- (id)init;

@end

