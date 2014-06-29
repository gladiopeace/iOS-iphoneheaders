/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIToolbarDelegate.h>
#import <MobileSafari/QuickLookBannerViewDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegatePrivate.h>

@class QuickLookBannerView, UIDocumentInteractionController, TabDocument;

@interface QuickLookBannerController : NSObject <UIToolbarDelegate, QuickLookBannerViewDelegate, UIDocumentInteractionControllerDelegate, UIDocumentInteractionControllerDelegatePrivate> {

	QuickLookBannerView* _quickLookBannerView;
	UIDocumentInteractionController* _documentInteractionController;
	TabDocument* _tabDocument;
	BOOL _isShowingQuickLookOpenInMenu;

}

@property (nonatomic,readonly) QuickLookBannerView * bannerView;                                           //@synthesize quickLookBannerView=_quickLookBannerView - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
-(void)showBannerView;
-(void)hideBannerView;
-(id)initWithTabDocument:(id)arg1 ;
-(void)_removeBannerViewTimer;
-(void)_addOrRestartBannerViewTimer;
-(void)_savePDFDocumentToFileIfNeeded;
-(id)_urlForQuickLookDocument;
-(void)openInApplication:(id)arg1 ;
-(void)openInOtherApplications:(id)arg1 ;
-(void)dealloc;
-(int)positionForBar:(id)arg1 ;
-(id)documentInteractionController;
-(void)setDocumentInteractionController:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(id)documentProxyForPreview:(id)arg1 name:(id)arg2 UTI:(id)arg3 ;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)arg1 ;
-(id)bannerView;
@end

