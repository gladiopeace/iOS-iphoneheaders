/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (assign,nonatomic) bool acceptPodcastCollections; 
@property (assign,nonatomic) bool acceptPodcastStations; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSString * query; 
+(id)basicPodcastAppSearch;
+(id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setMaxResults:(long long)arg1 ;
-(long long)maxResults;
-(void)setQuery:(id)arg1 ;
-(id)groupIdentifier;
-(id)query;
-(id)encodedClassName;
-(bool)requiresResponse;
-(bool)acceptPodcastCollections;
-(void)setAcceptPodcastCollections:(bool)arg1 ;
-(bool)acceptPodcastStations;
-(void)setAcceptPodcastStations:(bool)arg1 ;
@end

