/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MapsChromeModeController, MNGuidanceCurrentRoadDisplayDelegate;
#import <Maps/Maps-Structs.h>
@class ChromeViewController, UIView, MNGuidanceCurrentRoadSign, InterruptibleAnimation, NSString;

@interface MNGuidanceCurrentRoadDisplay : NSObject {

	ChromeViewController* _viewController;
	<MapsChromeModeController>* _container;
	UIView* _superview;
	BOOL _hidingSigns;
	BOOL _showingRoadDescription;
	MNGuidanceCurrentRoadSign* _currentRoadSign;
	InterruptibleAnimation* _hidingAnimation;
	<MNGuidanceCurrentRoadDisplayDelegate>* _delegate;
	NSString* _lastRoadDescription;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (assign,nonatomic,__weak) <MNGuidanceCurrentRoadDisplayDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,@dynamic) BOOL showsDimmedSign; 
@property (nonatomic,readonly) UIEdgeInsets minimumEdgeInsets;                                      //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (nonatomic,retain) InterruptibleAnimation * hidingAnimation;                              //@synthesize hidingAnimation=_hidingAnimation - In the implementation block
@property (nonatomic,retain) NSString * lastRoadDescription;                                        //@synthesize lastRoadDescription=_lastRoadDescription - In the implementation block
-(void)removeFromContainingViewController;
-(id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3 ;
-(void)setShowsDimmedSign:(BOOL)arg1 ;
-(void)setShowsDimmedSign:(BOOL)arg1 animation:(id)arg2 ;
-(void)setCurrentRoadDescription:(id)arg1 ;
-(void)setCurrentRoadDescriptionIsUnreliable:(BOOL)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(UIEdgeInsets)minimumEdgeInsets;
-(id)hidingAnimation;
-(void)setHidingAnimation:(id)arg1 ;
-(void)_setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setLastRoadDescription:(id)arg1 ;
-(BOOL)showsDimmedSign;
-(id)lastRoadDescription;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

