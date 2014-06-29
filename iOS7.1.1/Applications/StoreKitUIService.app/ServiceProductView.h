/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUIService/StoreKitUIService-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface ServiceProductView : UIView {

	BOOL _adjustsForStatusBar;
	UIView* _containedView;
	CGRect _statusBarFrame;

}

@property (assign,nonatomic) BOOL adjustsForStatusBar;              //@synthesize adjustsForStatusBar=_adjustsForStatusBar - In the implementation block
@property (nonatomic,retain) UIView * containedView;                //@synthesize containedView=_containedView - In the implementation block
@property (assign,nonatomic) CGRect statusBarFrame;                 //@synthesize statusBarFrame=_statusBarFrame - In the implementation block
-(void)setAdjustsForStatusBar:(BOOL)arg1 ;
-(void)setContainedView:(id)arg1 ;
-(BOOL)adjustsForStatusBar;
-(id)containedView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGRect)statusBarFrame;
-(void)setStatusBarFrame:(CGRect)arg1 ;
@end

