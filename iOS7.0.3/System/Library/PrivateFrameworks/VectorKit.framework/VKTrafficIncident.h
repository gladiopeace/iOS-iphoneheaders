/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString, NSDate;

@interface VKTrafficIncident : NSObject {

	VKPoint _worldPoint;
	NSString* _title;
	NSString* _subtitle;
	int _type;
	SCD_Struct_VK61 _location;
	NSString* _street;
	NSString* _crossStreet;
	NSString* _info;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _lastUpdatedDate;
	float _minZoom;
	NSString* _uniqueString;
	unsigned long long _uniqueID;

}

@property (nonatomic,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSString * uniqueString;                  //@synthesize uniqueString=_uniqueString - In the implementation block
@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * street;                        //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) NSString * crossStreet;                   //@synthesize crossStreet=_crossStreet - In the implementation block
@property (nonatomic,readonly) NSString * info;                          //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdatedDate;                 //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,readonly) VKPoint worldPoint;                       //@synthesize worldPoint=_worldPoint - In the implementation block
@property (nonatomic,readonly) float minZoom;                            //@synthesize minZoom=_minZoom - In the implementation block
-(void)dealloc;
-(int)type;
-(id)title;
-(id)info;
-(id)subtitle;
-(id).cxx_construct;
-(unsigned long long)uniqueID;
-(id)startDate;
-(id)endDate;
-(float)minZoom;
-(VKPoint)worldPoint;
-(id)initWithIncidentData:(const Incident*)arg1 worldPoint:(VKPoint*)arg2 minZoom:(float)arg3 ;
-(id)initWithIncidentData:(const Incident*)arg1 worldPoint:(VKPoint*)arg2 ;
-(id)street;
-(id)crossStreet;
-(BOOL)hasSameIdentifier:(id)arg1 ;
-(id)initWithIncident:(id)arg1 vertices:(SCD_Struct_VK106*)arg2 tileRect:(SCD_Struct_VK47)arg3 tileSize:(double)arg4 ;
-(id)initWithRouteIncident:(id)arg1 ;
-(id)uniqueString;
-(id)lastUpdatedDate;
@end

