/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet, NSArray;

@interface IDSDServiceController : NSObject {

	NSMutableDictionary* _services;
	NSMutableDictionary* _servicesToNameMap;
	NSMutableDictionary* _servicesToTopicMap;
	NSSet* _allAdHocServices;

}

@property (nonatomic,readonly) NSArray * allServices; 
@property (nonatomic,retain,readonly) NSSet * allAdHocServices;                //@synthesize allAdHocServices=_allAdHocServices - In the implementation block
@property (nonatomic,retain,readonly) NSSet * allPrimaryServices; 
+(id)sharedInstance;
-(id)allServicesWithAdHocServiceType:(unsigned)arg1 ;
-(id)serviceWithIdentifier:(id)arg1 ;
-(id)serviceWithPushTopic:(id)arg1 ;
-(NSSet *)allPrimaryServices;
-(void)_loadServices;
-(void)_loadServiceWithDictionary:(id)arg1 ;
-(NSSet *)allAdHocServices;
-(void)dealloc;
-(id)init;
-(NSArray *)allServices;
-(id)serviceWithName:(id)arg1 ;
@end

