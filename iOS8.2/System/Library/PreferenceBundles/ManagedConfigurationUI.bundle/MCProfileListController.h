/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/MCURLListenerListController.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableArray, UIImage, NSSManager, MCProfileInfo, NSArray, NSString;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate> {

	char _hasFetchedProfilesInfo;
	char _hasFailedFetchingProfilesInfo;
	NSMutableArray* _profileInfo;
	UIImage* _profileListIcon;
	NSSManager* _nssManager;
	MCProfileInfo* _mdmProfileInfo;
	NSArray* _configurationProfilesInfoList;

}

@property (nonatomic,retain) NSMutableArray * profileInfo;                         //@synthesize profileInfo=_profileInfo - In the implementation block
@property (nonatomic,retain) UIImage * profileListIcon;                            //@synthesize profileListIcon=_profileListIcon - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                              //@synthesize nssManager=_nssManager - In the implementation block
@property (assign,nonatomic) char hasFetchedProfilesInfo;                          //@synthesize hasFetchedProfilesInfo=_hasFetchedProfilesInfo - In the implementation block
@property (assign,nonatomic) char hasFailedFetchingProfilesInfo;                   //@synthesize hasFailedFetchingProfilesInfo=_hasFailedFetchingProfilesInfo - In the implementation block
@property (nonatomic,retain) MCProfileInfo * mdmProfileInfo;                       //@synthesize mdmProfileInfo=_mdmProfileInfo - In the implementation block
@property (nonatomic,retain) NSArray * configurationProfilesInfoList;              //@synthesize configurationProfilesInfoList=_configurationProfilesInfoList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfileInfo:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_profileListChanged:(id)arg1 ;
-(void)_showProgressIndicator;
-(void)fetchRemoteProfileList;
-(void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2 ;
-(UIImage *)profileListIcon;
-(id)specifiersForMDMProfileInfo:(id)arg1 configurationProfilesInfo:(id)arg2 ;
-(void)_hideProgressIndicatorAndShowBackButton:(char)arg1 ;
-(void)setProfileListIcon:(UIImage *)arg1 ;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(char)hasFetchedProfilesInfo;
-(void)setHasFetchedProfilesInfo:(char)arg1 ;
-(char)hasFailedFetchingProfilesInfo;
-(void)setHasFailedFetchingProfilesInfo:(char)arg1 ;
-(MCProfileInfo *)mdmProfileInfo;
-(void)setMdmProfileInfo:(MCProfileInfo *)arg1 ;
-(NSArray *)configurationProfilesInfoList;
-(void)setConfigurationProfilesInfoList:(NSArray *)arg1 ;
-(NSMutableArray *)profileInfo;
-(id)specifiers;
@end

