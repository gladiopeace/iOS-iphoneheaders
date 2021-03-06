/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebView, WebNodeHighlight;

@interface WebNodeHighlighter : NSObject {

	WebView* _inspectedWebView;
	WebNodeHighlight* _currentHighlight;

}
-(void)dealloc;
-(void)highlight;
-(id)initWithInspectedWebView:(id)arg1 ;
-(void)hideHighlight;
-(void)didAttachWebNodeHighlight:(id)arg1 ;
-(void)willDetachWebNodeHighlight:(id)arg1 ;
@end

