/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@interface MCCrypto : NSObject
+(SecCertificateRef)copyCertificateRefFromPEMData:(id)arg1 ;
+(id)_decryptionFailedError;
+(void)createNewActivationLockBypassCodeOutCode:(char*)arg1 outRawBytes:(char*)arg2 outHash:(char*)arg3 ;
+(id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2 ;
+(SecCertificateRef)copyCertificateRefFromPKCS1Data:(id)arg1 ;
+(bool)isValidPKCS12Data:(id)arg1 ;
+(id)objectFromEncryptedData:(id)arg1 outCertificate:(_SecCertificate*)arg2 outError:(id*)arg3 ;
+(id)createAndStoreNewActivationLockBypassCodeAndHash;
+(id)storedActivationLockBypassCode;
+(void)clearStoredActivationLockBypassCode;
+(void)clearStoredActivationLockHash;
+(id)storedActivationLockBypassCodeHash;
@end

