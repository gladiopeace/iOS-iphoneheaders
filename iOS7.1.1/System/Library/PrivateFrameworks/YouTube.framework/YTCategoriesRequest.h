/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray;

@interface YTCategoriesRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _categories;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearDelegate;
-(void)loadRequest:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)didAuthenticate:(id)arg1 ;
-(id)_categoriesURL;
-(void)requestCategoriesWithDelegate:(id)arg1 ;
@end

