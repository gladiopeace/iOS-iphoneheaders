/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, UIColor, NSString, UIImage, NSArray;

@interface HKDataCategory : NSObject {

	NSMutableArray* _dataUnitGroups;
	NSMutableDictionary* _cachedGradients;
	NSMutableDictionary* _cachedRoundedCornerGradients;
	UIColor* _topColor;
	UIColor* _bottomColor;
	BOOL _isMeCategory;
	unsigned long long _categoryID;
	NSString* _displayName;
	NSString* _listIconName;
	UIImage* _listIcon;
	UIImage* _dashboardIcon;
	UIImage* _shareIcon;

}

@property (nonatomic,readonly) unsigned long long categoryID;              //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * listIconName;                    //@synthesize listIconName=_listIconName - In the implementation block
@property (nonatomic,readonly) UIImage * listIcon;                         //@synthesize listIcon=_listIcon - In the implementation block
@property (nonatomic,readonly) UIImage * dashboardIcon;                    //@synthesize dashboardIcon=_dashboardIcon - In the implementation block
@property (nonatomic,readonly) UIImage * shareIcon;                        //@synthesize shareIcon=_shareIcon - In the implementation block
@property (nonatomic,readonly) NSArray * dataUnitGroups; 
@property (nonatomic,readonly) BOOL isMeCategory;                          //@synthesize isMeCategory=_isMeCategory - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
-(UIImage *)shareIcon;
-(unsigned long long)categoryID;
-(UIImage *)listIcon;
-(id)_generateGradientOfHeight:(double)arg1 ;
-(id)_generateRoundedCornerGradientWithHeight:(double)arg1 ;
-(NSArray *)dataUnitGroups;
-(void)addDataUnitGroup:(id)arg1 ;
-(id)gradientWithHeight:(double)arg1 ;
-(id)roundedCornerGradientWithHeight:(double)arg1 ;
-(NSString *)listIconName;
-(UIImage *)dashboardIcon;
-(BOOL)isMeCategory;
@end

