/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {

	bool _useDefaultModalPresentationStyle;
	bool _useDefaultModalTransitionStyle;
	long long _modalPresentationStyle;
	long long _modalTransitionStyle;
	bool _animates;

}

@property (assign,nonatomic) bool useDefaultModalPresentationStyle;              //@synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle - In the implementation block
@property (assign,nonatomic) bool useDefaultModalTransitionStyle;                //@synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                   //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                     //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
@property (assign,nonatomic) bool animates;                                      //@synthesize animates=_animates - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)modalPresentationStyle;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(id)defaultSegueClassName;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(bool)useDefaultModalPresentationStyle;
-(bool)useDefaultModalTransitionStyle;
-(bool)animates;
-(void)setUseDefaultModalPresentationStyle:(bool)arg1 ;
-(void)setUseDefaultModalTransitionStyle:(bool)arg1 ;
-(void)setAnimates:(bool)arg1 ;
@end

