//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DChartAllSceneObjectDelegate.h"
#import "TSCH3DSceneDelegate.h"
#import "TSCH3DSceneObjectDelegator.h"

@class NSString, TSCH3DGetBoundsPipeline, TSCH3DLabelsRendererTransforms, TSUMutablePointerSet;

__attribute__((visibility("hidden")))
@interface TSCH3DChartBoundsLayoutSceneDelegate : NSObject <TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate>
{
    TSCH3DGetBoundsPipeline *mPipeline;
    TSCH3DLabelsRendererTransforms *mTransforms;
    struct map<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds, std::__1::less<TSCH3D::SceneObjectSharedPointer>, std::__1::allocator<std::__1::pair<const TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>>> mSceneObjectLabelsBounds;
    struct ActiveLabelsTypeBounds *mActiveBounds;
    BOOL mLabelsHaveCache;
    BOOL mLabelsDidOverride;
    TSUMutablePointerSet *mDebugCachedSceneObjects;
}

+ (id)sceneDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)willSubmitElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willRenderElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didEndProcessingSceneObject:(id)arg1;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute *)arg1 sceneObject:(id)arg2 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg3;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(int)arg2 alignment:(unsigned int)arg3 elementIndex:(unsigned int)arg4 forSceneObject:(id)arg5;
- (void)setOffset:(const tvec3_17f03ce0 *)arg1 labelType:(int)arg2 boundsIndex:(int)arg3 forSceneObject:(id)arg4;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)p_addAllActiveLabelsBounds;
- (void)willRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)p_extendProjectedBoundsForCachedLabelBounds:(const struct CachedLabelBounds *)arg1 offset:(const tvec3_17f03ce0 *)arg2;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(int)arg2;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (id)interestedClasses;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

