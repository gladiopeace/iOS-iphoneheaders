/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>
#import <MobileSlideShow/PLSTransportCoding.h>

@class NSString, NSDictionary;

@interface PLSItem : NSObject <NSCoding, PLSTransportCoding> {

	NSString* _uuid;
	NSDictionary* _hostInfo;
	id _userInfo;

}

@property (nonatomic,retain) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDictionary * hostInfo;              //@synthesize hostInfo=_hostInfo - In the implementation block
@property (nonatomic,retain) id userInfo;                          //@synthesize userInfo=_userInfo - In the implementation block
-(id)hostInfo;
-(id)_itemType;
-(id)initFromPropertyList:(id)arg1 ;
-(void)setHostInfo:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)uuid;
-(void)setUuid:(id)arg1 ;
@end

