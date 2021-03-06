//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSEnvironment, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface APSTopicGroup : NSObject
{
    APSEnvironment *_environment;
    NSMutableDictionary *_hashesToEnabledTopics;
    NSMutableDictionary *_hashesToIgnoredTopics;
    NSMutableDictionary *_hashesToOpportunisticTopics;
    int _category;
}

+ (void)populateHashDictionary:(id)arg1 withSet:(id)arg2;
@property(readonly, nonatomic) NSString *logString;
@property(readonly, nonatomic) NSDictionary *hashesToOpportunisticTopics;
@property(readonly, nonatomic) NSDictionary *hashesToIgnoredTopics;
@property(readonly, nonatomic) NSDictionary *hashesToEnabledTopics;
@property(readonly, nonatomic) NSSet *opportunisticTopics;
@property(readonly, nonatomic) NSSet *ignoredTopics;
@property(readonly, nonatomic) NSSet *enabledTopics;
- (int)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 pretend:(BOOL)arg4;
- (void)_logChangesFor:(id)arg1 oldTopics:(id)arg2 newTopics:(id)arg3;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1 category:(int)arg2;

@end

