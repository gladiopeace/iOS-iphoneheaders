/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <DataDetectorsUI/ABUnknownPersonViewControllerDelegate.h>
#import <DataDetectorsUI/DDRemoteActionViewControllerConfiguration.h>

@protocol DDRemoteActionPresenter;
@class DDAction, ABUnknownPersonViewController, NSString;

@interface DDAddToContactsViewController : UINavigationController <ABUnknownPersonViewControllerDelegate, DDRemoteActionViewControllerConfiguration> {

	id<DDRemoteActionPresenter> _proxy;
	DDAction* _action;
	ABUnknownPersonViewController* _personViewController;

}

@property (retain) DDAction * action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)cancelPressed:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(DDAction *)action;
-(void)setAction:(DDAction *)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)prepareForAction:(id)arg1 ;
-(void)_augmentRecord:(void*)arg1 withResultsFromAction:(id)arg2 ;
@end

