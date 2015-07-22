/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class SUGradient, SULoadingView, SUGradientView;

@interface SUPlaceholderViewController : SUViewController {

	SUGradient* _backgroundGradient;
	SUGradient* _defaultBackgroundGradient;
	char _hideLoadingView;
	SULoadingView* _loadingView;
	SUGradientView* _gradientView;

}

@property (nonatomic,copy) SUGradient * backgroundGradient;                     //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,copy) SUGradient * defaultBackgroundGradient;              //@synthesize defaultBackgroundGradient=_defaultBackgroundGradient - In the implementation block
@property (nonatomic,readonly) SULoadingView * loadingView; 
@property (assign,nonatomic) char shouldShowLoadingView; 
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)setBackgroundGradient:(SUGradient *)arg1 ;
-(SUGradient *)backgroundGradient;
-(void)setScriptProperties:(id)arg1 ;
-(void)setLoading:(char)arg1 ;
-(void)setDefaultBackgroundGradient:(SUGradient *)arg1 ;
-(SULoadingView *)loadingView;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(void)parentViewControllerHierarchyDidChange;
-(SUGradient *)defaultBackgroundGradient;
-(void)_bagDidLoadNotification:(id)arg1 ;
-(void)_reloadBackgroundGradient;
-(void)_reloadLoadingView;
-(id)_newURLBagBackgroundGradient;
-(id)_copyActiveGradient;
-(void)setShouldShowLoadingView:(char)arg1 ;
-(char)shouldShowLoadingView;
@end
