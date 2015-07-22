/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <EventKitUI/ABUnknownPersonViewControllerDelegate.h>

@protocol EKIdentityProtocol;
@class ABUnknownPersonViewController, NSString;

@interface EKUnknownIdentityViewController : UIViewController <ABUnknownPersonViewControllerDelegate> {

	id<EKIdentityProtocol> _identity;
	ABUnknownPersonViewController* _unknownPersonViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentity:(id)arg1 ;
-(void)loadView;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)setIdentity:(id)arg1 ;
@end
