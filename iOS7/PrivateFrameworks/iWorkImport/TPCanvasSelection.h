/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPSelection.h>

#import "NSCopying-Protocol.h"
#import <iWorkImport/TSDCanvasSelection-Protocol.h>

@class NSSet, TSDDrawableInfo<TSDContainerInfo>;

// Not exported
@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection, NSCopying>
{
    NSSet *mInfos;
    NSSet *mExcludedInfos;
    NSSet *mAdditionalInfos;
    TSDDrawableInfo<TSDContainerInfo> *mContainer;
}

+ (id)emptySelection;
+ (id)selectionWithInfos:(id)arg1;
+ (id)canvasSelectionFromCanvasSelection:(id)arg1 withToggledInfo:(id)arg2;
+ (id)canvasSelectionFromSelection:(id)arg1;
+ (Class)archivedSelectionClass;
- (void)p_commonCopyTo:(id)arg1;
- (void)saveToArchive:(struct CanvasSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CanvasSelectionArchive *)arg1 unarchiver:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)infosOfClass:(Class)arg1;
- (_Bool)containsUnlockedKindOfClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (_Bool)containsKindOfClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container;
@property(readonly, nonatomic) unsigned long long infoCount;
@property(readonly, nonatomic) NSSet *infos;
@property(readonly, nonatomic) NSSet *rawInfos;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector *)arg1 startChar:(unsigned long long)arg2 endChar:(unsigned long long)arg3 rightToLeft:(_Bool)arg4 sameLine:(_Bool)arg5;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector *)arg1;
- (id)copyWithNewRange:(struct _NSRange)arg1;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange)arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange)arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange)arg2;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)dealloc;
@property(readonly, nonatomic) int canvasSelectionKind;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(_Bool)arg6 leadingCharIndex:(unsigned long long)arg7 infos:(id)arg8 excludedInfos:(id)arg9 additionalInfos:(id)arg10 container:(id)arg11;

@end

