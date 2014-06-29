/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol PLRootLibraryNavigationController;
@class NSURL, UIAlertView;

@interface PhotosURLRedirectRequest : NSObject <UIAlertViewDelegate> {

	NSURL* _URL;
	UIAlertView* _alertView;
	<PLRootLibraryNavigationController>* _rootController;

}
-(id)initWithDestinationURL:(id)arg1 rootController:(id)arg2 ;
-(void)performRequest;
-(void)_showAlertForError:(int)arg1 ;
-(BOOL)_checkAndAlertSubscribedStreamsLimitReached;
-(void)_navigateToPhotoStreamTab;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end
