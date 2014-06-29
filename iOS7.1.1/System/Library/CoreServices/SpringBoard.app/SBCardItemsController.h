/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardServices/SBCardItemsControllerRemoteInterface.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@class NSMutableArray, NSMutableDictionary;

@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, XPCProxyTarget> {

	NSMutableArray* _remoteControllers;
	NSMutableDictionary* _cardItems;

}
-(void)_addControllerWithConnection:(id)arg1 ;
-(void)_activateAllCardItems;
-(void)_updateThumbnailForCardItem:(id)arg1 withSnapshotter:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)cardItemsDidChange:(id)arg1 forControllerWithIdentifier:(id)arg2 ;
-(void)addCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2 ;
-(void)removeCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2 ;
-(void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2 ;
-(void)clearCardItemsForControllerWithIdentifier:(id)arg1 ;
-(void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
@end

