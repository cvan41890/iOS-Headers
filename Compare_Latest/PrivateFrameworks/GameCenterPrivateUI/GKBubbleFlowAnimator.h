//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINavigationControllerDelegate.h"
#import "UITabBarControllerDelegate.h"

@class GKBubbleSet, NSString;

@interface GKBubbleFlowAnimator : NSObject <UINavigationControllerDelegate, UITabBarControllerDelegate>
{
    GKBubbleSet *_mostRecentOverlayBubbleSet;
}

+ (id)sharedAnimator;
@property(retain, nonatomic) GKBubbleSet *mostRecentOverlayBubbleSet; // @synthesize mostRecentOverlayBubbleSet=_mostRecentOverlayBubbleSet;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesGoingOffscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesComingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesStayingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithInfo:(id)arg1;
- (void)_resetContentInBubbles:(id)arg1 viewController:(id)arg2 adoptionFlags:(CDStruct_b207fc29)arg3;
- (void)_addKeyframesForSubviewsToFadeInForTransitionWithInfo:(id)arg1;
- (void)_cleanupSubviewsWeFadedOutForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeOutForTransitionWithInfo:(id)arg1;
- (void)_stopIdleAnimatingOffscreenBubblesAfterTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForAnimatingBubblePathsForTransitionWithInfo:(id)arg1;
- (id)_pathTransitionInfoFromPathAnimator:(id)arg1 forTransitionWithInfo:(id)arg2;
- (union _GLKVector3)restingWorldPositionForBubble:(id)arg1 viewController:(id)arg2 forTransitionWithInfo:(id)arg3 getFrame:(struct CGRect *)arg4;
- (void)_addKeyframesForCustomToAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomFromAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForViewCrossfadeForTransitionWithInfo:(id)arg1;
- (void)_finishTransitionWithInfo:(id)arg1;
- (void)_finalPreparationsBeforeBeginningTransitionWithInfo:(id)arg1;
- (void)_prepareTransitionWithInfo:(id)arg1;
- (void)_syncBubbleVisibilityWithInfo:(id)arg1;
- (int)syncOverlayViewBubbles:(id)arg1 withViewController:(id)arg2;
- (id)transitionInfoForBubbleFlowTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_transitionInfoForBubbleFlowInvalidationOfViewController:(id)arg1;
- (id)_transitionInfoForBubbleFlowSimpleUpdateOfViewController:(id)arg1;
- (void)invalidateBubblePositionsForViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateBubblesFromViewController:(id)arg1 toViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_animateBubblesTransitionWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_savvyViewControllerForViewController:(id)arg1 fromViewController:(id)arg2;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)dealloc;
- (void)_returnBubblesFromTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)_moveBubblesToTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)overlayViewNeedsUpdateForRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)tabBarController:(id)arg1 animatorForFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

