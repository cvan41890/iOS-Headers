/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CHDSeries.h>

#import "CHDMarkerOwner-Protocol.h"

@class CHDMarker;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner>
{
    CHDMarker *mMarker;
    _Bool mSmooth;
}

- (void)setSmooth:(_Bool)arg1;
- (_Bool)isSmooth;
- (void)setMarker:(id)arg1;
- (id)marker;
- (void)dealloc;
- (id)initWithChart:(id)arg1;

@end
