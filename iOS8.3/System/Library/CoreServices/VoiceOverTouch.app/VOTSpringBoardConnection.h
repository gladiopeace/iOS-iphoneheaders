/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:22:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMachPort;

@interface VOTSpringBoardConnection : NSObject {

	NSMachPort* _sbPort;

}
+(id)defaultConnection;
-(void)setSpringBoardCaptionPanelText:(id)arg1 ;
-(void)informConnectionDied;
-(id)_sbPort;
-(void)restartConnection;
-(void)showSpringBoardVOConfirmation:(char)arg1 ;
-(void)sendProgrammaticAppSwitch:(char)arg1 ;
-(void)updateVisualRotor:(id)arg1 ;
-(void)showElementLabelPanel:(char)arg1 currentLabel:(id)arg2 ;
-(void)setInPassthroughMode:(char)arg1 ;
-(void)setAXInspectorNotificationInfo:(id)arg1 ;
-(void)setAXInspectorInfo:(id)arg1 ;
-(void)showItemChooser:(char)arg1 withItems:(id)arg2 ;
-(void)setScreenCurtainEnabled:(char)arg1 ;
-(void)dealloc;
-(char)isConnected;
@end

