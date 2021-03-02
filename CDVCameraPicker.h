//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImagePickerController.h"

@class CDVPictureOptions, NSString, UIPopoverController, UIView;

@interface CDVCameraPicker : UIImagePickerController
{
    _Bool _cropToSize;
    CDVPictureOptions *_pictureOptions;
    NSString *_callbackId;
    NSString *_postUrl;
    UIPopoverController *_pickerPopoverController;
    UIView *_webView;
}

+ (id)createFromPictureOptions:(id)arg1;
- (void).cxx_destruct;
@property(retain) UIView *webView; // @synthesize webView=_webView;
@property _Bool cropToSize; // @synthesize cropToSize=_cropToSize;
@property(retain) UIPopoverController *pickerPopoverController; // @synthesize pickerPopoverController=_pickerPopoverController;
@property(copy) NSString *postUrl; // @synthesize postUrl=_postUrl;
@property(copy) NSString *callbackId; // @synthesize callbackId=_callbackId;
@property(retain) CDVPictureOptions *pictureOptions; // @synthesize pictureOptions=_pictureOptions;
- (void)viewWillAppear:(_Bool)arg1;
- (id)childViewControllerForStatusBarHidden;
- (_Bool)prefersStatusBarHidden;

@end
