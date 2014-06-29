/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKRemoteViewController.h>

@class GKUITheme, NSString;

@interface GKComposeRemoteViewController : GKRemoteViewController {

	unsigned _rid;
	GKUITheme* _theme;
	NSString* _defaultMessage;

}

@property (nonatomic,retain) GKUITheme * theme;                    //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) unsigned rid;                         //@synthesize rid=_rid - In the implementation block
@property (nonatomic,copy) NSString * defaultMessage;              //@synthesize defaultMessage=_defaultMessage - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setDefaultMessage:(id)arg1 ;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(void)sendFinishedMessageToDelegateCancelled:(bool)arg1 ;
-(id)observedKeyPaths;
-(void)didRequestFriends:(id)arg1 ;
-(unsigned)rid;
-(void)setRid:(unsigned)arg1 ;
-(id)defaultMessage;
-(void)dealloc;
-(id)theme;
-(void)setTheme:(id)arg1 ;
@end

