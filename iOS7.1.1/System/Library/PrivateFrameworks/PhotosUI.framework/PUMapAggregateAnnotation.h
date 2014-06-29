/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUMapAnnotationAnimatable.h>

@class NSMutableSet, NSArray, NSObject, NSString, NSDate;

@interface PUMapAggregateAnnotation : NSObject <PUMapAnnotationAnimatable> {

	CGPoint _originalCoordinate;
	unsigned long long _hash;
	NSMutableSet* _subAnnotations;
	NSArray* _mapItems;
	NSObject* _itemId;
	unsigned long long _relativeOrder;
	CGPoint _coordinate;

}

@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) CGPoint originalCoordinate; 
@property (nonatomic,readonly) NSObject * itemId; 
@property (nonatomic,readonly) NSDate * dateCreated; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * mapItems; 
@property (nonatomic,readonly) NSMutableSet * subAnnotations; 
@property (assign,nonatomic) unsigned long long relativeOrder;              //@synthesize relativeOrder=_relativeOrder - In the implementation block
-(unsigned long long)count;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)title;
-(long long)compare:(id)arg1 ;
-(id)subtitle;
-(void).cxx_destruct;
-(id)dateCreated;
-(CGPoint)coordinate;
-(id)newestMaxMapItems:(unsigned long long)arg1 ;
-(id)compactDescription;
-(id)itemId;
-(id)mapItems;
-(CGPoint)originalCoordinate;
-(void)setCoordinate:(CGPoint)arg1 ;
-(void)resetCoordinateToOriginal;
-(bool)containsAnnotation:(id)arg1 ;
-(long long)annotationSortingCompareWithAnnotation:(id)arg1 ;
-(id)subAnnotations;
-(unsigned long long)relativeOrder;
-(void)setRelativeOrder:(unsigned long long)arg1 ;
-(id)initWithCoordinate:(CGPoint)arg1 mapItems:(id)arg2 ;
-(void)addSubAnnotation:(id)arg1 ;
-(void)_updateComputedValuesForSubAnnotationUpdate;
-(void)removeSubAnnotation:(id)arg1 ;
-(void)removeAllSubAnnotations;
@end

