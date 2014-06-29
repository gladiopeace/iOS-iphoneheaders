/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/BulletinBoardPlugins/PhotoLibraryDataProvider.bundle/PhotoLibraryDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBDataProvider <BBSectionIdentity>
@optional
-(bool)syncsBulletinDismissal;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(id)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
-(id)clearedInfoForBulletins:(id)arg1;
-(id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
-(float)attachmentAspectRatioForRecordID:(id)arg1;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1;
-(bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
-(void)noteSectionInfoDidChange:(id)arg1;
-(void)handleBulletinActionResponse:(id)arg1;

@required
-(id)sortDescriptors;
@end

