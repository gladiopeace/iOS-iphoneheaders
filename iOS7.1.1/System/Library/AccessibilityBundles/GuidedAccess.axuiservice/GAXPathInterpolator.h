/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@class UIBezierPath;

@interface GAXPathInterpolator : NSObject {

	UIBezierPath* _startingPath;
	UIBezierPath* _endingPath;
	void* _interpolationPathElementMappings;

}

@property (nonatomic,copy) UIBezierPath * startingPath;                           //@synthesize startingPath=_startingPath - In the implementation block
@property (nonatomic,copy) UIBezierPath * endingPath;                             //@synthesize endingPath=_endingPath - In the implementation block
@property (assign,nonatomic) void* interpolationPathElementMappings;              //@synthesize interpolationPathElementMappings=_interpolationPathElementMappings - In the implementation block
-(id)endingPath;
-(void)setEndingPath:(id)arg1 ;
-(id)startingPath;
-(id)initWithStartingPath:(id)arg1 endingPath:(id)arg2 ;
-(id)interpolatedPathForProgress:(float)arg1 ;
-(void)setStartingPath:(id)arg1 ;
-(void)setInterpolationPathElementMappings:(void*)arg1 ;
-(void*)interpolationPathElementMappings;
-(id)_enhancedByAddingPointsMatchingPath:(id)arg1 originalPath:(id)arg2 ;
-(CGPoint)_pointFromStartingPointAtDistance:(double)arg1 inPath:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

