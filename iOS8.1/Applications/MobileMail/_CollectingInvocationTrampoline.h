/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface _CollectingInvocationTrampoline : NSObject
{
    id _first;
    id <NSFastEnumeration> _collection;
    _Bool _allMustMatch;
}

- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 allMustMatch:(_Bool)arg2;

@end

