/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsStandingColumnView.h>

@class ACSportsLoadingImageView, SiriUIContentLabel, SASportsAthlete;

@interface ACSportsAthleteStandingView : ACSportsStandingColumnView {

	ACSportsLoadingImageView* _headShotView;
	SiriUIContentLabel* _namePlusTeamLabel;

}

@property (nonatomic,retain) SASportsAthlete * entity; 
-(char)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(void)statLabelMinXDidChange;
-(id)textForSnippetColumn:(id)arg1 ;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)contentHeight;
@end

