/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, MFWeakReferenceHolder, NSMutableArray, MailAccount, MFMessageCriterion, NSArray, NSNumber, NSMutableDictionary;

@interface MFMailboxUid : NSObject <NSCopying> {

	NSString* uniqueId;
	unsigned _mailboxID;
	MFWeakReferenceHolder* _account;
	NSString* _pathComponent;
	unsigned _attributes;
	MFWeakReferenceHolder* _parent;
	NSMutableArray* _children;
	MailAccount* _representedAccount;
	MFMessageCriterion* _criterion;
	bool allCriteriaMustBeSatisfied;
	NSString* _realFullPath;
	NSArray* _extraAttributes;
	NSNumber* _pendingLevel;
	int _type;
	NSMutableDictionary* _userInfo;
	NSString* _permanentTag;

}

@property (nonatomic,retain) NSArray * extraAttributes;              //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (nonatomic,retain) NSString * permanentTag;                //@synthesize permanentTag=_permanentTag - In the implementation block
+(id)iconFromBundle:(id)arg1 forType:(int)arg2 ;
+(id)specialNameForType:(int)arg1 ;
+(bool)isSpecialMailboxUidType:(int)arg1 ;
+(bool)isOutgoingMailboxType:(int)arg1 ;
+(bool)isDraftsMailboxType:(int)arg1 ;
+(bool)isSentMailboxType:(int)arg1 ;
-(int)level;
-(id)iconFromBundle:(id)arg1 ;
-(id)store;
-(bool)isContainer;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)invalidate;
-(bool)isValid;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)URL;
-(bool)isVisible;
-(void)removeChild:(id)arg1 ;
-(id)uniqueId;
-(id)displayName;
-(unsigned)attributes;
-(void)setAttributes:(unsigned)arg1 ;
-(id)URLString;
-(bool)isSelectable;
-(id)account;
-(id)accountRelativePath;
-(unsigned long long)unreadCount;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(id)representedAccount;
-(bool)shouldRestoreMessagesAfterFailedDelete;
-(id)lastViewedMessageID;
-(id)lastViewedMessageDate;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(id)tildeAbbreviatedPath;
-(id)mutableCopyOfChildren;
-(id)depthFirstEnumerator;
-(void)flushCriteria;
-(bool)setUnreadCount:(unsigned long long)arg1 ;
-(id)childWithName:(id)arg1 ;
-(id)childWithExtraAttribute:(id)arg1 ;
-(id)childWithPermanentTag:(id)arg1 ;
-(bool)setChildren:(id)arg1 ;
-(void)setRepresentedAccount:(id)arg1 ;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 permanentTag:(id)arg4 ;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4 ;
-(id)pathRelativeToMailbox:(id)arg1 ;
-(id)permanentTag;
-(id)initWithAccount:(id)arg1 ;
-(id)_initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 ;
-(id)_mutableChildren;
-(id)childEnumeratorIncludingHiddenChildren:(bool)arg1 ;
-(unsigned long long)numberOfDescendants;
-(id)URLStringNonNil;
-(id)fullPathNonNil;
-(bool)isStore;
-(id)topMailbox;
-(id)rootMailbox;
-(id)ancestralAccount;
-(id)criterion;
-(id)_loadUserInfo;
-(bool)mergeWithUserInfo:(id)arg1 ;
-(id)URLStringWithAccount:(id)arg1 ;
-(void)addToPostOrderTraversal:(id)arg1 ;
-(id)displayNameUsingSpecialNames;
-(unsigned long long)nonDeletedCount;
-(bool)hasChildren;
-(id)childEnumerator;
-(unsigned long long)numberOfChildren;
-(unsigned long long)indexOfChild:(id)arg1 ;
-(id)descendantWithExtraAttribute:(id)arg1 ;
-(id)descendantWithPermanentTag:(id)arg1 ;
-(void)sortChildren;
-(bool)isSpecialMailboxUid;
-(bool)isOutgoingMailboxUid;
-(id)realFullPath;
-(id)pathRelativeToMailboxForDisplay:(id)arg1 ;
-(id)oldURLString;
-(unsigned)mailboxID;
-(long long)compareWithMailboxUid:(id)arg1 ;
-(long long)indexToInsertChildMailboxUid:(id)arg1 ;
-(bool)isDescendantOfMailbox:(id)arg1 ;
-(bool)userInfoBoolForKey:(id)arg1 ;
-(void)setUserInfoBool:(bool)arg1 forKey:(id)arg2 ;
-(id)userInfoDictionary;
-(void)setUserInfoWithDictionary:(id)arg1 ;
-(id)userInfoForSerialization;
-(void)setCriterion:(id)arg1 ;
-(bool)alwaysWriteFullMessageFile;
-(void)setLastViewedMessageID:(id)arg1 ;
-(void)setExtraAttributes:(id)arg1 ;
-(void)setPermanentTag:(id)arg1 ;
-(id)extraAttributes;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(id)userInfoObjectForKey:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)saveUserInfo;
-(id)fullPath;
-(id)children;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

