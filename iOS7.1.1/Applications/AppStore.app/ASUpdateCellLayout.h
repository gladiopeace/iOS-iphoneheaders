/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class UILabel, SKUITextBoxView, NSString;

@interface ASUpdateCellLayout : SKUIItemCellLayout {

	BOOL _isIPad;
	UILabel* _lastUpdateDateLabel;
	BOOL _showsWhatsNewButton;
	UILabel* _titleLabel;
	UILabel* _versionLabel;
	UILabel* _whatsNewButtonLabel;
	SKUITextBoxView* _whatsNewTextBox;
	float _whatsNewWidth;

}

@property (nonatomic,copy) NSString * lastUpdateDateString; 
@property (assign,nonatomic) BOOL showsWhatsNewButton;                   //@synthesize showsWhatsNewButton=_showsWhatsNewButton - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * versionString; 
@property (assign,nonatomic) float whatsNewWidth;                        //@synthesize whatsNewWidth=_whatsNewWidth - In the implementation block
-(void)setWhatsNewWidth:(float)arg1 ;
-(id)_whatsNewButtonLabel;
-(void)setLastUpdateDateString:(id)arg1 ;
-(void)setShowsWhatsNewButton:(BOOL)arg1 ;
-(void)setWhatsNewWithTextFrame:(CTFrameRef)arg1 numberOfVisibleLines:(int)arg2 ;
-(BOOL)showsWhatsNewButton;
-(float)whatsNewWidth;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)initWithTableViewCell:(id)arg1 ;
-(void).cxx_destruct;
-(id)versionString;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(void)layoutForItemOfferChange;
-(id)lastUpdateDateString;
-(void)setVersionString:(id)arg1 ;
@end

