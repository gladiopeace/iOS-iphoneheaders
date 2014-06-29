/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioSearchResultCategory.h>

@class NSString, NSDictionary, NSArray;

@interface RadioMutableSearchResultCategory : RadioSearchResultCategory

@property (assign,nonatomic) long long categoryType; 
@property (assign,nonatomic) bool hasMoreResults; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSDictionary * responseDictionary; 
@property (nonatomic,copy) NSArray * stationResults; 
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setCategoryType:(long long)arg1 ;
-(void)setHasMoreResults:(bool)arg1 ;
-(void)setStationResults:(id)arg1 ;
-(void)setResponseDictionary:(id)arg1 ;
@end
