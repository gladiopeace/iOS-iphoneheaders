/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SearchEngineInfo;

@interface SearchQueryBuilder : NSObject {

	NSString* queryString;
	SearchEngineInfo* engineInfo;

}
+(id)searchQueryBuilderWithXWebSearchURL:(id)arg1 ;
+(id)searchQueryBuilderWithQuery:(id)arg1 ;
-(id)searchEngineInfo;
-(BOOL)searchEngineIsDefault;
-(id)initWithSearchEngineInfo:(id)arg1 queryString:(id)arg2 ;
-(id)initWithQueryString:(id)arg1 ;
-(id)initWithXWebSearchURL:(id)arg1 ;
-(void)dealloc;
-(id)searchURL;
-(id)queryString;
@end

