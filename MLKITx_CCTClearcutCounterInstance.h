//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MLKITx_CCTClearcutCounters, NSString;

@interface MLKITx_CCTClearcutCounterInstance : NSObject <NSCopying>
{
    NSString *_name;
    MLKITx_CCTClearcutCounters *_counters;
}

- (void).cxx_destruct;
- (void)incrementWithDimension:(id)arg1 amount:(long long)arg2;
- (void)incrementWithDimension:(id)arg1;
- (void)increment;
- (id)counters;
- (id)name;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 counters:(id)arg2;

@end
