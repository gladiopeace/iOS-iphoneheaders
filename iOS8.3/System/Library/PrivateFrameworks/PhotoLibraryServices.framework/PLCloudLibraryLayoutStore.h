/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLCloudLibraryLayoutConfiguration;

@interface PLCloudLibraryLayoutStore : NSObject {

	PLCloudLibraryLayoutConfiguration* _config;

}
+(void)validateConfiguration:(id)arg1 ;
-(unsigned)includeAsset:(id)arg1 ;
-(unsigned)excludeAsset:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)resetStore;
-(void)enumerateCategoriesWithBlock:(/*^block*/id)arg1 ;
@end

