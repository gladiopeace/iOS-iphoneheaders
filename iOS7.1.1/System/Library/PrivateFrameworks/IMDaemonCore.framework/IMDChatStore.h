/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMDChatStore : NSObject {

	NSString* _lastModificationStamp;

}

@property (retain) NSString * modificationStamp;              //@synthesize lastModificationStamp=_lastModificationStamp - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)setModificationStamp:(id)arg1 ;
-(id)chatsGUIDsForMessageWithGUID:(id)arg1 ;
-(id)modificationStamp;
-(void)_updateModificationDate;
-(id)storeChat:(id)arg1 ;
-(unsigned long long)unreadCountForChat:(id)arg1 ;
-(void)deleteChat:(id)arg1 ;
-(void)addMessageWithGUID:(id)arg1 toChat:(id)arg2 ;
-(void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2 ;
-(id)loadAllChats;
-(void)archiveChat:(id)arg1 ;
-(void)unarchiveChat:(id)arg1 ;
-(id)chatsWithHandle:(id)arg1 onService:(id)arg2 ;
-(id)chatsWithRoomname:(id)arg1 onService:(id)arg2 ;
@end

