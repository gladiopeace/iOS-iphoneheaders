/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateAggregatorPosting.h>
#import <UIKit/UIStatusBarStateProvider.h>

@class SBStatusBarStateAggregator, NSHashTable, NSString;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider> {

	SBStatusBarStateAggregator* _stateAggregator;
	NSHashTable* _stateObservers;
	SCD_Struct_SB37 _aggregatorData;
	int _aggregatorActions;
	SCD_Struct_SB37 _lastPost;
	unsigned _coalescentBlockDepth;
	char _itemNeedsPost[26];
	char _anyItemNeedsPost;
	char _nonItemDataNeedsPost;
	char _posting;
	NSHashTable* _stylesWithDetailUpdates;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginCoalescentBlock;
-(void)endCoalescentBlock;
-(void)updateStatusBarItem:(int)arg1 ;
-(void)statusBarStateAggregatorDidStartPost:(id)arg1 ;
-(void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(char)arg3 toData:(const SCD_Struct_SB37*)arg4 ;
-(void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const SCD_Struct_SB37*)arg2 ;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const SCD_Struct_SB37*)arg2 actions:(int)arg3 ;
-(char)_shouldPostForVisitedItem:(int)arg1 withUpdates:(char)arg2 toAggregatorData:(const SCD_Struct_SB37*)arg3 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB37*)arg1 ;
-(void)_composePostActionsFromAggregatorActions:(int*)arg1 ;
-(char)_shouldPostForUpdatesToNonItemData:(const SCD_Struct_SB37*)arg1 ;
-(void)_didChangeDoubleHeightStatusStringForStyle:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addStatusBarStateObserver:(id)arg1 ;
-(void)getStatusBarData:(SCD_Struct_SB37*)arg1 ;
-(void)removeStatusBarStateObserver:(id)arg1 ;
@end

