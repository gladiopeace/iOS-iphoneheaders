/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface SUVariableCellConfigurationCache : NSObject {

	NSMutableDictionary* _caches;
	id _cellContext;
	double _tableHeight;

}

@property (nonatomic,readonly) NSArray * caches; 
@property (nonatomic,retain) id cellContext;                  //@synthesize cellContext=_cellContext - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;
-(id)cacheForClass:(Class)arg1 ;
-(id)cellContext;
-(id)initWithTableHeight:(double)arg1 ;
-(void)setCellContext:(id)arg1 ;
-(NSArray *)caches;
@end

