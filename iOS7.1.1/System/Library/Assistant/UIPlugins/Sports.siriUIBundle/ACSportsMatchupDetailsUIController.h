/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/ACSportsUIController.h>
#import <Sports/ACSportsMatchupViewDelegate.h>

@class ACSportsMatchupView, SAUIAppPunchOut;

@interface ACSportsMatchupDetailsUIController : ACSportsUIController <ACSportsMatchupViewDelegate> {

	ACSportsMatchupView* _matchupView;
	SAUIAppPunchOut* _snippetAppPunchOut;

}
-(bool)_useFooterForPunchout;
-(void)matchupViewWantsPunchOut:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(id)initWithSnippet:(id)arg1 ;
-(Class)footerViewClass;
-(double)desiredHeightForFooterView;
-(Class)headerViewClass;
@end

