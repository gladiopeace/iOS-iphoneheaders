/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULayoutSectionSampler.h>

@interface PULayoutSectionListSampler : PULayoutSectionSampler {

	long long _numberOfVisibleItems;
	long long _numberOfRealItems;
	long long* _visibleItemIndexes;
	long long _lastSeenSampledIndex;
	long long _lastSeenUnsampledIndex;
	long long _lastSeenTopUnsampledIndex;

}
-(void)dealloc;
-(long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(bool*)arg2 ;
-(long long)unsampledIndexForIndex:(long long)arg1 ;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(NSRange)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dumpInternalMemory;
-(id)initWithNumberOfVisibleItems:(long long)arg1 numberOfRealItems:(long long)arg2 ;
-(long long*)visibleItemIndexes;
@end

