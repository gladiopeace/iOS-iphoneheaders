/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIImageViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSDictionary, UIImagePickerController, UINavigationItem;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSDictionary* _options;
	UIImagePickerController* _imagePicker;
	UINavigationItem* _navItem;
	id _delegate;
	Class _viewClass;
	unsigned _canCreateMetadata;
	bool _parentInPopoverException;

}

@property (assign,nonatomic) bool parentInPopoverException;              //@synthesize parentInPopoverException=_parentInPopoverException - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)navigationItem;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(bool)_displaysFullScreen;
-(id)initWithProperties:(id)arg1 ;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2 ;
-(void)videoViewPlaybackDidFail:(id)arg1 ;
-(bool)videoViewCanCreateMetadata:(id)arg1 ;
-(int)cropOverlayMode;
-(CGRect)previewFrame;
-(Class)_viewClass;
-(id)uiipc_imagePickerOptions;
-(id)uiipc_imagePickerController;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(id)_trimMessage;
-(bool)_editingForThirdParty;
-(void)_cancelTrim:(id)arg1 ;
-(void)_setupNavigationItemAndTrimTitle:(id)arg1 ;
-(bool)parentInPopoverException;
-(void)setViewClass:(Class)arg1 ;
-(id)initWithPhoto:(id)arg1 trimTitle:(id)arg2 ;
-(void)setParentInPopoverException:(bool)arg1 ;
-(void)setImagePickerOptions:(id)arg1 ;
-(void)_trimVideo:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
@end

