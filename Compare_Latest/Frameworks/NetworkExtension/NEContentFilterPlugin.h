//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface NEContentFilterPlugin : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    BOOL _filterBrowsers;
    BOOL _filterSockets;
    NSString *_pluginType;
    NSDictionary *_vendorConfiguration;
    NSString *_serverAddress;
    NSString *_username;
    NSString *_organization;
    NSData *_passwordReference;
    NSData *_identityReference;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSData *identityReference; // @synthesize identityReference=_identityReference;
@property(copy) NSData *passwordReference; // @synthesize passwordReference=_passwordReference;
@property(copy) NSString *organization; // @synthesize organization=_organization;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(copy) NSDictionary *vendorConfiguration; // @synthesize vendorConfiguration=_vendorConfiguration;
@property BOOL filterSockets; // @synthesize filterSockets=_filterSockets;
@property BOOL filterBrowsers; // @synthesize filterBrowsers=_filterBrowsers;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (void)setPluginType:(id)arg1;

@end

