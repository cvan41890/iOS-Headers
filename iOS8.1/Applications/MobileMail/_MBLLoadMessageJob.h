/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFMailMessage;

@interface _MBLLoadMessageJob : NSObject
{
    MFMailMessage *_message;
    id _mbl;
}

@property(readonly, nonatomic) MFMailMessage *message; // @synthesize message=_message;
- (void)dealloc;
- (id)initForMessage:(id)arg1 forMBLMailbox:(id)arg2;
- (void)run;

@end

