/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDReference;

@interface EDPane : NSObject
{
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
}

+ (id)pane;
- (void)setActivePane:(int)arg1;
- (int)activePane;
- (void)setTopLeftCell:(id)arg1;
- (id)topLeftCell;
- (void)setYSplitPosition:(double)arg1;
- (double)ySplitPosition;
- (void)setXSplitPosition:(double)arg1;
- (double)xSplitPosition;
- (void)dealloc;
- (id)init;

@end

