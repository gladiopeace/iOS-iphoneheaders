/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MFLibraryContentIndexableItem : NSObject {

	unsigned _documentIdentifier;
	unsigned _mailboxID;
	NSString* _content;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _senders;
	NSString* _subject;

}

@property (assign,nonatomic) unsigned documentIdentifier;              //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * content;                         //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSArray * to;                               //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                               //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * senders;                          //@synthesize senders=_senders - In the implementation block
@property (nonatomic,copy) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) unsigned mailboxID;                       //@synthesize mailboxID=_mailboxID - In the implementation block
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(id)content;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)senders;
-(unsigned)mailboxID;
-(void)setMailboxID:(unsigned)arg1 ;
-(id)cc;
-(id)initWithDocumentIdentifier:(unsigned)arg1 ;
-(void)setCc:(id)arg1 ;
-(void)setSenders:(id)arg1 ;
-(unsigned)documentIdentifier;
-(void)setDocumentIdentifier:(unsigned)arg1 ;
-(id)to;
-(void)setTo:(id)arg1 ;
-(void)setContent:(id)arg1 ;
@end

