/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddySimpleTCController.h>

@class BuddyCloudConfigController, NSData, NSArray;

@interface BuddyCloudConfigConsentViewController : BuddySimpleTCController {

	BuddyCloudConfigController* _configController;
	NSData* _profileData;
	NSArray* _profileWarnings;

}

@property (assign,nonatomic) BuddyCloudConfigController * configController;              //@synthesize configController=_configController - In the implementation block
@property (nonatomic,retain) NSData * profileData;                                       //@synthesize profileData=_profileData - In the implementation block
@property (nonatomic,retain) NSArray * profileWarnings;                                  //@synthesize profileWarnings=_profileWarnings - In the implementation block
-(id)tcContent;
-(void)agree:(id)arg1 ;
-(void)disagree:(id)arg1 ;
-(void)setConfigController:(id)arg1 ;
-(id)configController;
-(void)setProfileWarnings:(id)arg1 ;
-(id)profileWarnings;
-(id)profileData;
-(void)setProfileData:(id)arg1 ;
-(id)titleString;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

