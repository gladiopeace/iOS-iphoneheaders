/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBItemInfoLayoutCache : NSObject {

	double _cachedViewHeight;
	CGSize _referenceSize;
	long long _layoutMode;

}
-(double)viewHeightWithReferenceSize:(CGSize)arg1 layoutMode:(long long)arg2 generateBlock:(/*^block*/id)arg3 ;
-(BOOL)_isLayoutValidWithReferenceSize:(CGSize)arg1 layoutMode:(long long)arg2 ;
-(void)invalidateCache;
@end
