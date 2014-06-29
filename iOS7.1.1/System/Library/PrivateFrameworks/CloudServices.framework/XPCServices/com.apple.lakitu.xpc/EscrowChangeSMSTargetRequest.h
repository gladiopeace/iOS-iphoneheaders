/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:43:51 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.lakitu/EscrowGenericRequest.h>

@class NSString;

@interface EscrowChangeSMSTargetRequest : EscrowGenericRequest {

	NSString* bypassToken;
	NSString* countryDialCode;
	NSString* countryCode;
	NSString* phoneNumber;
	NSString* appleID;
	NSString* iCloudPassword;

}

@property (nonatomic,retain) NSString * bypassToken; 
@property (nonatomic,retain) NSString * countryDialCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,retain) NSString * phoneNumber; 
@property (nonatomic,retain) NSString * appleID; 
@property (nonatomic,retain) NSString * iCloudPassword; 
+(Class)responseClass;
-(void)setCountryDialCode:(id)arg1 ;
-(id)bypassToken;
-(void)setBypassToken:(id)arg1 ;
-(id)countryDialCode;
-(void)setPhoneNumber:(id)arg1 ;
-(id)appleID;
-(void)setAppleID:(id)arg1 ;
-(id)phoneNumber;
-(void).cxx_destruct;
-(id)urlString;
-(id)urlRequest;
-(void)setCountryCode:(id)arg1 ;
-(id)iCloudPassword;
-(void)setICloudPassword:(id)arg1 ;
-(id)countryCode;
-(id)bodyDictionary;
@end

