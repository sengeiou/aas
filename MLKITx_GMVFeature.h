//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MLKITx_GMVFeature : NSObject
{
    _Bool _hasTrackingID;
    NSString *_type;
    unsigned long long _trackingID;
    struct CGRect _bounds;
}

@property(readonly) unsigned long long trackingID; // @synthesize trackingID=_trackingID;
@property(readonly) _Bool hasTrackingID; // @synthesize hasTrackingID=_hasTrackingID;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;

@end

