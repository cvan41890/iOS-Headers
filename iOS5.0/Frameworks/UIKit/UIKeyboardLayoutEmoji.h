/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardLayout.h>

#import "UIKeyboardEmojiController-Protocol.h"

@class UIButton, UIKeyboardEmojiCategoriesControl, UIKeyboardEmojiCategoryController, UIKeyboardEmojiFactory, UIKeyboardEmojiRecentsController, UIKeyboardEmojiScrollView;

@interface UIKeyboardLayoutEmoji : UIKeyboardLayout <UIKeyboardEmojiController>
{
    UIKeyboardEmojiScrollView *_emojiView;
    UIKeyboardEmojiCategoriesControl *_categoriesView;
    UIButton *_globeButton;
    UIButton *_deleteButton;
    struct CGRect _globeFrame;
    struct CGRect _deleteFrame;
    struct CGRect _categoryFrame;
    struct CGPoint _initialDragPoint;
    UIKeyboardEmojiFactory *_emojiFactory;
    UIKeyboardEmojiRecentsController *_recentsController;
    UIKeyboardEmojiCategoryController *_categoryController;
}

+ (void)emojiKeyboardPreferencesChanged;
+ (id)localizedStringForKey:(id)arg1;
+ (BOOL)isLandscape;
+ (id)emojiLayout;
@property(readonly) struct CGRect categoryFrame; // @synthesize categoryFrame=_categoryFrame;
@property(readonly) struct CGRect deleteFrame; // @synthesize deleteFrame=_deleteFrame;
@property(readonly) struct CGRect globeFrame; // @synthesize globeFrame=_globeFrame;
- (void)categoryReselected;
- (void)categoryChanged;
- (void)showKeyboardType:(int)arg1 withAppearance:(int)arg2;
- (void)categoryChangedNoSounds;
- (BOOL)shouldShowIndicator;
- (void)deleteEnd;
- (void)deleteBegin;
- (void)globeSwitch;
- (void)globeDown;
- (void)globeLongPressGestureRecognized:(id)arg1;
- (void)setKeyboardDefault;
- (id)recents;
- (void)emojiSelected:(id)arg1;
- (id)emojiForPrivateCodePoint:(id)arg1;
- (id)defaultsDictionary;
- (void)layoutSubviews;
- (SEL)handlerForNotification:(id)arg1;
- (void)handleFrameChangeNotification:(id)arg1;
- (void)deactivateActiveKeys;
- (void)clearUnusedObjects;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (BOOL)setDefaultsDictionary:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

