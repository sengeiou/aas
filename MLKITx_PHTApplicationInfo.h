//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, GPBInt32Array, NSMutableArray, NSString;

@interface MLKITx_PHTApplicationInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *commitToken; // @dynamic commitToken;
@property(nonatomic) int fetchReason; // @dynamic fetchReason;
@property(nonatomic) _Bool hasCommitToken; // @dynamic hasCommitToken;
@property(nonatomic) _Bool hasFetchReason; // @dynamic hasFetchReason;
@property(nonatomic) _Bool hasOperationExecutionMs; // @dynamic hasOperationExecutionMs;
@property(nonatomic) _Bool hasPackageName; // @dynamic hasPackageName;
@property(nonatomic) _Bool hasPackageVersion; // @dynamic hasPackageVersion;
@property(nonatomic) _Bool hasRequestedServingVersion; // @dynamic hasRequestedServingVersion;
@property(nonatomic) _Bool hasServingVersion; // @dynamic hasServingVersion;
@property(nonatomic) _Bool hasSourcePackageName; // @dynamic hasSourcePackageName;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(retain, nonatomic) GPBEnumArray *logSourceArray; // @dynamic logSourceArray;
@property(readonly, nonatomic) unsigned long long logSourceArray_Count; // @dynamic logSourceArray_Count;
@property(retain, nonatomic) NSMutableArray *logSourceNameArray; // @dynamic logSourceNameArray;
@property(readonly, nonatomic) unsigned long long logSourceNameArray_Count; // @dynamic logSourceNameArray_Count;
@property(nonatomic) int operationExecutionMs; // @dynamic operationExecutionMs;
@property(copy, nonatomic) NSString *packageName; // @dynamic packageName;
@property(nonatomic) int packageVersion; // @dynamic packageVersion;
@property(nonatomic) long long requestedServingVersion; // @dynamic requestedServingVersion;
@property(nonatomic) long long servingVersion; // @dynamic servingVersion;
@property(copy, nonatomic) NSString *sourcePackageName; // @dynamic sourcePackageName;
@property(copy, nonatomic) NSString *user; // @dynamic user;
@property(retain, nonatomic) GPBInt32Array *weakExperimentIdArray; // @dynamic weakExperimentIdArray;
@property(readonly, nonatomic) unsigned long long weakExperimentIdArray_Count; // @dynamic weakExperimentIdArray_Count;

@end
