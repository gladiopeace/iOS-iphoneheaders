/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol JSONHTTPRequestDelegate <NSObject>
@optional
-(void)request:(id)arg1 hasWrittenBytes:(long long)arg2 expectsToWrite:(long long)arg3;

@required
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)request:(id)arg1 didReceiveObject:(id)arg2;
@end

