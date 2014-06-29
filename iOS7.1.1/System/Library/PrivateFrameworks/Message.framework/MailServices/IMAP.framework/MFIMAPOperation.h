/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MFIMAPOperation : NSObject {

	unsigned _type : 8;
	unsigned _temporaryUids : 1;
	NSString* _mailboxName;
	SCD_Union_MF11* _opSpecific;

}
+(id)deserializedCopyFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(unsigned)approximateSize;
-(void)dealloc;
-(id)description;
-(unsigned)uid;
-(id)flags;
-(id)internalDate;
-(void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(unsigned char)_magic;
-(void)serializeIntoData:(id)arg1 ;
-(id)initWithMailboxToCreate:(id)arg1 ;
-(id)initWithMailboxToDelete:(id)arg1 ;
-(id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4 ;
-(id)initWithUidsToCopy:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 firstNewUid:(unsigned)arg4 ;
-(id)initWithAppendedUid:(unsigned)arg1 approximateSize:(unsigned)arg2 flags:(id)arg3 internalDate:(id)arg4 mailbox:(id)arg5 ;
-(bool)isSourceOfTemporaryUid:(unsigned)arg1 ;
-(bool)actsOnTemporaryUid:(unsigned)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(unsigned)firstTemporaryUid;
-(unsigned)lastTemporaryUid;
-(bool)usesRealUids;
-(void)setUsesRealUids:(bool)arg1 ;
-(id)flagsToSet;
-(id)flagsToClear;
-(id)uids;
-(id)sourceUids;
-(id)destinationUids;
-(id)destinationMailbox;
-(unsigned)sourceUidForTemporaryUid:(unsigned)arg1 ;
-(bool)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(unsigned)arg3 ;
-(void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned)arg3 ;
-(id)mailboxName;
-(int)operationType;
@end

