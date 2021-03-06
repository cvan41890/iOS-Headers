/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDCollection, EDReference;

@interface EDPivotArea : NSObject
{
    _Bool mGrandCol;
    _Bool mGrandRow;
    _Bool mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;
- (id)init;
- (void)dealloc;
- (_Bool)grandRow;
- (void)setGrandRow:(_Bool)arg1;
- (_Bool)grandCol;
- (void)setGrandCol:(_Bool)arg1;
- (_Bool)outline;
- (void)setOutline:(_Bool)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)offset;
- (void)setOffset:(id)arg1;
- (id)references;

@end

