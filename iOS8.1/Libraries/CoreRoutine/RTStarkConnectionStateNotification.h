/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "RTNotification.h"

@interface RTStarkConnectionStateNotification : RTNotification
{
    long long _connectionState;
}

@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
- (id)notificationName;
- (id)initWithConnectionState:(long long)arg1;

@end

