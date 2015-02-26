/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _UIGestureRecognizerFailureMap : NSObject {

	NSMutableArray* _gestureRecognizers;
	char* _failureMap;
	int _unmetFailureRequirementCount;
	int _unmetFailureDependentCount;

}

@property (readonly) BOOL hasUnmetFailureRequirementsOrDependents; 
+(void)buildFailureMapForGestureRecognizer:(id)arg1 ;
+(void)buildFailureMapForGestureRecognizers:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)gestureRecognizerDeallocated:(id)arg1 ;
-(void)reloadFailureMap;
-(void)gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1 ;
-(BOOL)hasUnmetFailureRequirementsOrDependents;
-(void)gestureRecognizerBecameDirty:(id)arg1 ;
-(void)rebuildFailureMap;
-(void)_gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2 ;
-(void)_queueRecognizersForResetIfFinished;
-(id)initWithRelatedGestures:(id)arg1 ;
@end
