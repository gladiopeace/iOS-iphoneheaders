/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAWeatherLocation;

@interface SAWeatherLocationDelete : SADomainCommand

@property (nonatomic,retain) SAWeatherLocation * weatherLocation; 
+(id)locationDelete;
+(id)locationDeleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)weatherLocation;
-(void)setWeatherLocation:(id)arg1 ;
@end

