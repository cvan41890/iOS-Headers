//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying>
{
    NSData *_continuationMarker;
    NSMutableArray *_queryResults;
}

@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) NSMutableArray *queryResults; // @synthesize queryResults=_queryResults;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasContinuationMarker;
- (id)queryResultsAtIndex:(unsigned int)arg1;
- (unsigned int)queryResultsCount;
- (void)addQueryResults:(id)arg1;
- (void)clearQueryResults;

@end

