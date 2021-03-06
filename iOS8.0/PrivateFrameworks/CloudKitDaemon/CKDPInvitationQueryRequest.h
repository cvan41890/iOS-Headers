//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface CKDPInvitationQueryRequest : PBRequest <NSCopying>
{
    int _queryType;
    BOOL _queryAllContainers;
    struct {
        unsigned int queryType:1;
        unsigned int queryAllContainers:1;
    } _has;
}

+ (id)options;
@property(nonatomic) int queryType; // @synthesize queryType=_queryType;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasQueryAllContainers;
@property(nonatomic) BOOL queryAllContainers; // @synthesize queryAllContainers=_queryAllContainers;
@property(nonatomic) BOOL hasQueryType;

@end

