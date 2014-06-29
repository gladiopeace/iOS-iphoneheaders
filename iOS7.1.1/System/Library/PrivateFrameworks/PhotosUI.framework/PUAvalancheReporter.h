/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString, PLAvalanche, NSMutableString;

@interface PUAvalancheReporter : NSObject <UIAlertViewDelegate> {

	NSString* _uuid;
	PLAvalanche* _avalanche;
	NSMutableString* _reporterLog;

}

@property (nonatomic,retain) NSString * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) PLAvalanche * avalanche;                    //@synthesize avalanche=_avalanche - In the implementation block
@property (nonatomic,retain) NSMutableString * reporterLog;              //@synthesize reporterLog=_reporterLog - In the implementation block
+(id)createAlertViewForReport;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void).cxx_destruct;
-(id)uuid;
-(void)setUuid:(id)arg1 ;
-(void)setAvalanche:(id)arg1 ;
-(id)descriptionForCurrentAvalanche;
-(void)attachThumbsToRadar:(id)arg1 ;
-(void)attachReporterLogToRadar:(id)arg1 ;
-(id)initWithAvalanche:(id)arg1 ;
-(void)showRadarReporterInViewController:(id)arg1 ;
-(id)avalanche;
-(id)reporterLog;
-(void)setReporterLog:(id)arg1 ;
@end

