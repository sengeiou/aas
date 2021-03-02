//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class CDVInvokedUrlCommand, MFMailComposeViewController, NSString, UIDocumentInteractionController, UIPopoverController;

@interface SocialSharing : CDVPlugin <UIPopoverControllerDelegate, MFMailComposeViewControllerDelegate, UIDocumentInteractionControllerDelegate>
{
    UIPopoverController *_popover;
    NSString *_popupCoordinates;
    MFMailComposeViewController *_globalMailComposer;
    UIDocumentInteractionController *_documentInteractionController;
    NSString *_tempStoredFile;
    CDVInvokedUrlCommand *_command;
}

+ (id)dataFromBase64String:(id)arg1;
- (void).cxx_destruct;
@property(retain) CDVInvokedUrlCommand *command; // @synthesize command=_command;
@property(retain) NSString *tempStoredFile; // @synthesize tempStoredFile=_tempStoredFile;
@property(retain, nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
@property(retain, nonatomic) MFMailComposeViewController *globalMailComposer; // @synthesize globalMailComposer=_globalMailComposer;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)cleanupStoredFiles;
- (id)storeInFile:(id)arg1 fileData:(id)arg2;
- (id)getFile:(id)arg1;
- (id)getImage:(id)arg1;
- (void)thisImage:(id)arg1 wasSavedToPhotoAlbumWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveToPhotoAlbum:(id)arg1;
- (void)shareViaWhatsApp:(id)arg1;
- (void)shareViaInstagram:(id)arg1;
- (void)openImage:(id)arg1;
- (_Bool)canShareViaWhatsApp;
- (_Bool)canShareViaInstagram;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)shareViaSMS:(id)arg1;
- (_Bool)canShareViaSMS;
- (void)cycleTheGlobalMailComposer;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)getMimeTypeFromFileExtension:(id)arg1;
- (id)getBasenameFromAttachmentPath:(id)arg1;
- (id)getTopMostViewController;
- (void)shareViaEmail:(id)arg1;
- (void)shareViaInternal:(id)arg1 type:(id)arg2;
- (_Bool)isAvailableForSharing:(id)arg1 type:(id)arg2;
- (_Bool)isEmailAvailable;
- (void)canShareViaEmail:(id)arg1;
- (void)canShareVia:(id)arg1;
- (void)shareVia:(id)arg1;
- (void)shareViaFacebookWithPasteMessageHint:(id)arg1;
- (void)shareViaFacebook:(id)arg1;
- (void)shareViaTwitter:(id)arg1;
- (void)shareInternal:(id)arg1 withOptions:(id)arg2 isBooleanResponse:(_Bool)arg3;
- (void)shareWithOptions:(id)arg1;
- (void)share:(id)arg1;
- (struct CGRect)getPopupRectFromIPadPopupCoordinates:(id)arg1;
- (void)setIPadPopupCoordinates:(id)arg1;
- (id)getIPadPopupCoordinates;
- (void)available:(id)arg1;
- (void)pluginInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

