/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSAccount, NSString, NSNumber;

@interface SUScriptAccount : SUScriptObject {

	SSAccount* _account;

}

@property (retain) SSAccount * account; 
@property (copy) NSString * credits; 
@property (retain) NSNumber * dsID; 
@property (copy) NSString * identifier; 
@property (readonly) NSString * ITunesPassSerialNumber; 
@property (copy) NSString * kind; 
@property (getter=isPrimaryLockerAccount,readonly) id primaryLockerAccount; 
@property (retain) id lockerEnabled; 
@property (retain) id purchaseHistoryEnabled; 
@property (retain) id socialEnabled; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)kind;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void)setKind:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)dsID;
-(void)setSecureToken:(id)arg1 ;
-(void)_commitChanges;
-(id)ITunesPassSerialNumber;
-(void)_setServiceType:(long long)arg1 enabled:(id)arg2 ;
-(bool)isPrimaryAccount;
-(bool)isSecureTokenValid;
-(id)credits;
-(id)isPrimaryLockerAccount;
-(id)lockerEnabled;
-(id)purchaseHistoryEnabled;
-(void)setCredits:(id)arg1 ;
-(void)setDsID:(id)arg1 ;
-(void)setLockerEnabled:(id)arg1 ;
-(void)setPurchaseHistoryEnabled:(id)arg1 ;
-(void)setSocialEnabled:(id)arg1 ;
-(id)socialEnabled;
@end

