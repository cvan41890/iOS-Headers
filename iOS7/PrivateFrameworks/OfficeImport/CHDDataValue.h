/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CHDDataValue : NSObject
{
    struct CHDDataPoint mDataPoint;
}

+ (id)dataValueWithIndex:(long long)arg1 value:(struct EDValue *)arg2;
+ (id)dataValue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;
- (id)contentFormatWithResources:(id)arg1;
- (void)setDataPoint:(struct CHDDataPoint *)arg1;
- (struct CHDDataPoint *)dataPoint;
- (void)setValue:(struct EDValue *)arg1;
- (struct EDValue *)value;
- (void)setIndex:(long long)arg1;
- (long long)index;
- (id)initWithIndex:(long long)arg1 value:(struct EDValue *)arg2;
- (id)init;

@end

