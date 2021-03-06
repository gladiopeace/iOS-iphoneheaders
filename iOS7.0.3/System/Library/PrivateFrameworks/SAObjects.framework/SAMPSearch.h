/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) int maxResults; 
@property (nonatomic,copy) NSArray * searchTypes; 
@property (assign,nonatomic) BOOL strict; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(void)setMaxResults:(int)arg1 ;
-(int)maxResults;
-(id)groupIdentifier;
-(void)setConstraints:(id)arg1 ;
-(id)constraints;
-(void)setSearchTypes:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)searchTypes;
-(BOOL)strict;
-(void)setStrict:(BOOL)arg1 ;
@end

