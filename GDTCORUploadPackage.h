//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class GDTCORClock, GDTCORStorage, NSSet, NSTimer;

@interface GDTCORUploadPackage : NSObject <NSSecureCoding>
{
    _Bool _isDelivered;
    _Bool _isHandled;
    NSTimer *_expirationTimer;
    NSSet *_events;
    GDTCORClock *_deliverByTime;
    long long _target;
    GDTCORStorage *_storage;
    id <NSSecureCoding><GDTCORUploadPackageProtocol> _handler;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) id <NSSecureCoding><GDTCORUploadPackageProtocol> handler; // @synthesize handler=_handler;
@property(retain, nonatomic) GDTCORStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) long long target; // @synthesize target=_target;
@property(retain, nonatomic) GDTCORClock *deliverByTime; // @synthesize deliverByTime=_deliverByTime;
@property(retain, nonatomic) NSSet *events; // @synthesize events=_events;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)checkIfPackageIsExpired:(id)arg1;
- (void)retryDeliveryInTheFuture;
- (void)completeDelivery;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copy;
- (id)initWithTarget:(long long)arg1;

@end

