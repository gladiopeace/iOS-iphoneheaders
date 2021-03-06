/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMDAttachmentStore : NSObject
+(id)sharedInstance;
-(char)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 ;
-(id)attachmentWithGUID:(id)arg1 ;
-(char)updateAttachment:(id)arg1 ;
-(char)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2 ;
-(char)deleteAttachmentsWithGUIDs:(id)arg1 ;
-(char)deleteAttachmentDataForTransfer:(id)arg1 ;
-(char)deleteAttachmentWithGUID:(id)arg1 ;
@end

