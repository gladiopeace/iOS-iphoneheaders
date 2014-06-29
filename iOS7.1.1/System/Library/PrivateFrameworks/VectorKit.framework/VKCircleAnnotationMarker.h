/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKAnnotationMarker.h>

@class VKCircleAnnotationMarkerLayer;

@interface VKCircleAnnotationMarker : VKAnnotationMarker {

	VKCircleAnnotationMarkerLayer* _circleLayer;

}

@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) double distanceRadius; 
-(void)dealloc;
-(id)init;
-(void)prepareForReuse;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(void)setColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)distanceRadius;
-(void)setDistanceRadius:(double)arg1 ;
@end

