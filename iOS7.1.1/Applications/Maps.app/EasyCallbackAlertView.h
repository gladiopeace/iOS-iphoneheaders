/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@interface EasyCallbackAlertView : UIAlertView <UIAlertViewDelegate> {

	/*^block*/ id _tappedButtonCallback;
	/*^block*/ id _dismissedCallback;
	/*^block*/ id _shouldEnableFirstOtherButtonCallback;

}

@property (nonatomic,copy) id tappedButtonCallback;                              //@synthesize tappedButtonCallback=_tappedButtonCallback - In the implementation block
@property (nonatomic,copy) id dismissedCallback;                                 //@synthesize dismissedCallback=_dismissedCallback - In the implementation block
@property (nonatomic,copy) id shouldEnableFirstOtherButtonCallback;              //@synthesize shouldEnableFirstOtherButtonCallback=_shouldEnableFirstOtherButtonCallback - In the implementation block
-(void)setTappedButtonCallback:(/*^block*/ id)arg1 ;
-(void)setDismissedCallback:(/*^block*/ id)arg1 ;
-(void)setShouldEnableFirstOtherButtonCallback:(/*^block*/ id)arg1 ;
-(/*^block*/ id)tappedButtonCallback;
-(/*^block*/ id)dismissedCallback;
-(/*^block*/ id)shouldEnableFirstOtherButtonCallback;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void).cxx_destruct;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
@end

