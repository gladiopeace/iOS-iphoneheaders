/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SiriUIObjectPickerViewControllerDelegate <NSObject>
@optional
-(void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;

@required
-(id)viewControllerForPickerPresentation:(id)arg1;
@end

