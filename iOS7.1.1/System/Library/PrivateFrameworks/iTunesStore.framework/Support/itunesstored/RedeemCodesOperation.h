/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:12 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <MediaPlayer/ISDialogOperationDelegate.h>

@class SSAuthenticationContext, ISDialogButton, NSArray, SSRedeemCodesResponse, NSString;

@interface RedeemCodesOperation : ISOperation <ISDialogOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	BOOL _cameraRecognized;
	ISDialogButton* _dialogButton;
	BOOL _headless;
	NSArray* _redeemCodes;
	SSRedeemCodesResponse* _redeemResponse;
	NSString* _userAgent;

}

@property (readonly) NSArray * redeemCodes; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) BOOL headless;                                              //@synthesize headless=_headless - In the implementation block
@property (assign) BOOL cameraRecognized;                                      //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (copy) NSString * userAgent; 
@property (readonly) SSRedeemCodesResponse * redeemResponse; 
-(id)redeemResponse;
-(void)_runHeadless;
-(void)_runNonHeadless;
-(id)_newURLRequestPropertiesForCode:(id)arg1 ;
-(BOOL)_processDictionary:(id)arg1 dialog:(id*)arg2 error:(id*)arg3 ;
-(id)_newURLRequestPropertiesForServiceActionButton:(id)arg1 ;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(id)arg1 ;
-(void)setCameraRecognized:(BOOL)arg1 ;
-(id)initWithRedeemCodes:(id)arg1 ;
-(void)setHeadless:(BOOL)arg1 ;
-(BOOL)cameraRecognized;
-(id)redeemCodes;
-(BOOL)headless;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)userAgent;
@end

