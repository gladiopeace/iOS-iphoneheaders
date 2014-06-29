/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:09:36 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/XPCServices/IMDMessageServicesAgent.xpc/IMDMessageServicesAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMDMessageServicesAgent/IMDMessageServicesAgent-Structs.h>
@class NSString;

@interface IMDMSAAttachment : NSObject {

	NSString* _GUID;
	NSString* _path;
	NSString* _UTIType;
	NSString* _mimeType;
	BOOL _isOutgoing;

}

@property (getter=UID,nonatomic,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) BOOL isOutgoing;                         //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (nonatomic,readonly) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * UTIType;                      //@synthesize UTIType=_UTIType - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                     //@synthesize mimeType=_mimeType - In the implementation block
-(id)initWithAttachment:(IMDAttachmentRecordStructRef)arg1 ;
-(void)dealloc;
-(id)path;
-(id)mimeType;
-(BOOL)isOutgoing;
-(id)UTIType;
-(id)GUID;
@end

