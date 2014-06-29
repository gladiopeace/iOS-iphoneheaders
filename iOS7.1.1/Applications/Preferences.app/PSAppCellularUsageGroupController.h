/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/UsageFeedDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSNumber, PSExpandableAppListGroupController, NSObject, NSDictionary;

@interface PSAppCellularUsageGroupController : NSObject <UsageFeedDelegate> {

	NSArray* _cellularDataSwitches;
	BOOL _showInternalDetails;
	BOOL _cancelled;
	BOOL _enabled;
	NSNumber* _totalBytesUsed;
	NSNumber* _totalRoamingBytesUsed;
	PSExpandableAppListGroupController* _appGroupController;
	NSObject<OS_dispatch_queue>* _processingQueue;
	NSDictionary* _systemServiceCategoryNames;

}

@property (nonatomic,retain) NSNumber * totalBytesUsed;                                            //@synthesize totalBytesUsed=_totalBytesUsed - In the implementation block
@property (nonatomic,retain) NSNumber * totalRoamingBytesUsed;                                     //@synthesize totalRoamingBytesUsed=_totalRoamingBytesUsed - In the implementation block
@property (nonatomic,retain) PSExpandableAppListGroupController * appGroupController;              //@synthesize appGroupController=_appGroupController - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * processingQueue;                        //@synthesize processingQueue=_processingQueue - In the implementation block
@property (assign,nonatomic) BOOL showInternalDetails;                                             //@synthesize showInternalDetails=_showInternalDetails - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                                     //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSDictionary * systemServiceCategoryNames;                            //@synthesize systemServiceCategoryNames=_systemServiceCategoryNames - In the implementation block
-(id)totalBytesUsed;
-(void)setTotalBytesUsed:(id)arg1 ;
-(void)setShowInternalDetails:(BOOL)arg1 ;
-(void)setTotalRoamingBytesUsed:(id)arg1 ;
-(void)setSystemServiceCategoryNames:(id)arg1 ;
-(id)appGroupController;
-(void)_calculateUsageForSubscriberIdentifier:(id)arg1 inWorkspace:(id)arg2 ;
-(void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)appCellularDataEnabledForSpecifier:(id)arg1 ;
-(id)dataUsageForApplicationSpecifier:(id)arg1 ;
-(id)systemServiceCategoryNames;
-(id)nameForSpecialCategory:(id)arg1 ;
-(id)forcedBundleIdentiferForBundleIdentifier:(id)arg1 ;
-(id)alwaysDisplayedBundleIdentifiers;
-(void)_updateTotalBytesUsed:(double)arg1 roamingBytesUsed:(double)arg2 ;
-(void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4 ;
-(void)_categorizeApps:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)specifierForApp:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)showInternalDetails;
-(id)specifierForSpecialCategory:(id)arg1 bytesUsed:(id)arg2 ;
-(void)setWorkspaceInformation:(id)arg1 ;
-(void)setSwitchesEnabled:(BOOL)arg1 ;
-(id)totalRoamingBytesUsed;
-(void)setAppGroupController:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(void)cancel;
-(void)setProcessingQueue:(id)arg1 ;
-(id)processingQueue;
-(id)specifiers;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
@end

