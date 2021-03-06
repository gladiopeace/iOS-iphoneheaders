/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAdjustment.h>

@class NSString, NSDictionary, PLManagedAsset;

@interface PLManagedAdjustment : _PLManagedAdjustment

@property (assign,nonatomic) int adjustmentType; 
@property (nonatomic,copy) NSString * filterName; 
@property (nonatomic,copy) NSDictionary * filterSettings; 
@property (nonatomic,copy) PLManagedAsset * asset; 
+(void)fixupAssetSizeFromAdjustments:(id)arg1 ;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 effectFilterCount:(unsigned long long*)arg3 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 withOriginalImageSize:(CGSize)arg3 effectFilterCount:(unsigned long long*)arg4 ;
+(void)convertAffineTransform:(CGAffineTransform)arg1 andCropRect:(CGRect)arg2 toStraightenAngle:(double*)arg3 andCropRect:(CGRect*)arg4 ;
+(CGRect)convertCropRect:(CGRect)arg1 fromImageSize:(CGSize)arg2 toImageSize:(CGSize)arg3 ;
+(void)convertStraightenAngle:(double)arg1 andCropRect:(CGRect)arg2 toAffineTransform:(CGAffineTransform*)arg3 andCropRect:(CGRect*)arg4 ;
-(int)adjustmentType;
-(void)setAdjustmentType:(int)arg1 ;
-(id)metadataProperties;
@end

