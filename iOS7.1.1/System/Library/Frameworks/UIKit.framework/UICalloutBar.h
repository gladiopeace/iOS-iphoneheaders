/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UICalloutBarButton, UICalloutBarBackground, NSArray, NSString, UIResponder;

@interface UICalloutBar : UIView {

	id m_delegate;
	CGPoint m_pointBelowControls;
	CGPoint m_pointAboveControls;
	CGPoint m_pointLeftOfControls;
	CGPoint m_pointRightOfControls;
	CGPoint m_targetPoint;
	int m_targetDirection;
	bool m_targetHorizontal;
	bool m_fadeAfterCommand;
	bool m_recalcVisibleItems;
	bool m_shouldAppear;
	int m_pageCount;
	int m_currentPage;
	bool m_supressesHorizontalMovement;
	CGRect m_controlFrame;
	CGRect m_targetRect;
	CGRect m_supressesHorizontalMovementFrame;
	double m_supressedHorizontalMovementX;
	int m_arrowDirection;
	NSMutableArray* m_systemButtons;
	NSMutableArray* m_extraButtons;
	UICalloutBarButton* m_nextButton;
	UICalloutBarButton* m_previousButton;
	NSMutableArray* m_rectsToEvade;
	UICalloutBarBackground* m_overlay;
	double m_fadedTime;
	id m_responderTarget;
	NSArray* m_replacements;
	NSArray* m_extraItems;
	NSString* m_untruncatedString;
	bool m_didPromptForReplace;
	bool m_ignoringEvents;
	bool m_showAllReplacements;
	bool m_ignoreFade;

}

@property (assign,nonatomic) CGPoint targetPoint; 
@property (assign,nonatomic) int targetDirection; 
@property (assign,nonatomic) CGRect targetRect; 
@property (assign,nonatomic) CGRect controlFrame; 
@property (nonatomic,readonly) NSArray * rectsToEvade; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,readonly) bool visible; 
@property (assign,nonatomic) UIResponder * responderTarget; 
@property (nonatomic,copy) NSArray * replacements; 
@property (assign,nonatomic) bool showAllReplacements; 
@property (nonatomic,copy) NSArray * extraItems; 
@property (nonatomic,copy) NSString * untruncatedString; 
@property (assign,nonatomic) bool supressesHorizontalMovement; 
@property (assign,nonatomic) CGPoint pointAboveControls; 
@property (assign,nonatomic) CGPoint pointBelowControls; 
@property (assign,nonatomic) CGPoint pointLeftOfControls; 
@property (assign,nonatomic) CGPoint pointRightOfControls; 
@property (assign,nonatomic) bool targetHorizontal; 
@property (assign,nonatomic) int arrowDirection; 
+(id)_initializeSafeCategoryFromValidationManager;
+(id)_installSafeCategoryValidationMethod;
+(void)_initializeSafeCategory;
+(void)fadeSharedCalloutBar;
+(void)hideSharedCalloutBar;
+(void)fadeSharedCalloutBarIfNeededForTouchInView:(id)arg1 window:(id)arg2 ;
+(id)sharedCalloutBar;
+(id)activeCalloutBar;
+(void)_releaseSharedInstance;
+(bool)sharedCalloutBarIsVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(id)delegate;
-(void)show;
-(void)setSupressesHorizontalMovement:(bool)arg1 ;
-(void)clearSupressesHorizontalMovementFrame;
-(void)setUntruncatedString:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)hide;
-(bool)hasReplacements;
-(bool)visible;
-(id)extraItems;
-(void)setExtraItems:(id)arg1 ;
-(void)update;
-(void)setResponderTarget:(id)arg1 ;
-(void)fade;
-(CGRect)targetRect;
-(void)setTargetRect:(CGRect)arg1 ;
-(bool)recentlyFaded;
-(void)clearEvadeRects;
-(void)addRectToEvade:(CGRect)arg1 ;
-(void)setTargetRect:(CGRect)arg1 pointBelowControls:(CGPoint)arg2 pointAboveControls:(CGPoint)arg3 ;
-(void)setReplacements:(id)arg1 ;
-(void)appear;
-(void)clearReplacements;
-(id)replacements;
-(CGRect)controlFrame;
-(int)targetDirection;
-(CGPoint)targetPoint;
-(void)buttonHighlighted:(id)arg1 highlighted:(bool)arg2 ;
-(void)buttonPressed:(id)arg1 ;
-(void)_showPreviousItems:(id)arg1 ;
-(void)_showNextItems:(id)arg1 ;
-(void)flattenForAlertOrResignActive:(id)arg1 ;
-(void)expandAfterAlertOrBecomeActive:(id)arg1 ;
-(id)targetForAction:(SEL)arg1 ;
-(void)_fadeAfterCommand:(SEL)arg1 ;
-(bool)_updateVisibleItemsAnimated:(bool)arg1 ;
-(CGRect)textEffectsWindowBoundsWithoutStatusBar;
-(id)rectsToEvade;
-(bool)supressesHorizontalMovement;
-(double)supressHorizontalXMovementIfNeededForPoint:(CGPoint)arg1 proposedX:(double)arg2 ;
-(bool)rectClear:(CGRect)arg1 ;
-(int)arrowDirection;
-(bool)calculateControlFrameForCalloutSize:(CGSize)arg1 below:(bool)arg2 ;
-(void)setTargetDirection:(int)arg1 ;
-(bool)calculateControlFrameForCalloutSize:(CGSize)arg1 right:(bool)arg2 ;
-(bool)calculateControlFrameInsideTargetRect:(CGSize)arg1 ;
-(CGPoint)pointBelowControls;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(CGPoint)pointAboveControls;
-(void)setControlFrame:(CGRect)arg1 ;
-(void)updateAvailableButtons;
-(bool)setFrameForSize:(CGSize)arg1 ;
-(void)configureButtons:(double)arg1 ;
-(void)updateForCurrentPage;
-(void)setArrowDirection:(int)arg1 ;
-(void)setTargetHorizontal:(bool)arg1 ;
-(void)setPointBelowControls:(CGPoint)arg1 ;
-(void)setPointAboveControls:(CGPoint)arg1 ;
-(void)setPointLeftOfControls:(CGPoint)arg1 ;
-(void)setPointRightOfControls:(CGPoint)arg1 ;
-(void)appearAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)hideAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)resetPage;
-(void)setTargetRect:(CGRect)arg1 pointLeftOfControls:(CGPoint)arg2 pointRightOfControls:(CGPoint)arg3 ;
-(void)setTargetRect:(CGRect)arg1 arrowDirection:(int)arg2 ;
-(void)updateAnimated:(bool)arg1 ;
-(CGPoint)pointLeftOfControls;
-(CGPoint)pointRightOfControls;
-(bool)targetHorizontal;
-(id)responderTarget;
-(bool)showAllReplacements;
-(void)setShowAllReplacements:(bool)arg1 ;
-(id)untruncatedString;
@end

