/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAWebSiteSearch : SADomainCommand

@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * query; 
+(id)siteSearch;
+(id)siteSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
@end

