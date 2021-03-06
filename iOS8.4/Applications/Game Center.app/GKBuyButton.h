/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIControl.h>

@class GKLabel, GKColorPalette;

@interface GKBuyButton : UIControl {

	GKLabel* _titleLabel;
	GKColorPalette* _palette;

}

@property (nonatomic,retain) GKLabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) GKColorPalette * palette;              //@synthesize palette=_palette - In the implementation block
-(void)wasPressed;
-(void)wasDepressed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(GKLabel *)titleLabel;
-(void)setTitleLabel:(GKLabel *)arg1 ;
-(void)setPalette:(GKColorPalette *)arg1 ;
-(GKColorPalette *)palette;
@end

