//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSArray, NSInputStream, NSMutableArray, NSMutableData, NSMutableSet, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLRequest, SRDelegateController, SRIOConsumerPool, SRProxyConnect, SRSecurityOptions;

@interface SRWebSocket : NSObject <NSStreamDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_consumers;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_data> *_readBuffer;
    unsigned long long _readBufferOffset;
    NSObject<OS_dispatch_data> *_outputBuffer;
    unsigned long long _outputBufferOffset;
    unsigned char _currentFrameOpcode;
    unsigned long long _currentFrameCount;
    unsigned long long _readOpCount;
    unsigned int _currentStringScanPosition;
    NSMutableData *_currentFrameData;
    NSString *_closeReason;
    NSString *_secKey;
    SRSecurityOptions *_securityOptions;
    _Bool _streamSecurityValidated;
    unsigned char _currentReadMaskKey[4];
    unsigned long long _currentReadMaskOffset;
    _Bool _closeWhenFinishedWriting;
    _Bool _failed;
    NSURLRequest *_urlRequest;
    _Bool _sentClose;
    _Bool _didFail;
    _Bool _cleanupScheduled;
    int _closeCode;
    _Bool _isPumping;
    NSMutableSet *_scheduledRunloops;
    SRWebSocket *_selfRetain;
    NSArray *_requestedProtocols;
    SRIOConsumerPool *_consumerPool;
    SRProxyConnect *_proxyConnect;
    _Bool _allowsUntrustedSSLCertificates;
    long long _readyState;
    NSURL *_url;
    struct __CFHTTPMessage *_receivedHTTPHeaders;
    NSArray *_requestCookies;
    NSString *_protocol;
    SRDelegateController *_delegateController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SRDelegateController *delegateController; // @synthesize delegateController=_delegateController;
@property(nonatomic) _Bool allowsUntrustedSSLCertificates; // @synthesize allowsUntrustedSSLCertificates=_allowsUntrustedSSLCertificates;
@property(readonly, copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSArray *requestCookies; // @synthesize requestCookies=_requestCookies;
@property(readonly, nonatomic) struct __CFHTTPMessage *receivedHTTPHeaders; // @synthesize receivedHTTPHeaders=_receivedHTTPHeaders;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long readyState; // @synthesize readyState=_readyState;
@property(retain, nonatomic) NSOperationQueue *delegateOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property(nonatomic) __weak id <SRWebSocketDelegate> delegate;
- (void)safeHandleEvent:(unsigned long long)arg1 stream:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendFrameWithOpcode:(int)arg1 data:(id)arg2;
- (void)_pumpScanner;
- (_Bool)_innerPumpScanner;
- (void)_readUntilBytes:(const void *)arg1 length:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_readUntilHeaderCompleteWithCallback:(CDUnknownBlockType)arg1;
- (void)_cleanupSelfReference:(id)arg1;
- (void)_scheduleCleanup;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2 dataLength:(unsigned long long)arg3;
- (void)_addConsumerWithDataLength:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2 readToCurrentFrame:(_Bool)arg3 unmaskBytes:(_Bool)arg4;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_pumpWriting;
- (void)_readFrameNew;
- (void)_readFrameContinue;
- (void)_handleFrameHeader:(CDStruct_6a6a01a4)arg1 curData:(id)arg2;
- (void)_handleFrameWithData:(id)arg1 opCode:(long long)arg2;
- (void)closeConnection;
- (void)handleCloseWithData:(id)arg1;
- (void)handlePong:(id)arg1;
- (void)handlePing:(id)arg1;
- (void)sendPing:(id)arg1;
- (_Bool)sendDataNoCopy:(id)arg1 error:(id *)arg2;
- (_Bool)sendData:(id)arg1 error:(id *)arg2;
- (_Bool)sendString:(id)arg1 error:(id *)arg2;
- (void)send:(id)arg1;
- (void)_writeData:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_closeWithProtocolError:(id)arg1;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)close;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setupNetworkServiceType:(unsigned long long)arg1;
- (void)_updateSecureStreamOptions;
- (void)didConnect;
- (void)_readHTTPHeader;
- (void)_HTTPHeadersDidFinish;
- (_Bool)_checkHandshake:(struct __CFHTTPMessage *)arg1;
- (void)_connectionDoneWithError:(id)arg1 readStream:(id)arg2 writeStream:(id)arg3;
- (void)open;
- (void)dealloc;
- (void)assertOnWorkQueue;
- (id)initWithURL:(id)arg1 protocols:(id)arg2 allowsUntrustedSSLCertificates:(_Bool)arg3;
- (id)initWithURL:(id)arg1 protocols:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2 allowsUntrustedSSLCertificates:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

