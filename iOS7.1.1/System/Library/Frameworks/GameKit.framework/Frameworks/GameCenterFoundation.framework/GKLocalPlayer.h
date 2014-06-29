/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKPlayer.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@protocol GKLocalPlayerListener, GKAuthenticateViewController;
@class GKInvite, UIAlertView, NSString, NSInvocation, NSDictionary, NSDate, UIViewController, GKEventEmitter, NSArray;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding> {

	bool _authenticated;
	bool _authenticating;
	bool _didAuthenticate;
	bool _validatingAccount;
	bool _enteringForeground;
	bool _appUnrecognized;
	bool _newToGameCenter;
	/*^block*/ id _authenticateHandler;
	GKInvite* _acceptedInvite;
	/*^block*/ id _authenticationCompletionHandler;
	/*^block*/ id _validateAccountCompletionHandler;
	UIAlertView* _loginAlertView;
	UIAlertView* _currentAlert;
	NSString* _lastUsernameAttempted;
	NSString* _lastAccountNameAuthenticated;
	NSInvocation* _currentFriendRequestInvocation;
	unsigned long long _failedLogins;
	NSDictionary* _authenticateAlertDictionary;
	long long _environment;
	NSString* _lastAuthPlayerID;
	NSDate* _lastAuthDate;
	UIViewController* _rootViewController;
	UIViewController* _activeViewController;
	GKEventEmitter<GKLocalPlayerListener>* _eventEmitter;
	UIViewController<GKAuthenticateViewController>* _signInViewController;

}

