/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class DebugGridOverlayView, UIView;

@interface RootView : UIView {

	DebugGridOverlayView* _debugGridOverlayView;
	BOOL _showDebugGridOverlay;
	UIView* _mainView;

}

@property (nonatomic,retain) UIView * mainView;                      //@synthesize mainView=_mainView - In the implementation block
@property (assign,nonatomic) BOOL showDebugGridOverlay;              //@synthesize showDebugGridOverlay=_showDebugGridOverlay - In the implementation block
-(id)mainView;
-(void)setMainView:(id)arg1 ;
-(BOOL)showDebugGridOverlay;
-(void)setShowDebugGridOverlay:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end

