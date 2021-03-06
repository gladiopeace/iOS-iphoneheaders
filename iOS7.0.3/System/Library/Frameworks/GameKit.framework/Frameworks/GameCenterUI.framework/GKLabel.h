/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UILabel.h>

@class GKTextStyle;

@interface GKLabel : UILabel {

	GKTextStyle* _baseStyle;
	BOOL _usingAttributedText;
	GKTextStyle* _appliedStyle;

}

@property (nonatomic,retain) GKTextStyle * baseStyle; 
@property (nonatomic,retain) GKTextStyle * appliedStyle;              //@synthesize appliedStyle=_appliedStyle - In the implementation block
+(void)initialize;
-(void)_UIAppearance_setBaseStyle:(id)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
-(void)replayAndApplyStyle;
-(id)appliedStyle;
-(void)setAppliedStyle:(id)arg1 ;
-(void)shrinkFontToFitWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)baseStyle;
-(void)setBaseStyle:(id)arg1 ;
@end

