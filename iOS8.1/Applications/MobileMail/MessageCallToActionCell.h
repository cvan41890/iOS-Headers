/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class MessageCallToAction, _MessageCallToActionCellView;

@interface MessageCallToActionCell : UITableViewCell
{
    _MessageCallToActionCellView *_actionView;
}

- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) id <MFSuggestionHandlingDelegate> delegate;
@property(retain, nonatomic) MessageCallToAction *action;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

