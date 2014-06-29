/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@protocol ABPropertyCellDelegate;
@class UILabel, ABTransportButton, NSDictionary;

@interface ABFaceTimeCell : ABContactCell {

	bool _displayConstraintsActive;
	bool _isFaceTimeAudioAvailable;
	UILabel* _faceTimeLabel;
	ABTransportButton* _transportIcon1;
	ABTransportButton* _transportIcon2;
	<ABPropertyCellDelegate>* _delegate;
	NSDictionary* _labelTextAttributes;

}

@property (nonatomic,retain) UILabel * faceTimeLabel;                           //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (nonatomic,readonly) ABTransportButton * transportIcon1;              //@synthesize transportIcon1=_transportIcon1 - In the implementation block
@property (nonatomic,readonly) ABTransportButton * transportIcon2;              //@synthesize transportIcon2=_transportIcon2 - In the implementation block
@property (assign,nonatomic) <ABPropertyCellDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                  //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
@property (assign,nonatomic) bool displayConstraintsActive;                     //@synthesize displayConstraintsActive=_displayConstraintsActive - In the implementation block
@property (assign,nonatomic) bool isFaceTimeAudioAvailable;                     //@synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable - In the implementation block
+(bool)requiresConstraintBasedLayout;
-(void)performDefaultAction;
-(bool)isFaceTimeAudioAvailable;
-(void)setDisplayConstraintsActive:(bool)arg1 ;
-(bool)displayConstraintsActive;
-(id)labelTextAttributes;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setNeedsUpdateDisplayConstraints;
-(void)setIsFaceTimeAudioAvailable:(bool)arg1 ;
-(void)transportButtonClicked:(id)arg1 ;
-(id)faceTimeLabel;
-(id)transportIcon1;
-(id)transportIcon2;
-(void)setFaceTimeLabel:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(void)updateConstraints;
@end

