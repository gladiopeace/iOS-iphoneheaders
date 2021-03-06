/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextField.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView;

@interface UISearchBarTextField : UITextField {

	NSMutableDictionary* _customClearButtons;
	NSMutableDictionary* _iconOffsets;
	NSValue* _searchTextOffsetValue;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundTop;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundBottom;
	BOOL _deferringFirstResponder;
	BOOL _animatePlaceholderOnResignFirstResponder;
	BOOL __preventSelectionViewActivation;

}

@property (setter=_setSearchTextOffetValue:,nonatomic,retain) NSValue * _searchTextOffsetValue; 
@property (assign,setter=_setPreventSelectionViewActivation:,nonatomic) BOOL _preventSelectionViewActivation;              //@synthesize _preventSelectionViewActivation=__preventSelectionViewActivation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)resignFirstResponder;
-(BOOL)_becomeFirstResponderWhenPossible;
-(void)tintColorDidChange;
-(BOOL)_hasActionForEventMask:(int)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(void)_becomeFirstResponder;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(id)_placeholderColor;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)_setClearButtonImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setSearchTextOffetValue:(id)arg1 ;
-(id)_searchTextOffsetValue;
-(void)_setOffsetValue:(id)arg1 forIcon:(int)arg2 ;
-(id)_offsetValueForIcon:(int)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(void)updateForBackdropStyle:(unsigned)arg1 ;
-(void)_removeEffectsBackgroundViews;
-(void)_setPreventSelectionViewActivation:(BOOL)arg1 ;
-(void)_activateSelectionView;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setBottomEffectBackgroundVisible:(BOOL)arg1 ;
-(id)_clearButtonImageForState:(unsigned)arg1 ;
-(CGRect)_adjustedTextOrEditingRect:(CGRect)arg1 forBounds:(CGRect)arg2 ;
-(CGRect)_adjustmentsForLeftViewRectForBounds:(CGRect)arg1 ;
-(BOOL)_shouldCenterPlaceholder;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGSize)_clearButtonSize;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(CGRect)_suffixFrame;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned)arg2 filter:(id)arg3 ;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned)arg1 applyFilter:(id)arg2 ;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(void)_clearBackgroundViews;
-(BOOL)_preventSelectionViewActivation;
-(int)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
@end

