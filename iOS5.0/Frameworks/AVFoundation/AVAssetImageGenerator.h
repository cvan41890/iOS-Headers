/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetImageGeneratorInternal, AVVideoComposition, NSString;

@interface AVAssetImageGenerator : NSObject
{
    AVAssetImageGeneratorInternal *_priv;
}

+ (id)assetImageGeneratorWithAsset:(id)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)_ensureFigAssetImageGenerator;
- (struct __CFDictionary *)_createPixelBufferAttributesWithSize:(struct CGSize)arg1;
- (id)_makeAutoreleasedAssetReader;
- (struct CGImage *)copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 actualTime:(CDStruct_1b6d18a9 *)arg2 error:(id *)arg3;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(id)arg2;
- (void)cancelAllCGImageGeneration;
@property(nonatomic) BOOL appliesPreferredTrackTransform;
@property(nonatomic) struct CGSize maximumSize;
@property(copy, nonatomic) NSString *apertureMode;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
@property(nonatomic) CDStruct_1b6d18a9 requestedTimeToleranceBefore;
@property(nonatomic) CDStruct_1b6d18a9 requestedTimeToleranceAfter;
- (id)_optionsDictionary;
- (void)_didGenerateCGImage:(id)arg1;
- (void)_failedToGenerateCGImage:(id)arg1;
- (void)_serverDied;
- (id)_requestWithRequestID:(id)arg1;
- (struct CGSize)_scaledSizeForRenderSize:(struct CGSize)arg1;
- (struct CGImage *)_copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 usingAssetReader:(id)arg2 error:(id *)arg3;
- (id)_NSErrorForError:(long)arg1;

@end

