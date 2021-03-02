//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLKITx_PHTApplicationInfo, MLKITx_PHTHeterodyneSyncInfo, MLKITx_PHTPeriodicTaskInfo, MLKITx_PHTPhenotypeApiErrorInfo, MLKITx_PHTPhenotypeInfo, NSMutableArray;

@interface MLKITx_PHTPhenotypeLogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MLKITx_PHTApplicationInfo *applicationInfo; // @dynamic applicationInfo;
@property(retain, nonatomic) NSMutableArray *bulkApplicationInfoArray; // @dynamic bulkApplicationInfoArray;
@property(readonly, nonatomic) unsigned long long bulkApplicationInfoArray_Count; // @dynamic bulkApplicationInfoArray_Count;
@property(nonatomic) _Bool hasApplicationInfo; // @dynamic hasApplicationInfo;
@property(nonatomic) _Bool hasHeterodyneSyncInfo; // @dynamic hasHeterodyneSyncInfo;
@property(nonatomic) _Bool hasModuleVersion; // @dynamic hasModuleVersion;
@property(nonatomic) _Bool hasPeriodicTaskInfo; // @dynamic hasPeriodicTaskInfo;
@property(nonatomic) _Bool hasPhenotypeApiErrorInfo; // @dynamic hasPhenotypeApiErrorInfo;
@property(nonatomic) _Bool hasPhenotypeInfo; // @dynamic hasPhenotypeInfo;
@property(retain, nonatomic) MLKITx_PHTHeterodyneSyncInfo *heterodyneSyncInfo; // @dynamic heterodyneSyncInfo;
@property(nonatomic) int moduleVersion; // @dynamic moduleVersion;
@property(retain, nonatomic) MLKITx_PHTPeriodicTaskInfo *periodicTaskInfo; // @dynamic periodicTaskInfo;
@property(retain, nonatomic) MLKITx_PHTPhenotypeApiErrorInfo *phenotypeApiErrorInfo; // @dynamic phenotypeApiErrorInfo;
@property(retain, nonatomic) MLKITx_PHTPhenotypeInfo *phenotypeInfo; // @dynamic phenotypeInfo;

@end

