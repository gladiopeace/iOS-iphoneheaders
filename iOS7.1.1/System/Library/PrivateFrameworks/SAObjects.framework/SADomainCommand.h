/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSNumber;

@interface SADomainCommand : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,copy) NSURL * targetPluginId; 
@property (nonatomic,copy) NSNumber * timeout; 
+(id)domainCommand;
+(id)domainCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTimeout:(id)arg1 ;
-(id)timeout;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)targetAppId;
-(void)setTargetAppId:(id)arg1 ;
-(id)targetPluginId;
-(void)setTargetPluginId:(id)arg1 ;
@end

