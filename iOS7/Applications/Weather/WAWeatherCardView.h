/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface WAWeatherCardView : UIView
{
    UIImageView *_locationIndicatorView;
    NSString *_cityName;
    _Bool _isLocalWeatherCity;
    UILabel *_timeLabel;
    UILabel *_temperatureLabel;
    UIImageView *_cityNameImage;
}

+ (id)locationIndicatorImage;
@property(retain, nonatomic) UIImageView *cityNameImage; // @synthesize cityNameImage=_cityNameImage;
@property(nonatomic) _Bool isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
@property(readonly, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *cityName;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

