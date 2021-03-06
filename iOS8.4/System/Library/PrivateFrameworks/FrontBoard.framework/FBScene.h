/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBSceneHost.h>

@protocol FBSceneDelegate, FBSceneClient, FBSceneClientProvider, FBSceneBoundsDelegate;
@class NSString, FBSDisplay, FBWindowContextManager, FBWindowContextHostManager, FBProcess, FBSMutableSceneSettings, FBSSceneSettings, FBSSceneClientSettings;

@interface FBScene : NSObject <FBSceneHost> {

	FBWindowContextManager* _contextManager;
	FBWindowContextHostManager* _contextHostManager;
	BOOL _valid;
	id<FBSceneDelegate> _delegate;
	id<FBSceneClient> _client;
	id<FBSceneClientProvider> _clientProvider;
	FBProcess* _clientProcess;
	NSString* _identifier;
	FBSDisplay* _display;
	FBSMutableSceneSettings* _mutableSettings;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	id<FBSceneBoundsDelegate> _boundsDelegate;
	unsigned long long _transactionID;
	BOOL _lockedForMutation;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplay * display;                                                     //@synthesize display=_display - In the implementation block
@property (nonatomic,retain,readonly) FBWindowContextManager * contextManager;                                  //@synthesize contextManager=_contextManager - In the implementation block
@property (nonatomic,retain,readonly) FBWindowContextHostManager * contextHostManager;                          //@synthesize contextHostManager=_contextHostManager - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * settings;                                              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneClientSettings * clientSettings;                                  //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,retain,readonly) FBProcess * clientProcess;                                                //@synthesize clientProcess=_clientProcess - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                       //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) id<FBSceneDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) id<FBSceneClient> client;                                                 //@synthesize client=_client - In the implementation block
@property (nonatomic,retain,readonly) id<FBSceneClientProvider> clientProvider;                                 //@synthesize clientProvider=_clientProvider - In the implementation block
@property (nonatomic,retain,readonly) FBSMutableSceneSettings * mutableSettings;                                //@synthesize mutableSettings=_mutableSettings - In the implementation block
@property (nonatomic,readonly) unsigned long long _transactionID;                                               //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,setter=_setLockedForMutation:,nonatomic) BOOL _lockedForMutation;                             //@synthesize lockedForMutation=_lockedForMutation - In the implementation block
@property (assign,setter=_setBoundsDelegate:,nonatomic) id<FBSceneBoundsDelegate> _boundsDelegate;              //@synthesize boundsDelegate=_boundsDelegate - In the implementation block
-(BOOL)accessibilitySceneOwnerIsAUIApplication;
-(BOOL)accessibilityIsSceneOnMainScreen;
-(id)accessibilitySceneProcess;
-(BOOL)accessibilitySceneBelongsToTheSystemApp;
-(BOOL)accessibilityIsShowingSheet;
-(BOOL)accessibilitySceneIsForegroundVisible;
-(id)accessibilitySceneIdentifier;
-(id)accessibilityScenePID;
-(CGRect)accessibilitySceneFrame;
-(double)accessibilitySceneLevel;
-(BOOL)accessibilityIsSceneOccluded;
-(BOOL)accessibilitySceneIsRunningInForeground;
-(id)accessibilitySceneDescription;
-(FBWindowContextManager *)contextManager;
-(void)dealloc;
-(void)setDelegate:(id<FBSceneDelegate>)arg1 ;
-(id)description;
-(id)debugDescription;
-(id<FBSceneDelegate>)delegate;
-(FBSSceneSettings *)settings;
-(FBSSceneClientSettings *)clientSettings;
-(void)sendActions:(id)arg1 ;
-(FBSDisplay *)display;
-(NSString *)identifier;
-(BOOL)isValid;
-(void)_setBoundsDelegate:(id)arg1 ;
-(id<FBSceneClientProvider>)clientProvider;
-(FBProcess *)clientProcess;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 attachContext:(id)arg2 ;
-(void)client:(id)arg1 updateContext:(id)arg2 ;
-(void)client:(id)arg1 detachContext:(id)arg2 ;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)client:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)_descriptionWithMultilinePrefix:(id)arg1 ;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(unsigned long long)_transactionID;
-(FBWindowContextHostManager *)contextHostManager;
-(id)initWithIdentifier:(id)arg1 display:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 ;
-(FBSMutableSceneSettings *)mutableSettings;
-(BOOL)_lockedForMutation;
-(void)_setLockedForMutation:(BOOL)arg1 ;
-(unsigned long long)_incrementTransactionID;
-(void)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidateWithTransitionContext:(id)arg1 ;
-(void)_handleSceneClientMessage:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id<FBSceneBoundsDelegate>)_boundsDelegate;
-(id<FBSceneClient>)client;
@end

