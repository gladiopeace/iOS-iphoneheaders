/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <SpringBoardUIServices/SBUIRemoteAlertHostInterface.h>

@protocol _SBRemoteAlertHostViewControllerDelegate;
@class NSString;

@interface _SBRemoteAlertHostViewController : _UIRemoteViewController <SBUIRemoteAlertHostInterface> {

	<_SBRemoteAlertHostViewControllerDelegate>* _delegate;
	NSString* _serviceClassName;

}

@property (assign,nonatomic) <_SBRemoteAlertHostViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * serviceClassName;                                          //@synthesize serviceClassName=_serviceClassName - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(id)serviceClassName;
-(void)setServiceClassName:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(void)dismiss;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setAllowsBanners:(BOOL)arg1 ;
@end

