/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:43:51 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.lakitu/EscrowGenericRequest.h>

@class NSString;

@interface EscrowRecoveryRequest : EscrowGenericRequest {

	NSString* encodedBlob;
	NSString* challengeCode;

}

@property (nonatomic,retain) NSString * encodedBlob; 
@property (nonatomic,retain) NSString * challengeCode; 
+(Class)responseClass;
-(void)setEncodedBlob:(id)arg1 ;
-(void)setChallengeCode:(id)arg1 ;
-(id)encodedBlob;
-(id)challengeCode;
-(void).cxx_destruct;
-(id)urlString;
-(id)bodyDictionary;
@end

