/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBDataProvider-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "SynchronizedDefaultsDelegate-Protocol.h"

@class BBBulletinRequest, City, NSTimer;

@interface WATodayDataProvider : NSObject <BBDataProvider, CLLocationManagerDelegate, SynchronizedDefaultsDelegate>
{
    _Bool _isReachable;
    BBBulletinRequest *_lastBulletin;
    City *_city;
    NSTimer *_reachabilityTimer;
}

@property(retain, nonatomic) NSTimer *reachabilityTimer; // @synthesize reachabilityTimer=_reachabilityTimer;
@property(retain, nonatomic) City *city; // @synthesize city=_city;
@property(nonatomic) _Bool isReachable; // @synthesize isReachable=_isReachable;
@property(retain) BBBulletinRequest *lastBulletin; // @synthesize lastBulletin=_lastBulletin;
- (id)newTodayRequest;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)sortDescriptors;
- (void)ubiquitousDefaultsDidChange:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)cleanupSharedManagers;
- (void)cleanupUpdaters;
- (void)updateForCity:(id)arg1;
- (void)becameReachable;
- (void)applyDeferredUnreachablityUpdate;
- (void)_applyDeferredReachablityUpdate:(id)arg1;
- (void)resetLocale;
- (void)_cleanupReachabilityTimer;
- (void)_reachabilityChanged:(id)arg1;
- (void)prepareToRefreshWeather;
- (void)setupLocationControllers;
- (void)prepareToDisplay;
- (void)refreshForUnitsChange;
- (void)dealloc;
- (id)init;

@end

