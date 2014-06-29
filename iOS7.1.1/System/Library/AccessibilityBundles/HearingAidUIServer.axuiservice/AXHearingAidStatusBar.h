/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HearingAidUIServer/HearingAidUIServer-Structs.h>
#import <UIKit/UIStatusBar.h>

@protocol AXHearingAidStatusBarDelegate;
@interface AXHearingAidStatusBar : UIStatusBar {

	<AXHearingAidStatusBarDelegate>* _delegate;

}

@property (assign,nonatomic) <AXHearingAidStatusBarDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 overrides:(int)arg2 andDelegate:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setSize:(CGSize)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_AX0*)arg2 withActions:(int)arg3 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(bool)arg2 forStyle:(long long)arg3 ;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
@end

