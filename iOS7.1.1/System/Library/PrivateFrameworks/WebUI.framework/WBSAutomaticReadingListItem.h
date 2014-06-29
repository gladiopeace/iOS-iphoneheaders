/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class NSString, NSDate, UIImage, WBSAutomaticReadingListSocialSource, NSURL;

@interface WBSAutomaticReadingListItem : NSObject {

	bool _repostedByAuthenticatedUser;
	bool _fetchingProfileImage;
	NSString* _uniqueIdentifier;
	id _sourceRecordID;
	NSDate* _sourceRecordCreationDate;
	NSString* _sourceRecordText;
	id _originatorID;
	NSString* _originatorDisplayName;
	NSString* _urlString;
	NSString* _reposterDisplayName;
	NSString* _reposterScreenName;
	UIImage* _originatorProfileImage;
	NSString* _socialSourceAccountIdentifier;

}

@property (nonatomic,readonly) WBSAutomaticReadingListSocialSource * socialSource; 
@property (nonatomic,copy) NSString * uniqueIdentifier;                                                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) id sourceRecordID;                                                                //@synthesize sourceRecordID=_sourceRecordID - In the implementation block
@property (nonatomic,readonly) NSDate * sourceRecordCreationDate;                                                //@synthesize sourceRecordCreationDate=_sourceRecordCreationDate - In the implementation block
@property (nonatomic,readonly) NSString * sourceRecordText;                                                      //@synthesize sourceRecordText=_sourceRecordText - In the implementation block
@property (nonatomic,readonly) id originatorID;                                                                  //@synthesize originatorID=_originatorID - In the implementation block
@property (nonatomic,readonly) NSString * originatorDisplayName;                                                 //@synthesize originatorDisplayName=_originatorDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                                                             //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * reposterDisplayName;                                                   //@synthesize reposterDisplayName=_reposterDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * reposterScreenName;                                                    //@synthesize reposterScreenName=_reposterScreenName - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSRange displayURLRange; 
@property (nonatomic,readonly) NSURL * originatorProfileURL; 
@property (nonatomic,readonly) NSURL * sourceRecordURL; 
@property (nonatomic,readonly) NSString * domainString; 
@property (nonatomic,retain) UIImage * originatorProfileImage;                                                   //@synthesize originatorProfileImage=_originatorProfileImage - In the implementation block
@property (assign,getter=isRepostedByAuthenticatedUser,nonatomic) bool repostedByAuthenticatedUser;              //@synthesize repostedByAuthenticatedUser=_repostedByAuthenticatedUser - In the implementation block
@property (nonatomic,readonly) NSString * socialSourceAccountIdentifier;                                         //@synthesize socialSourceAccountIdentifier=_socialSourceAccountIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * originatorProfileImageURL; 
@property (nonatomic,readonly) NSURL * biggerOriginatorProfileImageURL; 
@property (assign,nonatomic) bool fetchingProfileImage;                                                          //@synthesize fetchingProfileImage=_fetchingProfileImage - In the implementation block
+(id)keyPathsForValuesAffectingDomainString;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)displayString;
-(id)uniqueIdentifier;
-(void)setUniqueIdentifier:(id)arg1 ;
-(id)urlString;
-(id)sourceRecordID;
-(id)socialSource;
-(id)sourceRecordText;
-(bool)fetchingProfileImage;
-(void)setFetchingProfileImage:(bool)arg1 ;
-(void)_fetchOriginatorProfileImageForSize:(CGSize)arg1 ;
-(id)bestOriginatorProfileImageForSize:(CGSize)arg1 ;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(void)setOriginatorProfileImage:(id)arg1 ;
-(id)originatorDisplayName;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)domainString;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(NSRange)displayURLRange;
-(id)originatorProfileImage;
-(id)sourceRecordCreationDate;
-(id)originatorID;
-(id)reposterDisplayName;
-(id)reposterScreenName;
-(bool)isRepostedByAuthenticatedUser;
-(void)setRepostedByAuthenticatedUser:(bool)arg1 ;
-(id)socialSourceAccountIdentifier;
@end

