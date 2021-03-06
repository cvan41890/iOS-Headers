/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@interface DetailScrollView : UIView
{
    id _delegate;
    _Bool _scrolling;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_snapBack;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_didEndScrolling;
@property(readonly, nonatomic) UIView *contentView;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGPoint contentOffset;
- (_Bool)canBecomeFirstResponder;

@end

