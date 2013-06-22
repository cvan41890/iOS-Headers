/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, UIColor;

@interface EKEventDetailAttendeesListView : UIView
{
    NSArray *_acceptedNames;
    NSArray *_maybeNames;
    NSArray *_declinedNames;
    NSArray *_noReplyNames;
    NSArray *_ungroupedNames;
    UIColor *textColor;
    UIColor *highlightedTextColor;
    BOOL highlighted;
    BOOL _groupsNames;
}

@property(nonatomic) BOOL groupsNames; // @synthesize groupsNames=_groupsNames;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) NSArray *ungroupedNames; // @synthesize ungroupedNames=_ungroupedNames;
@property(retain, nonatomic) NSArray *noReplyNames; // @synthesize noReplyNames=_noReplyNames;
@property(retain, nonatomic) NSArray *declinedNames; // @synthesize declinedNames=_declinedNames;
@property(retain, nonatomic) NSArray *maybeNames; // @synthesize maybeNames=_maybeNames;
@property(retain, nonatomic) NSArray *acceptedNames; // @synthesize acceptedNames=_acceptedNames;
- (void)dealloc;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(float)arg4;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(float)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (float)_heightForGroupOfAttendeeNames:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)isHighlighted;

@end
