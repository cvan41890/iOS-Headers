/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_ContextDictionary.h"

@class MFSparseMutable64IndexSet, NSArray, NSSet;

@interface MegaMRowsChangedContext : _ContextDictionary
{
}

+ (id)_sharedKeySet;
- (_Bool)hasChanges;
@property(retain, nonatomic) MFSparseMutable64IndexSet *mergedConversations;
@property(retain, nonatomic) NSArray *removedMessageInfos;
@property(retain, nonatomic) NSArray *addedMessageInfos;
@property(retain, nonatomic) NSSet *relocatedIndexPaths;
@property(retain, nonatomic) NSSet *destinationIndexPaths;
@property(retain, nonatomic) NSSet *updatedIndexPaths;
@property(retain, nonatomic) NSSet *removedIndexPaths;
@property(retain, nonatomic) NSSet *insertedIndexPaths;

@end

