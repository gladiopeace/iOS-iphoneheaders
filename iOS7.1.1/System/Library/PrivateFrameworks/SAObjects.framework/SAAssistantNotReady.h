/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAssistantNotReady : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * language; 
+(id)assistantNotReady;
+(id)assistantNotReadyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
@end

