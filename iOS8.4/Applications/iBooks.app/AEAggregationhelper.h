/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AEHelper.h>

@class AEAnnotationProvider, NSArray, NSURL, NSDictionary, NSString;

@interface AEAggregationhelper : NSObject <AEHelper> {

	NSArray* _plugins;
	NSURL* _url;
	NSDictionary* _options;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AEAnnotationProvider * annotationProvider; 
-(id)helperMetadataForKey:(id)arg1 ;
-(void)helperViewControllerWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)helperValidateBookAuthorizationWithError:(id*)arg1 ;
-(void)setMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)helperDeletePersistentCache;
-(AEAnnotationProvider *)annotationProvider;
-(id)helperCoverImage;
-(char)acknowledgeAnnotationProvider:(id)arg1 willMergeAnnotationsWithAssertVersionMismatch:(id)arg2 assetID:(id)arg3 assetURL:(id)arg4 ;
-(id)initWithPlugins:(id)arg1 forUrl:(id)arg2 withOptions:(id)arg3 ;
-(void)viewControllerFromPluginIndex:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

