/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCInterface;

@interface MFXPCEndpointInfo : NSObject
{
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    id _shouldAcceptClient;
    id _exportedObjectForClient;
}

+ (id)endpointInfoWithExportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 shouldAcceptClient:(id)arg3 exportedObjectForClient:(void)arg4;
@property(readonly, copy, nonatomic) id exportedObjectForClient; // @synthesize exportedObjectForClient=_exportedObjectForClient;
@property(readonly, copy, nonatomic) id shouldAcceptClient; // @synthesize shouldAcceptClient=_shouldAcceptClient;
@property(readonly, retain, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(readonly, retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
- (void)dealloc;

@end

