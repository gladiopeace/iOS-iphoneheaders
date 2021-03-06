/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:57 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/NSCopying.h>

@class NSNumber;

@interface MPCloudAssetDownloadSessionIdentifier : NSObject <NSCopying> {

	NSNumber* _storeID;
	NSNumber* _persistentID;

}

@property (nonatomic,copy) NSNumber * storeID;                   //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
+(id)identifierForContext:(id)arg1 ;
-(void)setPersistentID:(NSNumber *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSNumber *)persistentID;
-(NSNumber *)storeID;
-(void)setStoreID:(NSNumber *)arg1 ;
@end

