//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MLKITx_SRLAPI, MLKITx_SRLMapBindingKey;

@interface MLKITx_SRLImplementationAPIDependency : NSObject <NSCopying>
{
    _Bool _optional;
    MLKITx_SRLAPI *_apiMetadata;
    MLKITx_SRLMapBindingKey *_mapBindingKey;
}

@property(readonly, nonatomic) MLKITx_SRLMapBindingKey *mapBindingKey; // @synthesize mapBindingKey=_mapBindingKey;
@property(readonly, nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) MLKITx_SRLAPI *apiMetadata; // @synthesize apiMetadata=_apiMetadata;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAPIMetadata:(id)arg1 optional:(_Bool)arg2 mapBindingKey:(id)arg3;

@end

