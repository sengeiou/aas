//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTMSessionFetcher, MLKITx_CCTClearcutFlags, MLKITx_CCTClearcutMetaLogger, MLKITx_CCTLogWriter, MLKITx_GIPPseudonymousIDStore, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSURL;

@interface MLKITx_CCTClearcutUploader : NSObject
{
    _Bool _isUploading;
    _Bool _collectForDebugEnabled;
    id <CCTClearcutAuthorizer> _authorizer;
    NSURL *_logDirectory;
    NSURL *_serverURL;
    NSURL *_batchServerURL;
    long long _uploadPeriodMilliseconds;
    unsigned long long _backgroundTaskID;
    NSObject<OS_dispatch_queue> *_queue;
    MLKITx_CCTLogWriter *_logWriter;
    NSHashTable *_listeners;
    id <CCTLogRequestFilter> _requestFilter;
    MLKITx_GIPPseudonymousIDStore *_pseudonymousIDStore;
    id <CCTUploaderLockProvider> _lockProvider;
    MLKITx_CCTClearcutFlags *_flags;
    id <MLKITx_PHTPhenotype> _phenotype;
    long long _lastPhenotypeUpdateTimeMilliseconds;
    unsigned long long _foregroundUploadDelaySeconds;
    id <CCTClockProtocol> _clock;
    id <NSObject> _backgroundObserver;
    id <NSObject> _foregroundObserver;
    NSObject<OS_dispatch_source> *_timer;
    id <CCTUploaderLock> _lock;
    NSMutableArray *_pendingHandlers;
    NSMutableArray *_pendingLogFiles;
    NSMutableDictionary *_pendingBatchLogFiles;
    GTMSessionFetcher *_currentFetcher;
    NSError *_lastError;
    long long _startUploadTimeMilliseconds;
    NSObject<OS_dispatch_source> *_collectForDebugTimer;
    MLKITx_CCTClearcutMetaLogger *_metaLogger;
}

