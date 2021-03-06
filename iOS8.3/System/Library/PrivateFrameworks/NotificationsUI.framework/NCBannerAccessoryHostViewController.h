/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:45 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <NotificationsUI/NCBannerAccessoryHostInterface.h>

@protocol NCBannerAccessoryHostViewControllerDelegate;
@interface NCBannerAccessoryHostViewController : _UIRemoteViewController <NCBannerAccessoryHostInterface> {

	id<NCBannerAccessoryHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<NCBannerAccessoryHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(void)requestBannerAccessoryViewControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<NCBannerAccessoryHostViewControllerDelegate>)arg1 ;
-(id<NCBannerAccessoryHostViewControllerDelegate>)delegate;
-(void)_dismiss;
-(void)_becomeSticky;
-(void)_setSticky:(char)arg1 ;
@end

