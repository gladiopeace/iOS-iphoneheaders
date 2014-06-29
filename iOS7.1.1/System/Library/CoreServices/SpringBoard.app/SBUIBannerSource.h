/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBUIBannerSource <NSObject>
@optional
-(void)bannerViewWillAppear:(id)arg1;
-(void)bannerViewDidAppear:(id)arg1;
-(void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;

@required
-(id)newBannerViewForContext:(id)arg1;
-(id)peekNextBannerItemForTarget:(id)arg1;
-(id)dequeueNextBannerItemForTarget:(id)arg1;
@end

