/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKCameraController.h>

@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;
@class VKAnimation;

@interface VKAnnotationTrackingCameraController : VKCameraController {

	<VKTrackableAnnotation>* _annotation;
	<VKTrackableAnnotationPresentation>* _annotationPresentation;
	VKAnimation* _currentAnimation;
	VKPoint _currentAnimationStartPoint;
	VKPoint _currentAnimationStartCameraPosition;
	VKPoint _currentAnimationEndPoint;
	VKPoint _currentAnimationEndCameraPosition;
	double _pendingChangeDuration;
	VKAnimation* _currentHeadingAnimation;
	double _pendingHeadingChangeDuration;
	float _headingAnimationCompletedAngle;
	VKEdgeInsets _edgeInsets;
	long long _annotationMarkersAnimatingInCount;
	long long _zoomStyle;
	struct {
		unsigned hasPendingChange : 1;
		unsigned paused : 1;
		unsigned trackingHeading : 1;
		unsigned hasPendingHeadingChange : 1;
		unsigned isInitialRegionChange : 1;
		unsigned isJumpingToAnnotation : 1;
		unsigned annotationImplementsAccuracy : 1;
		unsigned annotationImplementsHeading : 1;
		unsigned annotationImplementsExpectedCoordinateUpdateInterval : 1;
		unsigned annotationImplementsExpectedHeadingUpdateInterval : 1;
	}  _flags;

}

@property (assign,nonatomic) VKEdgeInsets edgeInsets;                                      //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) long long zoomStyle;                                          //@synthesize zoomStyle=_zoomStyle - In the implementation block
@property (nonatomic,readonly) <VKTrackableAnnotation> * annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (getter=isTrackingHeading,nonatomic,readonly) bool trackingHeading; 
-(void)dealloc;
-(VKEdgeInsets)edgeInsets;
-(bool)isAnimating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id).cxx_construct;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(id)annotation;
-(void)setGesturing:(bool)arg1 ;
-(bool)isTrackingHeading;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3 ;
-(void)willAnimateInAnnotationMarkers:(id)arg1 ;
-(void)didAnimateInAnnotationMarkers:(id)arg1 ;
-(void)setZoomStyle:(long long)arg1 ;
-(void)resumeAnimation;
-(void)pauseAnimation;
-(void)updateFramerate;
-(double)_minTrackingCameraDistance;
-(double)_zoomLevelForCameraPosition:(VKPoint)arg1 ;
-(void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 isInitial:(bool)arg3 ;
-(void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2 ;
-(long long)zoomStyle;
@end

