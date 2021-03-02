//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (MLKReporting)
+ (void)mlk_saveInternalMLErrorWithDescription:(id)arg1 underlyingError:(id)arg2 error:(id *)arg3;
+ (void)mlk_saveInternalMLErrorWithDescription:(id)arg1 error:(id *)arg2;
+ (void)mlk_saveUnknownMLErrorWithDescription:(id)arg1 error:(id *)arg2;
+ (void)mlk_saveInvalidArgumentMLErrorWithDescription:(id)arg1 error:(id *)arg2;
+ (void)mlk_saveDownloadErrorWithCode:(long long)arg1 description:(id)arg2 error:(id *)arg3;
+ (void)mlk_saveMLError:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 error:(id *)arg4;
+ (void)mlk_saveMLError:(long long)arg1 description:(id)arg2 error:(id *)arg3;
+ (id)mlk_internalMLErrorWithDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)mlk_internalMLErrorWithDescription:(id)arg1;
+ (id)mlk_unknownMLErrorWithDescription:(id)arg1;
+ (id)mlk_invalidArgumentMLErrorWithDescription:(id)arg1;
+ (id)mlk_mlErrorWithHttpStatusCode:(long long)arg1 description:(id)arg2;
+ (id)mlk_mlErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)mlk_mlErrorWithCode:(long long)arg1 description:(id)arg2;
@end
