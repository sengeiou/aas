//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLKITx_EXHExperimentIds, NSArray, NSDictionary, NSString;

@interface MLKITx_PHTPhenotypeExperimentTokens : NSObject
{
    NSString *_user;
    NSArray *_tokens;
    NSDictionary *_crossTokens;
    MLKITx_EXHExperimentIds *_externalExperimentIDs;
}

+ (id)experimentIDsStringWithTokensArray:(id)arg1 userID:(id)arg2;
+ (id)experimentIDsWithTokensArray:(id)arg1 userID:(id)arg2;
@property(readonly, copy, nonatomic) MLKITx_EXHExperimentIds *externalExperimentIDs; // @synthesize externalExperimentIDs=_externalExperimentIDs;
@property(readonly, nonatomic) NSDictionary *crossTokens; // @synthesize crossTokens=_crossTokens;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSString *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)equalTokenArrays:(id)arg1 other:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUser:(id)arg1 tokens:(id)arg2 crossTokens:(id)arg3;
- (id)initWithUser:(id)arg1 tokens:(id)arg2 crossTokens:(id)arg3 externalExperimentIDs:(id)arg4;

@end
