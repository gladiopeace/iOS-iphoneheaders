/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIPeripheralHostCustomTransition.h>

@interface _UIPeripheralHostParallaxTransitionInfo : NSObject <_UIPeripheralHostCustomTransition> {

	double _parallaxOffset;
	double _gapBetweenViews;
	long long _style;
	long long _operation;

}

@property (assign,nonatomic) double parallaxOffset;               //@synthesize parallaxOffset=_parallaxOffset - In the implementation block
@property (assign,nonatomic) double gapBetweenViews;              //@synthesize gapBetweenViews=_gapBetweenViews - In the implementation block
@property (assign,nonatomic) long long style;                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long operation;                 //@synthesize operation=_operation - In the implementation block
-(void)setGapBetweenViews:(double)arg1 ;
-(void)setParallaxOffset:(double)arg1 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)computeTransition:(id)arg1 forHost:(id)arg2 ;
-(double)gapBetweenViews;
-(double)parallaxOffset;
@end

