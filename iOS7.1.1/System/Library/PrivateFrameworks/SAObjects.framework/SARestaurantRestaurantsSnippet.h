/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISirilandSnippet.h>

@class NSArray, NSDictionary;

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (nonatomic,copy) NSArray * attributionOrder; 
@property (nonatomic,copy) NSArray * contributingProviderIds; 
@property (nonatomic,copy) NSDictionary * providerPunchOutMap; 
@property (nonatomic,copy) NSArray * restaurants; 
+(id)restaurantsSnippet;
+(id)restaurantsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)siri_restaurants_getNavigationPathRestaurant:(id*)arg1 andType:(long long*)arg2 ;
-(id)siri_restaurants_navigationPathForRestaurantAtIndex:(long long)arg1 type:(long long)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)attributionOrder;
-(void)setAttributionOrder:(id)arg1 ;
-(id)contributingProviderIds;
-(void)setContributingProviderIds:(id)arg1 ;
-(id)providerPunchOutMap;
-(void)setProviderPunchOutMap:(id)arg1 ;
-(id)restaurants;
-(void)setRestaurants:(id)arg1 ;
@end

