//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLKITx_PHTPhenotypeFlags, NSString;

@interface MLKITx_PHTPhenotypeFlag : NSObject
{
    NSString *_name;
    MLKITx_PHTPhenotypeFlags *_flags;
}

@property(readonly, nonatomic) MLKITx_PHTPhenotypeFlags *flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 flags:(id)arg2;

@end

