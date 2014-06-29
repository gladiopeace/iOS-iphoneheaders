/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSDate;

@interface MCCertificatePayload : MCPayload {

	NSData* _certificatePersistentID;
	NSString* _installedOnDeviceID;

}

@property (nonatomic,copy) NSString * installedOnDeviceID;                  //@synthesize installedOnDeviceID=_installedOnDeviceID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;              //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (nonatomic,readonly) bool isRoot; 
@property (nonatomic,readonly) bool isIdentity; 
@property (nonatomic,readonly) NSDate * expiry; 
@property (nonatomic,readonly) bool isSigned; 
-(id)description;
-(id)title;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)expiry;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(SecCertificateRef)copyCertificate;
-(SecIdentityRef)copyIdentityFromKeychain;
-(bool)isIdentity;
-(id)installedOnDeviceID;
-(id)certificatePersistentID;
-(bool)isSigned;
-(void)setCertificatePersistentID:(id)arg1 ;
-(void)setInstalledOnDeviceID:(id)arg1 ;
-(bool)isRoot;
@end

