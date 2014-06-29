/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <POP/POP-Structs.h>
#import <Message/MFLibraryStore.h>

@class MFPOP3Connection;

@interface MFLibraryPOPStore : MFLibraryStore {

	MFPOP3Connection* _connection;

}
-(void)dealloc;
-(void)setServerMessageCount:(unsigned long long)arg1 ;
-(void)openSynchronouslyUpdatingMetadata:(bool)arg1 ;
-(void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 ;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)serverMessageCount;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2 ;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(bool)arg2 ;
-(void)messagesWereDeleted:(id)arg1 ;
-(id)messageForRemoteID:(id)arg1 ;
-(void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(bool)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(bool*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(bool)arg5 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 usePartDatas:(bool)arg5 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4 ;
-(void)purgeMessages:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(bool*)arg2 isPartial:(bool*)arg3 downloadIfNecessary:(bool)arg4 ;
@end

