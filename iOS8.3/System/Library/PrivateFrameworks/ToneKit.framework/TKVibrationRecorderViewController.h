/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:52:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class TKVibrationRecorderContentViewController;

@interface TKVibrationRecorderViewController : UINavigationController {

	TKVibrationRecorderContentViewController* _vibrationRecorderContentViewController;

}

@property (assign,nonatomic) id<TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate; 
@property (setter=_setVibrationRecorderContentViewController:,nonatomic,retain) TKVibrationRecorderContentViewController * _vibrationRecorderContentViewController;              //@synthesize vibrationRecorderContentViewController=_vibrationRecorderContentViewController - In the implementation block
-(void)dealloc;
-(id)initWithVibratorController:(id)arg1 ;
-(void)setVibrationRecorderViewControllerDelegate:(id<TKVibrationRecorderViewControllerDelegate>)arg1 ;
-(void)_setVibrationRecorderContentViewController:(id)arg1 ;
-(TKVibrationRecorderContentViewController *)_vibrationRecorderContentViewController;
-(id<TKVibrationRecorderViewControllerDelegate>)vibrationRecorderViewControllerDelegate;
@end