@property (assign,getter=isAuthenticated,nonatomic) bool authenticated;                                          //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isUnderage,nonatomic,@dynamic,readonly) bool underage; 
@property (nonatomic,copy) id authenticateHandler;                                                               //@synthesize authenticateHandler=_authenticateHandler - In the implementation block
@property (nonatomic,readonly) NSArray * friends; 
@property (assign,getter=isAuthenticating,nonatomic) bool authenticating;                                        //@synthesize authenticating=_authenticating - In the implementation block
@property (nonatomic,@dynamic,retain) NSString * accountName; 
@property (nonatomic,@dynamic,retain) NSString * firstName; 
@property (nonatomic,@dynamic,retain) NSString * lastName; 
@property (nonatomic,retain) GKInvite * acceptedInvite;                                                          //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (nonatomic,@dynamic,readonly) bool canChangePhoto; 
@property (nonatomic,retain) NSString * lastUsernameAttempted;                                                   //@synthesize lastUsernameAttempted=_lastUsernameAttempted - In the implementation block
@property (nonatomic,retain) NSString * lastAccountNameAuthenticated;                                            //@synthesize lastAccountNameAuthenticated=_lastAccountNameAuthenticated - In the implementation block
@property (assign,getter=isPurpleBuddyAccount,nonatomic,@dynamic) bool purpleBuddyAccount; 
@property (assign,getter=isAppUnrecognized,nonatomic) bool appUnrecognized;                                      //@synthesize appUnrecognized=_appUnrecognized - In the implementation block
@property (nonatomic,readonly) long long environment;                                                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,@dynamic,readonly) bool allowNearbyMultiplayer; 
@property (assign,getter=isNewToGameCenter,nonatomic) bool newToGameCenter;                                      //@synthesize newToGameCenter=_newToGameCenter - In the implementation block
@property (nonatomic,@dynamic,readonly) NSString * facebookUserID; 
@property (nonatomic,@dynamic,readonly) NSString * iCloudUserID; 
@property (getter=isFindable,nonatomic,@dynamic,readonly) bool findable; 
@property (nonatomic,retain) GKEventEmitter<GKLocalPlayerListener> * eventEmitter;                               //@synthesize eventEmitter=_eventEmitter - In the implementation block
@property (nonatomic,copy) id authenticationCompletionHandler;                                                   //@synthesize authenticationCompletionHandler=_authenticationCompletionHandler - In the implementation block
@property (nonatomic,copy) id validateAccountCompletionHandler;                                                  //@synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertView * loginAlertView;                                                       //@synthesize loginAlertView=_loginAlertView - In the implementation block
@property (assign,nonatomic) UIAlertView * currentAlert;                                                         //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,retain) NSInvocation * currentFriendRequestInvocation;                                      //@synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation - In the implementation block
@property (nonatomic,retain) NSString * lastAuthPlayerID;                                                        //@synthesize lastAuthPlayerID=_lastAuthPlayerID - In the implementation block
@property (nonatomic,retain) NSDate * lastAuthDate;                                                              //@synthesize lastAuthDate=_lastAuthDate - In the implementation block
@property (assign,nonatomic) bool didAuthenticate;                                                               //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign,nonatomic) bool validatingAccount;                                                             //@synthesize validatingAccount=_validatingAccount - In the implementation block
@property (assign,nonatomic) bool enteringForeground;                                                            //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) unsigned long long failedLogins;                                                    //@synthesize failedLogins=_failedLogins - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                                              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) UIViewController * activeViewController;                                            //@synthesize activeViewController=_activeViewController - In the implementation block
@property (nonatomic,retain) UIViewController<GKAuthenticateViewController> * signInViewController;              //@synthesize signInViewController=_signInViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * authenticateAlertDictionary;                                         //@synthesize authenticateAlertDictionary=_authenticateAlertDictionary - In the implementation block
+(bool)hasAuthenticatedAccount;
+(id)accountName;
+(bool)supportsSecureCoding;
+(id)localPlayer;
-(void)showAlertForTag:(unsigned long long)arg1 ;
-(void)showCancelledAlertForPlayer:(id)arg1 ;
-(void)showCreateAccountRestrictedAlert;
-(void)showEditAccountRestrictedAlert;
-(void)showSignInAccountRestrictedAlert;
-(void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2 ;
-(bool)alertUserInStoreDemoModeEnabled;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)showAuthenticateViewControllerForGameCenter;
-(void)callAuthHandlerWithError:(id)arg1 ;
-(void)completeAuthenticationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)finishAuthenticationWithError:(id)arg1 ;
-(void)handleUnderlyingErrorForAuthenticateError:(id)arg1 ;
-(void)cancelAuthentication;
-(void)showAuthorizeViewController;
-(void)showAuthenticateViewController;
-(bool)shouldReuseControllerForMode:(long long)arg1 ;
-(void)presentError:(id)arg1 forMode:(long long)arg2 ;
-(void)removeActiveViewControllerAnimated:(bool)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)showViewController:(id)arg1 wrapInNavController:(bool)arg2 ;
-(void)showAccountControllerForMode:(long long)arg1 ;
-(void)_showWelcomeBanner;
-(void)_authenticate;
-(void)_showViewControllerForLegacyApps:(id)arg1 ;
-(void)validateAccountWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)signOutWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_authenticateWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)deletePhoto;
-(void)setPhoto:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)registerListener:(id)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(void)unregisterAllListeners;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)reset:(id)arg1 ;
-(void)setEventEmitter:(id)arg1 ;
-(void)daemonFetchGameInvite:(id)arg1 ;
-(void)daemonCancelledGameInvite:(id)arg1 ;
-(void)daemonInviteeRespondedToGameInvite:(id)arg1 ;
-(void)daemonFetchTurnBasedEvent:(id)arg1 ;
-(void)setStatus:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)_addEmail:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)updateFromLocalPlayer:(id)arg1 ;
-(void)loadGameRecommendationsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(bool)canChangePhoto;
-(void)showSettings;
-(void)authenticateWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)addEmail:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)loadFriendRequests:(/*^block*/ id)arg1 ;
-(void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(/*^block*/ id)arg8 ;
-(bool)hasEmailAddress:(id)arg1 ;
-(void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)generateIdentityVerificationSignatureWithCompletionHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)authenticationCompletionHandler;
-(void)setAuthenticationCompletionHandler:(/*^block*/ id)arg1 ;
-(id)lastUsernameAttempted;
-(void)setLastUsernameAttempted:(id)arg1 ;
-(id)lastAccountNameAuthenticated;
-(void)setLastAccountNameAuthenticated:(id)arg1 ;
-(unsigned long long)failedLogins;
-(void)setFailedLogins:(unsigned long long)arg1 ;
-(id)authenticateAlertDictionary;
-(bool)isAppUnrecognized;
-(void)setAppUnrecognized:(bool)arg1 ;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(void)loadFriendRecommendationsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)acceptedInvite;
-(void)setAcceptedInvite:(id)arg1 ;
-(void)setNewToGameCenter:(bool)arg1 ;
-(bool)isAuthenticated;
-(bool)isAuthenticating;
-(id)eventEmitter;
-(void)loadFriendsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadProfileWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)removeFriend:(id)arg1 block:(/*^block*/ id)arg2 ;
-(id)lastAuthDate;
-(id)lastAuthPlayerID;
-(bool)isNewToGameCenter;
-(/*^block*/ id)authenticateHandler;
-(bool)enteringForeground;
-(void)setDidAuthenticate:(bool)arg1 ;
-(void)setAuthenticating:(bool)arg1 ;
-(void)setValidatingAccount:(bool)arg1 ;
-(void)setLastAuthPlayerID:(id)arg1 ;
-(id)signInViewController;
-(void)setActiveViewController:(id)arg1 ;
-(id)activeViewController;
-(void)setSignInViewController:(id)arg1 ;
-(id)currentAlert;
-(void)setCurrentAlert:(id)arg1 ;
-(void)setLoginAlertView:(id)arg1 ;
-(bool)validatingAccount;
-(/*^block*/ id)validateAccountCompletionHandler;
-(void)setValidateAccountCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setEnteringForeground:(bool)arg1 ;
-(void)setAuthenticateAlertDictionary:(id)arg1 ;
-(void)setupMultiplayerNotifications;
-(void)setLastAuthDate:(id)arg1 ;
-(bool)didAuthenticate;
-(void)setAuthenticateHandler:(/*^block*/ id)arg1 ;
-(id)currentFriendRequestInvocation;
-(void)setCurrentFriendRequestInvocation:(id)arg1 ;
-(id)loginAlertView;
-(void)dealloc;
-(id)init;
-(void)setRootViewController:(id)arg1 ;
-(long long)environment;
-(id)rootViewController;
-(void)setStatus:(id)arg1 ;
-(void)setAuthenticated:(bool)arg1 ;
-(id)friends;
@end

