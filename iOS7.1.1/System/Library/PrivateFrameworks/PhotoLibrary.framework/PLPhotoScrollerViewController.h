/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PLPhotoBrowserController.h>

@interface PLPhotoScrollerViewController : PLPhotoBrowserController {

	bool _modalSheetIsPresent;
	bool _dontChangeStatusBar;
	bool _viewWillDisappear;

}
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)remakerContainerView;
-(void)removeRemakerContainerView;
-(id)_initWithAssetContainerList:(id)arg1 lockStatusBar:(bool)arg2 currentImageIndexPath:(id)arg3 delayImageLoading:(bool)arg4 ;
-(void)setDontChangeStatusBar:(bool)arg1 ;
-(bool)dontChangeStatusBar;
@end

