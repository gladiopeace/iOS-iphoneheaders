/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GKPendingFriendRequest : NSObject {

	NSString* _recipient;
	int _recipientKind;
	NSString* _originator;
	NSString* _originatorEmail;
	NSString* _requestID;
	NSString* _message;
	NSString* _handle;
	BOOL _shouldBadge;
	unsigned _friendRequestCount;
	BOOL _purpleBuddyAccount;

}

@property (nonatomic,retain) NSString * recipient;                     //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) int recipientKind;                        //@synthesize recipientKind=_recipientKind - In the implementation block
@property (nonatomic,retain) NSString * originator;                    //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) NSString * originatorEmail;               //@synthesize originatorEmail=_originatorEmail - In the implementation block
@property (nonatomic,retain) NSString * requestID;                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSString * message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * handle;                        //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                         //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (assign,nonatomic) unsigned friendRequestCount;              //@synthesize friendRequestCount=_friendRequestCount - In the implementation block
@property (assign,nonatomic) BOOL purpleBuddyAccount;                  //@synthesize purpleBuddyAccount=_purpleBuddyAccount - In the implementation block
+(id)pushDictionaryForQuery:(id)arg1 ;
-(id)originator;
-(void)setRecipientKind:(int)arg1 ;
-(void)setOriginator:(id)arg1 ;
-(void)setOriginatorEmail:(id)arg1 ;
-(void)setRequestID:(id)arg1 ;
-(void)setShouldBadge:(BOOL)arg1 ;
-(void)setFriendRequestCount:(unsigned)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(id)initWithPushDictionary:(id)arg1 ;
-(id)originatorEmail;
-(id)requestID;
-(unsigned)friendRequestCount;
-(id)initWithURLQuery:(id)arg1 ;
-(int)recipientKind;
-(BOOL)shouldBadge;
-(BOOL)purpleBuddyAccount;
-(void)dealloc;
-(id)description;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)handle;
-(void)setHandle:(id)arg1 ;
-(id)recipient;
-(void)setRecipient:(id)arg1 ;
@end

