/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheet.h>
#import <UIKit/UIActionSheetDelegate.h>

@interface EasyCallbackActionSheet : UIActionSheet <UIActionSheetDelegate> {

	/*^block*/ id _willPresentCallback;
	/*^block*/ id _didPresentCallback;
	/*^block*/ id _willDismissCallback;
	/*^block*/ id _didDismissCallback;

}

@property (nonatomic,copy) id willPresentCallback;              //@synthesize willPresentCallback=_willPresentCallback - In the implementation block
@property (nonatomic,copy) id didPresentCallback;               //@synthesize didPresentCallback=_didPresentCallback - In the implementation block
@property (nonatomic,copy) id willDismissCallback;              //@synthesize willDismissCallback=_willDismissCallback - In the implementation block
@property (nonatomic,copy) id didDismissCallback;               //@synthesize didDismissCallback=_didDismissCallback - In the implementation block
+(id)actionSheet;
-(void)setWillPresentCallback:(/*^block*/ id)arg1 ;
-(void)setDidPresentCallback:(/*^block*/ id)arg1 ;
-(void)setWillDismissCallback:(/*^block*/ id)arg1 ;
-(void)setDidDismissCallback:(/*^block*/ id)arg1 ;
-(/*^block*/ id)willPresentCallback;
-(/*^block*/ id)didPresentCallback;
-(/*^block*/ id)willDismissCallback;
-(/*^block*/ id)didDismissCallback;
-(void)dealloc;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void).cxx_destruct;
@end

