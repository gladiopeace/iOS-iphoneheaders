/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/IMRenderingCacheOperation.h>
#import <iBooks/BKWebViewDelegate.h>

@class BKPictureRenderBookWebView, NSCondition, UIImage, NSURL, NSString;

@interface AEPictureBookRenderingCacheOperation : IMRenderingCacheOperation <BKWebViewDelegate> {

	BKPictureRenderBookWebView* _webView;
	NSCondition* _cond;
	char _isRunning;
	UIImage* _image;
	NSURL* _url;
	unsigned _pageNumber;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) unsigned pageNumber;                   //@synthesize pageNumber=_pageNumber - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)generateImage:(CGSize)arg1 ;
-(id)callbackInvocationWithImage:(id)arg1 ;
-(void)_releaseWebView;
-(void)_bounceOffMainThreadWithSize:(id)arg1 ;
-(void)_takeSnapshot;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(unsigned)pageNumber;
-(void)setPageNumber:(unsigned)arg1 ;
@end
