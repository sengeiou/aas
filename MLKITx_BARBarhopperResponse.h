//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface MLKITx_BARBarhopperResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *barcodeArray; // @dynamic barcodeArray;
@property(readonly, nonatomic) unsigned long long barcodeArray_Count; // @dynamic barcodeArray_Count;
@property(copy, nonatomic) NSData *debugInfo; // @dynamic debugInfo;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) int status; // @dynamic status;

@end
