/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/TimeView.h>

@interface TimerTimeView : TimeView {

	int _style;

}

@property (assign,nonatomic) int style;              //@synthesize style=_style - In the implementation block
+(float)defaultHeight;
-(void)configureTimeLabel;
-(void)sizeLabelToFit;
-(void)configureBackground;
-(id)init;
-(void)layoutSubviews;
-(int)style;
-(void)setStyle:(int)arg1 ;
@end

