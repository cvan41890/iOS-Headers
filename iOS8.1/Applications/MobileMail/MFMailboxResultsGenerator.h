/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_MFResultsGenerator.h"

@class MFMailboxUid, NSSet;

@interface MFMailboxResultsGenerator : _MFResultsGenerator
{
    MFMailboxUid *_mailboxUid;
    NSSet *_pushedMailboxUids;
}

+ (id)resultsDictionaryFromMailboxUid:(id)arg1 forKeys:(id)arg2;
@property(retain, nonatomic) NSSet *pushedMailboxUids; // @synthesize pushedMailboxUids=_pushedMailboxUids;
@property(retain, nonatomic) MFMailboxUid *mailboxUid; // @synthesize mailboxUid=_mailboxUid;
- (id)_pushState:(id)arg1;
- (id)_level:(id)arg1;
- (id)_type:(id)arg1;
- (id)_relativePath:(id)arg1;
- (id)_displayName:(id)arg1;
- (SEL)selectorForKey:(id)arg1;
- (void)dealloc;

@end

