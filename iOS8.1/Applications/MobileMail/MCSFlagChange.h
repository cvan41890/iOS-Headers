/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCSMessageOperation.h"

#import "MCSAllMessagesOperation.h"

@class NSMutableDictionary, NSString;

@interface MCSFlagChange : MCSMessageOperation <MCSAllMessagesOperation>
{
    NSMutableDictionary *_flagChanges;
    unsigned int _isDeletion:1;
}

- (void)setIsDeletion:(_Bool)arg1;
- (id)localizedShortOperationDescription;
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;
- (_Bool)willFlag;
- (_Bool)willUnflag;
- (_Bool)willMarkUnread;
- (_Bool)willMarkRead;
@property(readonly, copy) NSString *description;
- (_Bool)isRevertibleForAllMessagesInStore:(id)arg1;
- (_Bool)isRevertibleWithMessages:(id)arg1;
- (_Bool)revertForAllMessagesInStore:(id)arg1;
- (_Bool)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;
- (_Bool)commitToAllMessagesInStore:(id)arg1;
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;
- (void)_sortMessages:(id)arg1 intoLibraryMesages:(id)arg2 nonLibraryMessages:(id)arg3;
- (id)applyPendingChangeToObjects:(id)arg1;
- (id)_applyFlagChange:(id)arg1 toObjects:(id)arg2;
- (void)dealloc;
- (id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

