/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableArray;

@interface ADOptInManager : NSObject {

	NSXPCConnection* _adSheetConnection;
	NSMutableArray* _enqueuedHandlers;

}

@property (nonatomic,retain) NSXPCConnection * adSheetConnection;              //@synthesize adSheetConnection=_adSheetConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * enqueuedHandlers;                //@synthesize enqueuedHandlers=_enqueuedHandlers - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)_considerConnectingToAdSheet;
-(id)adSheetConnection;
-(void)setAdSheetConnection:(id)arg1 ;
-(void)setOptInStatus:(bool)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_whenConnectionAvailable:(/*^block*/ id)arg1 ;
-(void)refreshOptInStatusRefreshingWeakToken:(bool)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)handleAccountChange;
-(id)enqueuedHandlers;
-(void)_launchAdSheet;
-(void)refreshOptInStatus;
-(void)getiAdIDsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setEnqueuedHandlers:(id)arg1 ;
@end

