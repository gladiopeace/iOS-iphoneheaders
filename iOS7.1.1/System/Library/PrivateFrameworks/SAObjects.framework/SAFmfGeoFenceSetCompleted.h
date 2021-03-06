/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAFmfGeoFence, NSURL, NSString;

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAFmfGeoFence * geoFence; 
@property (nonatomic,copy) NSURL * searchContext; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)geoFenceSetCompleted;
+(id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSearchContext:(id)arg1 ;
-(id)searchContext;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)geoFence;
-(void)setGeoFence:(id)arg1 ;
@end

