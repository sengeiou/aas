//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GULKeychainUtils : NSObject
{
}

+ (id)keychainErrorWithFunction:(id)arg1 status:(int)arg2;
+ (_Bool)removeItemWithQuery:(id)arg1 error:(id *)arg2;
+ (_Bool)setItem:(id)arg1 withQuery:(id)arg2 error:(id *)arg3;
+ (id)getItemWithQuery:(id)arg1 error:(id *)arg2;

@end
