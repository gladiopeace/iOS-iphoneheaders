/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLProtocolClient <NSObject>
@required
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
-(void)URLProtocolDidFinishLoading:(id)arg1;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
@end

