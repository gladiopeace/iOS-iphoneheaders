/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/BulletinBoardPlugins/GameKitDataProvider.bundle/GameKitDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKBulletinController.h>
#import <BulletinBoard/BBDataProvider.h>

@interface GKDataProvider : GKBulletinController <BBDataProvider> {

	unsigned _defaultSoundID;
	unsigned _customSoundID;

}

@property (assign,nonatomic) unsigned defaultSoundID;              //@synthesize defaultSoundID=_defaultSoundID - In the implementation block
@property (assign,nonatomic) unsigned customSoundID;               //@synthesize customSoundID=_customSoundID - In the implementation block
-(unsigned)createSoundForPath:(id)arg1 ;
-(id)bulletinRequestFromBulletin:(id)arg1 ;
-(void)setCustomSoundID:(unsigned)arg1 ;
-(unsigned)customSoundID;
-(unsigned)defaultSoundID;
-(void)setDefaultSoundID:(unsigned)arg1 ;
-(void)respondWithBulletin:(id)arg1 ;
-(void)withdrawBulletin:(id)arg1 ;
-(void)presentBulletin:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sectionIdentifier;
-(bool)syncsBulletinDismissal;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sortDescriptors;
@end

