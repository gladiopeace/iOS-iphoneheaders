/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/DaemonProtocolDataProvider.h>

@class NSURL;

@interface GratisClaimProtocolDataProvider : DaemonProtocolDataProvider {

	NSURL* _redirectedClaimURL;

}

@property (copy) NSURL * redirectedClaimURL;              //@synthesize redirectedClaimURL=_redirectedClaimURL - In the implementation block
-(id)redirectedClaimURL;
-(void)setRedirectedClaimURL:(id)arg1 ;
-(void)dealloc;
-(BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
@end

