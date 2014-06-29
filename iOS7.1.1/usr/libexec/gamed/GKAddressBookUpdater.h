/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableSet, NSSet, NSArray;

@interface GKAddressBookUpdater : NSObject {

	BOOL _shouldAddPlayerInfoToAddressBook;
	NSString* _authenticatedPlayerID;
	NSMutableDictionary* _personLookup;
	NSMutableDictionary* _playerLookup;
	NSMutableSet* _addedEmailSet;
	NSMutableSet* _removedEmailSet;
	NSSet* _previousEmailSet;

}

@property (nonatomic,readonly) NSString * authenticatedPlayerID;                 //@synthesize authenticatedPlayerID=_authenticatedPlayerID - In the implementation block
@property (nonatomic,readonly) NSArray * addedEmails; 
@property (nonatomic,readonly) NSArray * removedEmails; 
@property (nonatomic,readonly) NSArray * playerIDs; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain) NSMutableDictionary * personLookup;                 //@synthesize personLookup=_personLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerLookup;                 //@synthesize playerLookup=_playerLookup - In the implementation block
@property (nonatomic,retain) NSMutableSet * addedEmailSet;                       //@synthesize addedEmailSet=_addedEmailSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * removedEmailSet;                     //@synthesize removedEmailSet=_removedEmailSet - In the implementation block
@property (nonatomic,retain) NSSet * previousEmailSet;                           //@synthesize previousEmailSet=_previousEmailSet - In the implementation block
@property (assign,nonatomic) BOOL shouldAddPlayerInfoToAddressBook;              //@synthesize shouldAddPlayerInfoToAddressBook=_shouldAddPlayerInfoToAddressBook - In the implementation block
-(void)fetchSentContactAddresses;
-(id)addedEmailSet;
-(id)removedEmailSet;
-(id)playerLookup;
-(void)setPreviousEmailSet:(id)arg1 ;
-(id)previousEmailSet;
-(id)addedEmails;
-(id)removedEmails;
-(id)personLookup;
-(id)hashEmailAddress:(id)arg1 ;
-(void)storeSentContactAddresses;
-(void)setPlayerLookup:(id)arg1 ;
-(id)initWithAuthenticatedPlayerID:(id)arg1 ;
-(void)gatherChangesWithHandler:(/*^block*/ id)arg1 ;
-(void)updatePlayerLookupTableWithNetworkIDs:(id)arg1 ;
-(void)updateAddressBookWithAuthenticatedPlayerProfile:(id)arg1 complete:(/*^block*/ id)arg2 ;
-(void)updateAddressBookWithPlayerProfiles:(id)arg1 complete:(/*^block*/ id)arg2 ;
-(void)setPersonLookup:(id)arg1 ;
-(void)setAddedEmailSet:(id)arg1 ;
-(void)setRemovedEmailSet:(id)arg1 ;
-(BOOL)shouldAddPlayerInfoToAddressBook;
-(void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1 ;
-(id)authenticatedPlayerID;
-(id)playerIDs;
-(void)dealloc;
-(BOOL)hasChanges;
@end

