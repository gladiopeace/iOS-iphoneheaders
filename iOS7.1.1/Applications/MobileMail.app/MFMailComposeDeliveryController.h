/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFDeliveryDelegate.h>

@protocol MailComposeDeliveryControllerDelegate, NSCoding;
@class MFOutgoingMessageDelivery, MFOutgoingMessage, NSString, MFMailboxUid, MFMailMessage, MFError;

@interface MFMailComposeDeliveryController : NSObject <MFDeliveryDelegate> {

	<MailComposeDeliveryControllerDelegate>* _delegate;
	MFOutgoingMessageDelivery* _delivery;
	MFOutgoingMessage* _draftMessage;
	NSString* _sendingAddress;
	MFMailboxUid* _draftMailbox;
	NSString* _draftMessageID;
	MFMailMessage* _originalMessage;
	<NSCoding>* _autosaveIdentifier;
	MFError* _error;
	int _composeType;

}

@property (assign,nonatomic) <MailComposeDeliveryControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * sendingAddress;                                         //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (nonatomic,copy) NSString * draftMessageID;                                         //@synthesize draftMessageID=_draftMessageID - In the implementation block
@property (nonatomic,retain) MFMailboxUid * draftMailbox;                                     //@synthesize draftMailbox=_draftMailbox - In the implementation block
@property (nonatomic,retain) MFMailMessage * originalMessage;                                 //@synthesize originalMessage=_originalMessage - In the implementation block
@property (assign,nonatomic) int composeType;                                                 //@synthesize composeType=_composeType - In the implementation block
-(id)initWithComposeController:(id)arg1 ;
-(BOOL)deliverMessage;
-(id)_initWithDelivery:(id)arg1 draftMessage:(id)arg2 ;
-(id)initWithDraftMessage:(id)arg1 ;
-(id)initWithDelivery:(id)arg1 ;
-(void)setDraftMessageID:(id)arg1 ;
-(void)setDraftMailbox:(id)arg1 ;
-(void)setOriginalMessage:(id)arg1 ;
-(void)setComposeType:(int)arg1 ;
-(void)_setCodePointTranslationEnabled:(BOOL)arg1 ;
-(void)_removeDraft;
-(id)draftMessageID;
-(id)draftMailbox;
-(int)composeType;
-(id)originalMessage;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setPercentDone:(double)arg1 ;
-(void)notifyUserDeliverySucceeded:(id)arg1 ;
-(void)setSendingAddress:(id)arg1 ;
-(id)sendingAddress;
-(id)error;
@end

