/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKAccountService.h>
#import <gamed/GKAccountServicePrivate.h>

@interface GKAccountServicePrivate : GKAccountService <GKAccountServicePrivate>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(BOOL)requiresAuthenticationForSelector:(SEL)arg1 ;
-(void)updateClientSettings:(/*^block*/ id)arg1 ;
-(void)updateBadgeCounts;
-(void)_removeRecommendationForBundleID:(id)arg1 profile:(id)arg2 moc:(id)arg3 ;
-(void)_addGameListEntryForGame:(id)arg1 profile:(id)arg2 moc:(id)arg3 ;
-(void)_addAchievementPointsEntryForGame:(id)arg1 record:(id)arg2 profile:(id)arg3 moc:(id)arg4 ;
-(void)_postLaunchEventsForGame:(id)arg1 moc:(id)arg2 ;
-(void)renewAuthToken;
-(void)updateGameInvitePreferenceSettingsForAuthenticatedPlayer;
-(void)_authenticateUsername:(id)arg1 password:(id)arg2 validateOnly:(BOOL)arg3 response:(id)arg4 handler:(/*^block*/ id)arg5 ;
-(id)_authenticatedLocalPlayerWithUsername:(id)arg1 inContext:(id)arg2 isValid:(BOOL*)arg3 ;
-(void)_initGameWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 usingFastPath:(BOOL)arg3 handler:(/*^block*/ id)arg4 ;
-(oneway void)authenticationCancelled;
-(oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(/*^block*/ id)arg5 ;
-(oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(BOOL)arg5 handler:(/*^block*/ id)arg6 ;
-(oneway void)setupAccountForParameters:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)signOutPlayerWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)validateAccountWithPassword:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(/*^block*/ id)arg3 ;
@end

