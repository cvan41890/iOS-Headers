/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewHeaderFooterView.h"

@class UIImageView, UILabel, UIView;

@interface ThreadBannerView : UITableViewHeaderFooterView
{
    UIView *_backgroundView;
    UILabel *_subjectLabel;
    UILabel *_alternateLabel;
    UIImageView *_notifyIcon;
}

+ (double)defaultHeaderHeight;
- (void)setTableView:(id)arg1;
- (void)setAlternateText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundView;
- (id)_label:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGRect)rectForNotifyIconWithBounds:(struct CGRect)arg1;
- (struct CGRect)rectForAlternateLabelWithBounds:(struct CGRect)arg1 iconRect:(struct CGRect)arg2;
- (struct CGRect)rectForSubjectWithBounds:(struct CGRect)arg1 alternateRect:(struct CGRect)arg2 iconRect:(struct CGRect)arg3;
- (void)setDisplayNotifyIcon:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

