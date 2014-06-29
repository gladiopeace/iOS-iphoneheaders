/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <SpringBoardUIServices/SBSUICarDisplayNowPlayingHostInterface.h>
#import <SpringBoardUIServices/SBSUICarDisplayNowPlayingInterface.h>

@protocol SBStarkNowPlayingServiceDelegate;
@interface SBStarkNowPlayingService : _UIRemoteViewController <SBSUICarDisplayNowPlayingHostInterface, SBSUICarDisplayNowPlayingInterface> {

	<SBStarkNowPlayingServiceDelegate>* _delegate;

}

@property (assign,nonatomic) <SBStarkNowPlayingServiceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)switchToState:(id)arg1 ;
@end

