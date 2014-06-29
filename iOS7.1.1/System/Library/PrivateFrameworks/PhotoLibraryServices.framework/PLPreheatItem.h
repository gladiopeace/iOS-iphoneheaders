/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLPreheatItem : NSObject {

	int _prefetchCount;

}
-(void)startPreheatRequest;
-(id)cachedImage;
-(id)cachedImageIfAvailable;
-(bool)addImageHandler:(/*^block*/ id)arg1 ;
-(void)cancelPreheatRequest;
-(long long)incrementPrefetchCount;
-(long long)decrementPrefetchCount;
@end

