/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIBarButtonItem.h"

@interface LongPressableButtonItem : UIBarButtonItem
{
    id _longPressTarget;
    SEL _longPressAction;
}

- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (void)_attachGestureRecognizerToView:(id)arg1;
- (void)longPressGestureRecognized:(id)arg1;

@end