+ (void)crashIfNecessary;
+ (void)crashIfMultipleUploadersInstantiated;
@property(retain, nonatomic) MLKITx_CCTClearcutMetaLogger *metaLogger; // @synthesize metaLogger=_metaLogger;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *collectForDebugTimer; // @synthesize collectForDebugTimer=_collectForDebugTimer;
@property(nonatomic) _Bool collectForDebugEnabled; // @synthesize collectForDebugEnabled=_collectForDebugEnabled;
@property(nonatomic) long long startUploadTimeMilliseconds; // @synthesize startUploadTimeMilliseconds=_startUploadTimeMilliseconds;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) GTMSessionFetcher *currentFetcher; // @synthesize currentFetcher=_currentFetcher;
@property(retain, nonatomic) NSMutableDictionary *pendingBatchLogFiles; // @synthesize pendingBatchLogFiles=_pendingBatchLogFiles;
@property(retain, nonatomic) NSMutableArray *pendingLogFiles; // @synthesize pendingLogFiles=_pendingLogFiles;
@property(retain, nonatomic) NSMutableArray *pendingHandlers; // @synthesize pendingHandlers=_pendingHandlers;
@property(retain, nonatomic) id <CCTUploaderLock> lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id <NSObject> foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(retain, nonatomic) id <NSObject> backgroundObserver; // @synthesize backgroundObserver=_backgroundObserver;
@property(readonly, nonatomic) id <CCTClockProtocol> clock; // @synthesize clock=_clock;
@property(nonatomic) unsigned long long foregroundUploadDelaySeconds; // @synthesize foregroundUploadDelaySeconds=_foregroundUploadDelaySeconds;
@property(nonatomic) long long lastPhenotypeUpdateTimeMilliseconds; // @synthesize lastPhenotypeUpdateTimeMilliseconds=_lastPhenotypeUpdateTimeMilliseconds;
@property(readonly, nonatomic) id <MLKITx_PHTPhenotype> phenotype; // @synthesize phenotype=_phenotype;
@property(readonly, nonatomic) MLKITx_CCTClearcutFlags *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) id <CCTUploaderLockProvider> lockProvider; // @synthesize lockProvider=_lockProvider;
@property(readonly, nonatomic) MLKITx_GIPPseudonymousIDStore *pseudonymousIDStore; // @synthesize pseudonymousIDStore=_pseudonymousIDStore;
@property(readonly, nonatomic) id <CCTLogRequestFilter> requestFilter; // @synthesize requestFilter=_requestFilter;
@property(readonly, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(readonly, nonatomic) MLKITx_CCTLogWriter *logWriter; // @synthesize logWriter=_logWriter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(nonatomic) long long uploadPeriodMilliseconds; // @synthesize uploadPeriodMilliseconds=_uploadPeriodMilliseconds;
@property(retain, nonatomic) NSURL *batchServerURL; // @synthesize batchServerURL=_batchServerURL;
@property(retain, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(readonly, nonatomic) NSURL *logDirectory; // @synthesize logDirectory=_logDirectory;
@property(readonly, nonatomic) id <CCTClearcutAuthorizer> authorizer; // @synthesize authorizer=_authorizer;
- (void).cxx_destruct;
- (void)setServerURL:(id)arg1 batchServerURL:(id)arg2;
- (void)stopCollectForDebugPeriodicUpload;
- (void)startCollectForDebugPeriodicUpload;
- (void)checkCollectForDebug;
- (void)setCollectForDebugExpiryTimeMilliseconds:(long long)arg1;
- (id)createFetcher:(id)arg1 context:(id)arg2 data:(id)arg3 logFiles:(id)arg4 currentTimeMilliseconds:(long long)arg5;
- (id)createLogRequest:(id)arg1 logData:(id)arg2 uploaderState:(id)arg3 currentTimeMilliseconds:(long long)arg4;
- (id)logFileIfEligibleForUpload:(id)arg1 context:(id)arg2;
- (void)maybeUpdateWithPhenotype;
- (void)cleanupOldLogFiles;
- (void)cleanupEmptyDirectories;
- (void)finishUploadAndCallHandlers;
- (void)cancelUpload;
- (void)processResponse:(id)arg1 context:(id)arg2 logFiles:(id)arg3 requestTime:(long long)arg4 isBatched:(_Bool)arg5 error:(id)arg6;
- (void)uploadBatch:(id)arg1 files:(id)arg2;
- (void)uploadNonBatch:(id)arg1;
- (void)uploadNext;
- (id)groupLogFiles:(id)arg1;
- (id)batchContextFromContext:(id)arg1;
- (id)logFiles;
- (_Bool)canUploadNow:(long long)arg1;
- (void)uploadWithCompletionHandler:(CDUnknownBlockType)arg1 isOnForeground:(_Bool)arg2;
- (void)endBackgroundTask;
- (_Bool)startBackgroundTask;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)stopAutoUploadOnForeground;
- (void)startAutoUploadOnForegroundWithDelay:(unsigned long long)arg1;
- (void)stopAutoUploadOnBackground;
- (void)startAutoUploadOnBackground;
- (void)stopPeriodicUpload;
- (void)startPeriodicUploadWithTimeInterval:(unsigned long long)arg1 leeway:(unsigned long long)arg2;
- (void)startPeriodicUploadWithTimeInterval:(unsigned long long)arg1;
- (void)stopAutoUpload;
- (void)startAutoUpload;
- (void)uploadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAuthorizer:(id)arg1 listeners:(id)arg2 logDirectory:(id)arg3 serverURL:(id)arg4 batchServerURL:(id)arg5 requestFilter:(id)arg6 pseudonymousIDStore:(id)arg7 clock:(id)arg8 lockProvider:(id)arg9 flags:(id)arg10 phenotype:(id)arg11 clearcutLogger:(id)arg12;
- (id)initWithAuthorizer:(id)arg1 listeners:(id)arg2 logDirectory:(id)arg3 isSharedDirectory:(_Bool)arg4 serverURL:(id)arg5 batchServerURL:(id)arg6 requestFilter:(id)arg7;
- (id)initWithAuthorizer:(id)arg1 listeners:(id)arg2 logDirectory:(id)arg3 isSharedDirectory:(_Bool)arg4;
- (id)initWithAuthorizer:(id)arg1 listeners:(id)arg2;
- (id)initWithAuthorizer:(id)arg1;

@end

