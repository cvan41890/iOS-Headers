/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInternalRepresentation.h>

@class NSDate, NSString;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation
{
    NSString *_sessionID;
    NSDate *_lastTurnDate;
    NSString *_playerID;
    NSString *_invitedBy;
    NSString *_inviteMessage;
    NSString *_status;
    int _matchOutcome;
    int _order;
}

+ (id)codedPropertyKeys;
@property(nonatomic) int order; // @synthesize order=_order;
@property(nonatomic) int matchOutcome; // @synthesize matchOutcome=_matchOutcome;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(retain, nonatomic) NSString *invitedBy; // @synthesize invitedBy=_invitedBy;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSDate *lastTurnDate; // @synthesize lastTurnDate=_lastTurnDate;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
