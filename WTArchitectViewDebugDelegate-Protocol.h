//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, WTArchitectView, WTWarning;

@protocol WTArchitectViewDebugDelegate <NSObject>
- (void)architectView:(WTArchitectView *)arg1 didEncounterInternalError:(NSError *)arg2;
- (void)architectView:(WTArchitectView *)arg1 didEncounterInternalWarning:(WTWarning *)arg2;
@end
