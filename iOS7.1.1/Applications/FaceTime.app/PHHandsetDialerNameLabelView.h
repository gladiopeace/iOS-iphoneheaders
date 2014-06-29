/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, NSString;

@interface PHHandsetDialerNameLabelView : UIControl {

	UILabel* _nameAndLabelLabel;
	float _fontSize;
	NSString* _displayedName;
	NSString* _displayedLabel;

}

@property (retain) UILabel * nameAndLabelLabel;              //@synthesize nameAndLabelLabel=_nameAndLabelLabel - In the implementation block
@property (assign,nonatomic) float fontSize;                 //@synthesize fontSize=_fontSize - In the implementation block
@property (retain) NSString * displayedName;                 //@synthesize displayedName=_displayedName - In the implementation block
@property (retain) NSString * displayedLabel;                //@synthesize displayedLabel=_displayedLabel - In the implementation block
-(void)setNameAndLabelLabel:(id)arg1 ;
-(id)nameAndLabelLabel;
-(id)displayedName;
-(id)displayedLabel;
-(void)showName:(id)arg1 label:(id)arg2 animated:(BOOL)arg3 ;
-(void)setDisplayedName:(id)arg1 ;
-(void)setDisplayedLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)textColor;
-(void)setFontSize:(float)arg1 ;
-(float)fontSize;
@end

