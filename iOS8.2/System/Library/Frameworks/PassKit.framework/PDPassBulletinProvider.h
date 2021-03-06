/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/PDBulletinProvider.h>

@class NSData, NSMutableDictionary, NSString;

@interface PDPassBulletinProvider : PDBulletinProvider {

	NSData* _iconImageData;
	NSMutableDictionary* _passUpdateBulletinRecords;
	NSMutableDictionary* _transactionBulletinRecords;
	NSString* _sectionIdentifier;
	NSString* _sectionTitle;

}

@property (nonatomic,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sectionTitle;                   //@synthesize sectionTitle=_sectionTitle - In the implementation block
+(char)supportsSecureCoding;
-(void)removeAllBulletins;
-(void)removeBulletinsForPass:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sectionIdentifier:(id)arg2 sectionTitle:(id)arg3 iconImage:(id)arg4 ;
-(void)insertOrUpdateTransactionBulletinForPass:(id)arg1 withPaymentTransaction:(id)arg2 ;
-(void)cullBulletinsToCount:(unsigned)arg1 ;
-(void)insertOrUpdatePassUpdateBulletinForPass:(id)arg1 withDiff:(id)arg2 ;
-(id)diffForBulletinRecordID:(id)arg1 ;
-(void)_removeBulletinForPassUpdateRecord:(id)arg1 ;
-(void)_removeBulletinForTransactionRecord:(id)arg1 ;
-(void)_insertOrUpdateBulletinForPassUpdateRecord:(id)arg1 pass:(id)arg2 ;
-(void)_insertOrUpdateBulletinForTransactionRecord:(id)arg1 ;
-(NSString *)sectionTitle;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sectionIdentifier;
-(id)universalSectionIdentifier;
-(id)sectionParameters;
-(id)parentSectionIdentifier;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
@end

