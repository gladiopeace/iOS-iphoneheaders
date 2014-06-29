/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <UIKit/UIView.h>

@class NSDictionary, NSString, NSAttributedString, UIFont;

@interface NoteCellContentView : UIView {

	NSDictionary* _titleAttributes;
	NSDictionary* _titleSearchAttributes;
	NSDictionary* _dateAttributes;
	NSDictionary* _dateSearchAttributes;
	CGRect _lastFrame;
	double _baselineOriginTargetForCurentUserFontSize;
	double _titleLabelBaselineOffsetFromBottom;
	double _dateLabelBaselineOffsetFromBottom;
	double _dateStringWidth;
	NSString* _summary;
	NSAttributedString* _dateString;
	NSAttributedString* _titleString;
	UIFont* _titleFont;
	UIFont* _dateFont;
	bool _containsCJK;
	bool _useAlternateTextColor;
	bool _useLetterpress;
	long long _letterpressStyle;
	bool _hidesDate;
	bool _labelSupportsFastLetterpress;

}

@property (assign) bool useAlternateTextColor;              //@synthesize useAlternateTextColor=_useAlternateTextColor - In the implementation block
-(void)highlightSearchTerms:(id)arg1 ;
-(void)hideDate:(bool)arg1 ;
-(id)textAttributesForSearch:(bool)arg1 ;
-(id)_titleTextColor:(bool)arg1 ;
-(id)_dateTextColor:(bool)arg1 ;
-(void)updateLetterpressRendering;
-(void)updateSystemTextSize:(id)arg1 ;
-(bool)useAlternateTextColor;
-(id)dateAttributesForSearch:(bool)arg1 ;
-(void)setUseAlternateTextColor:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)_automationID;
-(id)_automationValue;
-(id)title;
-(void)setDate:(id)arg1 ;
-(void).cxx_destruct;
-(void)setContainsCJK:(bool)arg1 ;
-(void)setSummary:(id)arg1 ;
@end

