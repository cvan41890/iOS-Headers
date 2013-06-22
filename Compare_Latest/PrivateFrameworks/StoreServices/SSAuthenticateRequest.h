/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSCoding-Protocol.h"

@class SSAuthenticationContext;

@interface SSAuthenticateRequest : SSRequest <SSCoding>
{
    SSAuthenticationContext *_authenticationContext;
}

@property(readonly, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void)_sendResponseToDelegate:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id *)arg2;
- (id)handleFailureResponse:(id)arg1;
- (id)initWithXPCEncoding:(void *)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void *)copyXPCEncoding;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(nonatomic) id <SSAuthenticateRequestDelegate> delegate; // @dynamic delegate;

@end
