/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellContext.h>

@class NSString;

@interface SUMarkupCellContext : SUItemCellContext {

	long long _pendingWebViewLoads;
	NSString* _stylesheet;
	CFDictionaryRef _webViewCache;
	double _webViewWidth;

}

@property (nonatomic,retain) NSString * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (assign,nonatomic) double webViewWidth;                //@synthesize webViewWidth=_webViewWidth - In the implementation block
-(void)dealloc;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
-(void)webViewDidFinishLoading:(id)arg1 ;
-(id)webViewForMarkup:(id)arg1 ;
-(double)webViewWidth;
-(void)setWebViewWidth:(double)arg1 ;
@end

