/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITextField.h>

@class _UILegibilityView, _UILegibilitySettings;

@interface SBFolderTitleTextField : UITextField {

	BOOL _showingEditUI;
	_UILegibilityView* _legibilityView;
	BOOL _allowsEditing;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) BOOL allowsEditing;                                      //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) float fontSize; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
+(void)warmupIfNecessary;
+(id)_editBackgroundImage;
+(id)_clearButtonImage;
-(void)_updateLegibility;
-(id)_clearButtonImage;
-(float)_legibilityStrength;
-(void)_updateLegibilityView;
-(CGRect)_textRectForBounds:(CGRect)arg1 ;
-(void)setShowsEditUI:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(id)_backgroundImage;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)legibilitySettings;
-(float)fontSize;
@end

