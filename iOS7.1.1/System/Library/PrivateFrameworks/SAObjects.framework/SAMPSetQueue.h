/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPCollection;

@interface SAMPSetQueue : SADomainCommand

@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,retain) SAMPCollection * mediaItems; 
@property (assign,nonatomic) bool shouldShuffle; 
@property (nonatomic,copy) NSArray * sort; 
+(id)setQueue;
+(id)setQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setFilters:(id)arg1 ;
-(id)filters;
-(id)sort;
-(bool)shouldShuffle;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)mediaItems;
-(void)setMediaItems:(id)arg1 ;
-(void)setShouldShuffle:(bool)arg1 ;
-(void)setSort:(id)arg1 ;
@end

