//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTConcurrentMutableIndexSet : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
    NSMutableIndexSet *mMutableIndexSet;
}

- (void)removeAllIndexes;
- (void)addIndex:(unsigned int)arg1;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

