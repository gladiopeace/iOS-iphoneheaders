/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/QLContentView.h>
#import <UIKit/UIToolbarDelegate.h>

@class QLDocumentInfoView, QuickLookBannerView;

@interface QLContentViewIPhone : UIView <QLContentView, UIToolbarDelegate> {

	QLDocumentInfoView* _documentInfoView;
	QuickLookBannerView* _bannerView;

}
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(void)hideBanner;
-(id)initWithFrame:(CGRect)arg1 quickLookBannerViewDelegate:(id)arg2 ;
-(void)showBanner;
-(void)dealloc;
-(void)layoutSubviews;
-(int)positionForBar:(id)arg1 ;
@end

