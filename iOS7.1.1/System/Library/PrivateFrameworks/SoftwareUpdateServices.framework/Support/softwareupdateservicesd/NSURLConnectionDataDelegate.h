/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:55:58 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>
@optional
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
@end

