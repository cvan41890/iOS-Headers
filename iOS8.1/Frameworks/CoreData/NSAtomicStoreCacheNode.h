//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject
{
    NSManagedObjectID *_objectID;
    unsigned long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *propertyCache;
- (BOOL)isEqual:(id)arg1;
- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
- (void)_setVersionNumber:(unsigned int)arg1;
- (unsigned int)_versionNumber;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1;
- (id)init;

@end

