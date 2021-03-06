/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable;

@interface SUNetworkMonitor : NSObject
{
    struct __SCNetworkReachability *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    _Bool _roaming;
}

+ (void)setHoldsWiFiAssertion:(_Bool)arg1;
+ (_Bool)holdsWiFiAssertion;
+ (id)sharedInstance;
- (void)_operatorBundleChanged;
- (void)_carrierBundleChanged;
- (_Bool)_isCurrentlyRoaming;
- (_Bool)isCellularDataRoamingEnabled;
- (void)setCellularRoaming:(_Bool)arg1;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_initNetworkObservation;
- (void)setCurrentNetworkType:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isCellularRoaming;
- (_Bool)isNetworkTypeCellular:(int)arg1;
- (int)currentNetworkType;
- (void)dealloc;
- (id)init;

@end

