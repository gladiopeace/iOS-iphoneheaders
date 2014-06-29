/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIMailActivity.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>
#import <PhotosUI/PUActivity.h>

@class UIViewController, PLVideoRemaker, PLManagedAsset, NSString, MFMailComposeViewController, PLUIEditVideoViewController, PUActivityItemSourceController;

@interface PUMailActivity : UIMailActivity <MFMailComposeViewControllerDelegate, PUActivity> {

	UIViewController* _referenceViewController;
	PLVideoRemaker* _remaker;
	bool _remakingWasCancelled;
	PLManagedAsset* _currentVideo;
	NSString* _trimmedFilePath;
	MFMailComposeViewController* _mailComposeController;
	PLUIEditVideoViewController* _editVideoViewController;
	id _strongSelf;
	PUActivityItemSourceController* _itemSourceController;

}

@property (assign,nonatomic,__weak) PUActivityItemSourceController * itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
-(void)dealloc;
-(void)editVideoViewControllerDidCancel:(id)arg1 ;
-(void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(void).cxx_destruct;
-(void)activityDidFinish:(bool)arg1 ;
-(bool)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(id)mailComposeViewController;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)setItemSourceController:(id)arg1 ;
-(id)itemSourceController;
-(void)cancelRemaking;
-(void)_discardTrimmedFile;
-(void)_pu_cleanup;
-(void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3 ;
-(void)_cancelRemaking:(id)arg1 ;
-(bool)_showTrimViewControllerIfNeededForVideo:(id)arg1 usingMode:(int)arg2 ;
-(void)_showRemakerProgressView:(bool)arg1 ;
-(void)_transcodeVideo:(id)arg1 usingMode:(int)arg2 ;
-(void)composeMailForPhotos;
-(bool)_canPerformEmailActivity;
-(void)_sendViaEmail;
-(void)composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2 ;
-(void)_remakerDidFinish:(id)arg1 ;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
@end

