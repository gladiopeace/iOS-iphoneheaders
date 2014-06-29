/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MMCSEngineDelegate <NSObject>
@optional
-(void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
-(bool)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
-(void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
-(id)MMCSEngine:(id)arg1 didRequestAssetWithItemID:(unsigned long long)arg2;

@required
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
@end

