/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:14:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/profiled-Structs.h>
#import <profiled/MCNewPayloadHandler.h>

@class NSString;

@interface MCVPNPayloadHandlerBase : MCNewPayloadHandler {

	SCPreferencesRef _scPreferences;
	NSString* _originalName;

}

@property (assign,nonatomic) SCPreferencesRef scPreferences;              //@synthesize scPreferences=_scPreferences - In the implementation block
@property (nonatomic,retain) NSString * originalName;                     //@synthesize originalName=_originalName - In the implementation block
+(id)managedServiceIDs;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(id)cannotInstallError;
-(id)installService:(SCNetworkServiceRef)arg1 ;
-(id)_reallyInstall;
-(id)_temporarySetAsideNameForOriginalName:(id)arg1 ;
-(SCPreferencesRef)scPreferences;
-(void)setScPreferences:(SCPreferencesRef)arg1 ;
-(void)setOriginalName:(id)arg1 ;
-(id)originalName;
-(void)dealloc;
-(void)remove;
-(void).cxx_destruct;
-(BOOL)isInstalled;
@end

