//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLKLoggingTransport.h"

@class GDTCORTransport;

@interface MLKFirelogTransport : NSObject <MLKLoggingTransport>
{
    GDTCORTransport *_transport;
}

+ (id)defaultTransport;
@property(readonly, nonatomic) GDTCORTransport *transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (id)initWithTransport:(id)arg1;
- (void)transportLogEvent:(id)arg1;

@end
