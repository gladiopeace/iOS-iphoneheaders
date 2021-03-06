/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIToolbarDelegate.h>
#import <MobileSafari/QuickLookBannerViewDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegatePrivate.h>

@class UIDocumentInteractionController, TabDocument, QuickLookBannerView, NSString;

@interface QuickLookBannerController : NSObject <UIToolbarDelegate, QuickLookBannerViewDelegate, UIDocumentInteractionControllerDelegate, UIDocumentInteractionControllerDelegatePrivate> {

	UIDocumentInteractionController* _documentInteractionController;
	TabDocument* _tabDocument;
	char _isShowingQuickLookOpenInMenu;
	QuickLookBannerView* _bannerView;

}

@property (nonatomic,retain,readonly) QuickLookBannerView * bannerView;                                    //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showBannerView;
-(void)hideBannerView;
-(id)initWithTabDocument:(id)arg1 ;
-(void)_removeBannerViewTimer;
-(void)_addOrRestartBannerViewTimer;
-(void)_savePDFDocumentToFileIfNeeded;
-(id)_urlForQuickLookDocument;
-(void)openInApplication:(id)arg1 ;
-(void)openInOtherApplications:(id)arg1 ;
-(QuickLookBannerView *)bannerView;
-(void)dealloc;
-(int)positionForBar:(id)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(id)documentProxyForPreview:(id)arg1 name:(id)arg2 UTI:(id)arg3 ;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)arg1 ;
@end

