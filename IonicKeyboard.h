//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "UIScrollViewDelegate.h"

@class NSString;

@interface IonicKeyboard : CDVPlugin <UIScrollViewDelegate>
{
    id _keyboardShowObserver;
    id _keyboardHideObserver;
    CDUnknownFunctionPointerType wkOriginalImp;
    CDUnknownFunctionPointerType uiOriginalImp;
    CDUnknownFunctionPointerType nilImp;
    struct objc_method *wkMethod;
    struct objc_method *uiMethod;
    _Bool _hideKeyboardAccessoryBar;
    _Bool _disableScroll;
}

- (void).cxx_destruct;
- (void)show:(id)arg1;
- (void)close:(id)arg1;
- (void)hideKeyboardAccessoryBar:(id)arg1;
- (void)disableScroll:(id)arg1;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
@property _Bool hideKeyboardAccessoryBar; // @synthesize hideKeyboardAccessoryBar=_hideKeyboardAccessoryBar;
@property _Bool disableScroll; // @synthesize disableScroll=_disableScroll;
- (void)pluginInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

