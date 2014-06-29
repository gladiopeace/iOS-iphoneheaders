/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:16 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, SCATModernMenuItem, NSString;

@interface SCATModernMenuItemSupplementaryView : UICollectionReusableView {

	UILabel* _titleLabel;
	SCATModernMenuItem* _menuItem;

}

@property (assign,nonatomic) SCATModernMenuItem * menuItem;              //@synthesize menuItem=_menuItem - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)setMenuItem:(id)arg1 ;
-(void)didUpdateScatMenuItemStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)titleLabel;
-(void)prepareForReuse;
-(void)setTitleText:(id)arg1 ;
-(void)setTitleLabel:(id)arg1 ;
-(id)menuItem;
-(id)titleText;
-(void)_updateTextAttributes;
@end

