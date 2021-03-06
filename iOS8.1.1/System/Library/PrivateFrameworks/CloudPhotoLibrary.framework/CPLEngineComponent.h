/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineComponent <NSObject>
@optional
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1;

@required
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;

@end

