/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/LegacyGameKit.framework/LegacyGameKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKPeerPickerViewController;

@interface GKPeerPickerController : NSObject {

	id _picker;

}

@property (assign,nonatomic) unsigned long long connectionTypesMask; 
@property (assign,nonatomic) <GKPeerPickerControllerDelegate> * delegate; 
@property (getter=isVisible,nonatomic,readonly) bool visible; 
@property (nonatomic,@dynamic,readonly) GKPeerPickerViewController * pickerViewController; 
+(void)initialize;
-(void)setConnectionTypesMask:(unsigned long long)arg1 ;
-(void)_createPicker;
-(id)pickerViewController;
-(unsigned long long)connectionTypesMask;
-(void)peerPickerViewControllerDidCancel:(id)arg1 ;
-(void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3 ;
-(void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned long long)arg2 ;
-(id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)show;
-(bool)isVisible;
-(void)dismiss;
@end

