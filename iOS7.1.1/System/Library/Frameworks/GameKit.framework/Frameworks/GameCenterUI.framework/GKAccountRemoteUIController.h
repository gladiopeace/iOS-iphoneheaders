/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKRemoteUIController.h>

@class NSArray;

@interface GKAccountRemoteUIController : GKRemoteUIController {

	bool _authenticatePlayerOnCompletion;
	long long _mode;
	NSArray* _availableExternalServices;

}

@property (assign,nonatomic) long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSArray * availableExternalServices;              //@synthesize availableExternalServices=_availableExternalServices - In the implementation block
@property (assign,nonatomic) bool authenticatePlayerOnCompletion;              //@synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion - In the implementation block
+(void)accountRemoteUIControllerForMode:(long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)fallbackURL;
-(id)postBodyForInitialLoad;
-(void)fireCompletionHandler;
-(void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)updatePostbackDictionary:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(id)bagKey;
-(id)initWithMode:(long long)arg1 ;
-(void)fetchAvailableExternalServicesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setAvailableExternalServices:(id)arg1 ;
-(bool)authenticatePlayerOnCompletion;
-(id)availableExternalServices;
-(void)setAuthenticatePlayerOnCompletion:(bool)arg1 ;
-(void)fetchFacebookAuthTokenWithHandler:(/*^block*/ id)arg1 ;
-(void)fetchICloudAuthTokenWithHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
@end

