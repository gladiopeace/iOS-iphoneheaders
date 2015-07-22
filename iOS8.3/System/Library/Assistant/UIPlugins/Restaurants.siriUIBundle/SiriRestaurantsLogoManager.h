/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:07:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Restaurants/Restaurants-Structs.h>
@class NSMutableDictionary;

@interface SiriRestaurantsLogoManager : NSObject {

	NSMutableDictionary* _providerDict;

}
+(id)weakSharedLogoManager;
-(id)displayNameForProvider:(id)arg1 ;
-(void)updateWithRestaurantsSnippet:(id)arg1 ;
-(CGSize)logoSizeForType:(int)arg1 provider:(id)arg2 ;
-(void)getLogoForType:(int)arg1 provider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setupLocalResources;
-(void)setPunchOut:(id)arg1 forProvider:(id)arg2 ;
-(id)init;
@end
