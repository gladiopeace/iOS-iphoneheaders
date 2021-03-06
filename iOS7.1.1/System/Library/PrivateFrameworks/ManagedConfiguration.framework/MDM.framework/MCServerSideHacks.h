/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCHacks.h>

@interface MCServerSideHacks : MCHacks
+(id)sharedHacks;
-(bool)_anyBoolRestrictionChangedInSet:(id)arg1 oldRestrictions:(id)arg2 newRestrictions:(id)arg3 ;
-(void)recomputeAppLayerVPNOutput;
-(void)recomputeAppOptionsEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(bool*)arg2 ;
-(void)recomputeWebContentFilterEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(bool*)arg2 outMechanismChangedDetected:(bool*)arg3 ;
-(void)_checkCarrierBundleRelatedSettings;
-(void)applyEffectiveSettings:(id)arg1 toOtherSubsystemsPasscode:(id)arg2 ;
-(bool)applyEffectiveSettings:(id)arg1 toSettings:(id)arg2 ;
-(void)recomputeHacksAfterProfileChangesEffectiveUserSettings:(id)arg1 sendNotifications:(bool)arg2 ;
-(void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4 ;
@end

