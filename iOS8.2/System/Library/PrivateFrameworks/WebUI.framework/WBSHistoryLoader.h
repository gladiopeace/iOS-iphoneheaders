/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSHistoryLoader <NSObject>
@required
-(void)startLoading;
-(id)initWithURL:(id)arg1 itemCountLimit:(unsigned)arg2 ageLimit:(double)arg3 historyItemClass:(Class)arg4;
-(void)waitForLoadingToComplete;

@end

