/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSObject;

@interface SUMescalSession : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	bool _complete;
	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;

}

@property (getter=isComplete,readonly) bool complete; 
-(void)dealloc;
-(id)init;
-(bool)isComplete;
-(bool)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(id)primeForAccountCreationWithData:(id)arg1 error:(id*)arg2 ;
-(id)_newDataWithBytes:(char*)arg1 length:(unsigned)arg2 ;
-(void)_teardownSession;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
@end

