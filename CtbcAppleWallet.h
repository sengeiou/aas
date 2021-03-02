//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "PKAddPaymentPassViewControllerDelegate.h"

@class NSString, UIViewController;

@interface CtbcAppleWallet : CDVPlugin <PKAddPaymentPassViewControllerDelegate>
{
    _Bool _isRequestIssued;
    _Bool _isRequestIssuedSuccess;
    long long _requestErrorCode;
    CDUnknownBlockType _completionHandler;
    NSString *_stringFromData;
    NSString *_transactionCallbackId;
    NSString *_completionCallbackId;
    UIViewController *_addPaymentPassModal;
}

+ (_Bool)canAddPaymentPass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *addPaymentPassModal; // @synthesize addPaymentPassModal=_addPaymentPassModal;
@property(copy, nonatomic) NSString *completionCallbackId; // @synthesize completionCallbackId=_completionCallbackId;
@property(copy, nonatomic) NSString *transactionCallbackId; // @synthesize transactionCallbackId=_transactionCallbackId;
@property(retain, nonatomic) NSString *stringFromData; // @synthesize stringFromData=_stringFromData;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long requestErrorCode; // @synthesize requestErrorCode=_requestErrorCode;
@property(nonatomic) _Bool isRequestIssuedSuccess; // @synthesize isRequestIssuedSuccess=_isRequestIssuedSuccess;
@property(nonatomic) _Bool isRequestIssued; // @synthesize isRequestIssued=_isRequestIssued;
- (id)getPrimaryAccountIdentifier:(id)arg1;
- (void)getCards:(id)arg1;
- (void)closeAppleWallet:(id)arg1;
- (void)checkPairedDevices:(id)arg1;
- (void)completeAddPaymentPass:(id)arg1;
- (void)addPaymentPassViewController:(id)arg1 generateRequestWithCertificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addPaymentPassViewController:(id)arg1 didFinishAddingPaymentPass:(id)arg2 error:(id)arg3;
- (void)startAddPaymentPass:(id)arg1;
- (void)isAvailable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
