/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSURL, NSData;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSURL * endpoint; 
@property (nonatomic,copy) NSData * rawRequest; 
@property (assign,nonatomic) int timeoutInSeconds; 
+(id)sendToProtobufConduit;
+(id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(id)endpoint;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEndpoint:(id)arg1 ;
-(id)rawRequest;
-(void)setRawRequest:(id)arg1 ;
-(int)timeoutInSeconds;
-(void)setTimeoutInSeconds:(int)arg1 ;
@end

