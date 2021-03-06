/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIFloatArray : NSObject {

	int _count;
	int _gapCount;
	int* _gaps;
	float _gapValue;
	float _minValue;
	SCD_Union_UI24* _values;
	struct {
		unsigned valueIsSingleton : 1;
		unsigned hideGaps : 1;
		unsigned unused : 30;
	}  _floatArrayFlags;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_setupValuesWithCount:(int)arg1 singleValue:(float)arg2 isRefresh:(BOOL)arg3 ;
-(BOOL)_setupValuesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(BOOL)arg3 ;
-(BOOL)_setupGapIndexesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(BOOL)arg3 ;
-(BOOL)_setupWithDataProvider:(id)arg1 valueIsSingleton:(BOOL)arg2 singletonValue:(float)arg3 isRefresh:(BOOL)arg4 ;
-(SCD_Struct_UI25)_indexesViaSingletonFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(SCD_Struct_UI25)_indexesViaArrayFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(BOOL)refreshWithDataProvider:(id)arg1 singleValue:(float)arg2 ;
-(BOOL)refreshWithDataProvider:(id)arg1 ;
-(float)singleValue;
-(float)minValue;
-(int)valueCount;
-(float)sum;
-(SCD_Union_UI24)offsetsForIndex:(int)arg1 ;
-(SCD_Union_UI24)offsetsForGapIndex:(int)arg1 ;
-(SCD_Struct_UI25)indexesFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(int)indexForGapIndex:(int)arg1 ;
-(void)hideGaps:(BOOL)arg1 ;
@end

