/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CIContext, EAGLContext, NSObject<OS_dispatch_queue>, PLEffectsFullsizeView, PLEffectsGridView, PLVideoPreviewView;

@interface PLCameraEffectsRenderer : NSObject
{
    EAGLContext *_eaglContext;
    CIContext *_ciContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _isShowingGrid;
    _Bool _gridTransitionInFlight;
    _Bool _gridTransitionIsAnimated;
    id <PLCameraEffectsRendererDelegate> _delegate;
    double _lastReportedFrameDropTime;
    unsigned long long _totalFramesSinceLastReportedFrameDrop;
    unsigned long long _droppedFramesSinceLastReportedFrameDrop;
    _Bool __atomicPreviewStartedNotificationNeeded;
    _Bool _atomicMirrorFilterRendering;
    _Bool __previewLayerEnabled;
    _Bool __inBackground;
    PLEffectsFullsizeView *__renderEffectsFullsizeView;
    PLEffectsGridView *__renderGridView;
    PLVideoPreviewView *_atomicVideoPreviewView;
    unsigned long long _atomicFilterIndex;
    id __atomicPreviewStartedBlock;
    long long _atomicCameraMode;
}

@property(getter=_isInBackground, setter=_setInBackground:) _Bool _inBackground; // @synthesize _inBackground=__inBackground;
@property(nonatomic, setter=_setPreviewLayerEnabled:) _Bool _previewLayerEnabled; // @synthesize _previewLayerEnabled=__previewLayerEnabled;
@property long long cameraMode; // @synthesize cameraMode=_atomicCameraMode;
@property _Bool mirrorFilterRendering; // @synthesize mirrorFilterRendering=_atomicMirrorFilterRendering;
@property(copy, setter=_setPreviewStartedBlock:) id _previewStartedBlock; // @synthesize _previewStartedBlock=__atomicPreviewStartedBlock;
@property(setter=_setPreviewStartedNotificationNeeded:) _Bool _previewStartedNotificationNeeded; // @synthesize _previewStartedNotificationNeeded=__atomicPreviewStartedNotificationNeeded;
@property unsigned long long atomicFilterIndex; // @synthesize atomicFilterIndex=_atomicFilterIndex;
@property(retain) PLVideoPreviewView *atomicVideoPreviewView; // @synthesize atomicVideoPreviewView=_atomicVideoPreviewView;
@property(retain, setter=_setRenderGridView:) PLEffectsGridView *_renderGridView; // @synthesize _renderGridView=__renderGridView;
@property(retain, setter=_setRenderEffectsFullsizeView:) PLEffectsFullsizeView *_renderEffectsFullsizeView; // @synthesize _renderEffectsFullsizeView=__renderEffectsFullsizeView;
@property(nonatomic) id <PLCameraEffectsRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)_gridFrameForCurrentFilters;
- (struct CGRect)_zoomedFrameForRect:(struct CGRect)arg1 fromFullFrame:(struct CGRect)arg2 toZoomFrame:(struct CGRect)arg3;
- (struct CGRect)_frameToZoomFromFrame:(struct CGRect)arg1 toFrame:(struct CGRect)arg2 withinFrame:(struct CGRect)arg3;
- (void)_animateLayer:(id)arg1 startFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 viewTransform:(struct CGAffineTransform)arg4 animationDuration:(double)arg5 animationTimingFunction:(id)arg6 animationDelegate:(id)arg7;
- (void)_animateGridLayerZoomToGrid:(_Bool)arg1;
- (void)_animateToGrid:(_Bool)arg1 layer:(id)arg2 fadeOutLayer:(id)arg3 startFrame:(struct CGRect)arg4 endFrame:(struct CGRect)arg5 completion:(id)arg6;
- (id)_animatedLayerForView:(id)arg1;
- (void)_forceResetToFilteredRendering:(_Bool)arg1;
- (void)_transitionFromGrid:(id)arg1;
- (void)_transitionToGrid:(id)arg1;
- (void)_setGridTransitionIsInFlight:(_Bool)arg1;
- (_Bool)_gridTransitionInFlight;
- (void)setShowGrid:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isShowingGrid) _Bool showGrid;
- (void)_handlePreviewStartedFiltered:(_Bool)arg1;
- (void)_notifyOfRenderIfNecessary;
- (void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(id)arg1;
- (void)_previewStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_resumeRendering;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_updateStatsForFrameWasDropped:(_Bool)arg1;
- (void)_reportStatsForFrameDrops;
- (void)didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)renderWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_renderWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_destroyEffectsGridView;
- (void)_destroyEffectsFullsizeView;
- (id)_setupEffectsGridView;
- (id)_setupEffectsFullsizeView;
- (void)_tearDownEffectsView:(id)arg1;
- (void)_setupEffectsView:(id)arg1;
@property(retain, nonatomic) PLVideoPreviewView *videoPreviewView;
- (void)_updateEffectsFullsizeView;
- (void)setFilterIndex:(unsigned long long)arg1 forceStateChange:(_Bool)arg2 renderNotifyBlock:(id)arg3;
@property(nonatomic) unsigned long long filterIndex;
- (void)_setVideoDataOutputEnabled:(_Bool)arg1;
- (void)_createContextIfNecessary;
- (void)dealloc;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;

@end

