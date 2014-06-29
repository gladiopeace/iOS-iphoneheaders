/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIFlowcaseViewDelegate.h>

@protocol SKUIFlowcaseDelegate;
@class NSMutableArray, NSArray, SKUIFlowcaseView;

@interface SKUIFlowcaseViewController : UIViewController <SKUIFlowcaseViewDelegate> {

	<SKUIFlowcaseDelegate>* _delegate;
	NSMutableArray* _landscapeImages;
	NSMutableArray* _portraitImages;
	NSArray* _flowcaseItems;
	SKUIFlowcaseView* _flowcaseView;
	NSArray* _views;

}

@property (assign,nonatomic,__weak) <SKUIFlowcaseDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * flowcaseItems;                             //@synthesize flowcaseItems=_flowcaseItems - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
-(id)flowcaseItems;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 orientation:(long long)arg3 ;
-(id)indexSetForVisibleViews;
-(id)initWithFlowcase:(id)arg1 ;
-(void)flowcaseView:(id)arg1 didSelectViewAtIndex:(long long)arg2 ;
-(void)flowcaseViewDidEndDecelerating:(id)arg1 ;
-(id)_views;
-(void)_reloadImages;
@end

