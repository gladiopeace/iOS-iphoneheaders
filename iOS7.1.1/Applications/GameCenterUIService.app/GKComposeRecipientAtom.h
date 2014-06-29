/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUIService/GKAtomView.h>

@protocol GKComposeRecipientAtomDelegate;
@class GKComposeRecipient;

@interface GKComposeRecipientAtom : GKAtomView {

	GKComposeRecipient* _recipient;
	<GKComposeRecipientAtomDelegate>* _delegate;

}

@property (nonatomic,readonly) GKComposeRecipient * recipient;                         //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) <GKComposeRecipientAtomDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithRecipient:(id)arg1 ;
-(id)recipient;
@end

