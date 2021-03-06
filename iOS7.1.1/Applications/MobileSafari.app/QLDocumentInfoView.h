/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface QLDocumentInfoView : UIView {

	UILabel* _documentNameLabel;
	UILabel* _documentSizeLabel;
	UIImageView* _iconImageView;

}

@property (nonatomic,retain) UILabel * documentNameLabel;              //@synthesize documentNameLabel=_documentNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * documentSizeLabel;              //@synthesize documentSizeLabel=_documentSizeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(id)_iconImageForDocumentProxy:(id)arg1 ;
-(id)documentNameLabel;
-(void)setDocumentNameLabel:(id)arg1 ;
-(id)documentSizeLabel;
-(void)setDocumentSizeLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)iconImageView;
-(void)setIconImageView:(id)arg1 ;
@end

