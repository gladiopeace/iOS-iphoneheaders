/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedDSID;
	SSMutableAuthenticationContext* _authenticationContext;

}

@property (retain) NSNumber * authenticatedDSID;              //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(id)authenticatedAccountDSID;
-(void)setScriptOptions:(id)arg1 ;
-(void)sendCompletionCallback:(id)arg1 ;
-(id)authenticatedDSID;
-(void)setAuthenticatedDSID:(id)arg1 ;
@end

