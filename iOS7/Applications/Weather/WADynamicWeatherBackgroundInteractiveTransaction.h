/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CALayer;

@interface WADynamicWeatherBackgroundInteractiveTransaction : NSObject
{
    double _progress;
    CALayer *_layer;
    CALayer *_toLayer;
    long long _swipeDirection;
}

@property(nonatomic) long long swipeDirection; // @synthesize swipeDirection=_swipeDirection;
@property(nonatomic) CALayer *toLayer; // @synthesize toLayer=_toLayer;
@property(nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)dealloc;

@end

