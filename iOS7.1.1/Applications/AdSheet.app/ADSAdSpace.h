/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <iAd/ADSAdSpace_RPC.h>

@protocol ADAdSpace_RPCNSObject;
@class ADSSession, ADSAdSpaceController, NSString, NSURL;

@interface ADSAdSpace : NSObject <ADSAdSpace_RPC> {

	ADSSession* _session;
	BOOL _shouldNotCycle;
	BOOL _setupComplete;
	BOOL _hasSentVisibleWithoutContentError;
	BOOL _hasLoadedAdOrSentError;
	BOOL _closed;
	<ADAdSpace_RPC><NSObject>* _clientAdSpace;
	int _creativeType;
	ADSAdSpaceController* _adSpaceController;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _section;
	NSString* _authenticationUserName;
	int _visibility;
	int _options;
	double _creationTimestamp;
	double _lastVisibleTimestamp;
	CGRect _frame;

}

@property (assign,nonatomic,__weak) ADSSession * session; 
@property (nonatomic,retain) <ADAdSpace_RPC><NSObject> * clientAdSpace;              //@synthesize clientAdSpace=_clientAdSpace - In the implementation block
@property (nonatomic,readonly) int creativeType;                                     //@synthesize creativeType=_creativeType - In the implementation block
@property (nonatomic,readonly) BOOL policyEngineManagesLoading; 
@property (nonatomic,readonly) BOOL excludedFromControllerPool; 
@property (nonatomic,readonly) BOOL shouldPreloadAction; 
@property (assign,nonatomic) BOOL shouldNotCycle;                                    //@synthesize shouldNotCycle=_shouldNotCycle - In the implementation block
@property (assign,nonatomic) BOOL setupComplete;                                     //@synthesize setupComplete=_setupComplete - In the implementation block
@property (nonatomic,readonly) double creationTimestamp;                             //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (assign,nonatomic) double lastVisibleTimestamp;                            //@synthesize lastVisibleTimestamp=_lastVisibleTimestamp - In the implementation block
@property (nonatomic,retain) ADSAdSpaceController * adSpaceController;               //@synthesize adSpaceController=_adSpaceController - In the implementation block
@property (assign,nonatomic) CGRect frame;                                           //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                        //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * section;                                       //@synthesize section=_section - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                        //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (assign,nonatomic) int visibility;                                         //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL hasSentVisibleWithoutContentError;                 //@synthesize hasSentVisibleWithoutContentError=_hasSentVisibleWithoutContentError - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedAdOrSentError;                            //@synthesize hasLoadedAdOrSentError=_hasLoadedAdOrSentError - In the implementation block
@property (nonatomic,readonly) int options;                                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL closed;                                            //@synthesize closed=_closed - In the implementation block
-(id)clientAdSpace;
-(BOOL)policyEngineManagesLoading;
-(void)setHasLoadedAdOrSentError:(BOOL)arg1 ;
-(BOOL)shouldPreloadAction;
-(BOOL)hasSentVisibleWithoutContentError;
-(BOOL)hasLoadedAdOrSentError;
-(void)setHasSentVisibleWithoutContentError:(BOOL)arg1 ;
-(BOOL)shouldNotCycle;
-(BOOL)excludedFromControllerPool;
-(double)lastVisibleTimestamp;
-(double)creationTimestamp;
-(id)adSpaceController;
-(void)setAdSpaceController:(id)arg1 ;
-(id)initWithClientAdSpace:(id)arg1 configuration:(id)arg2 ;
-(void)setClientAdSpace:(id)arg1 ;
-(void)setLastVisibleTimestamp:(double)arg1 ;
-(void)setShouldNotCycle:(BOOL)arg1 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(id)description;
-(id)section;
-(id)identifier;
-(void)close;
-(void)setIdentifier:(id)arg1 ;
-(int)options;
-(void)setSection:(id)arg1 ;
-(void)setServerURL:(id)arg1 ;
-(void)_priv_cycleImpressionImmediately;
-(void)setAuthenticationUserName:(id)arg1 ;
-(void)_remote_setShouldNotCycle:(BOOL)arg1 ;
-(void)_remote_reportPreRollImpression;
-(void)_remote_scheduleAd;
-(void)_remote_playbackStarted;
-(void)_remote_playbackPaused;
-(void)_remote_playbackResumed;
-(void)_remote_playbackFinishedForContentHash:(id)arg1 ;
-(void)_remote_playbackFailedForURL:(id)arg1 ;
-(void)_remote_cancelScheduledAd;
-(id)authenticationUserName;
-(int)creativeType;
-(void)_priv_setServerURL:(id)arg1 ;
-(void)_remote_setupComplete;
-(void)_remote_close;
-(void)_remote_setIdentifier:(id)arg1 ;
-(void)_remote_setSection:(id)arg1 ;
-(void)_remote_setAuthenticationUserName:(id)arg1 ;
-(void)_remote_setVisibility:(int)arg1 ;
-(void)_remote_setFrame:(id)arg1 ;
-(void)_remote_bannerBeginActionFromFrame:(id)arg1 tapLocation:(id)arg2 ;
-(void)_remote_bannerRefuseAction;
-(void)_remote_bannerCancelAction;
-(void)_remote_presentInterstitialStoryboard;
-(void)_remote_interstitialRemovedFromSuperview;
-(id)serverURL;
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)setupComplete;
-(void)setSetupComplete:(BOOL)arg1 ;
-(int)visibility;
-(void)setVisibility:(int)arg1 ;
@end

