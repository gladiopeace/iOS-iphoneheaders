/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface KNAnimationPluginMenu : NSObject {

	NSMutableDictionary* mLocalizedStringToDirectionMap;
	NSMutableDictionary* mDirectionToLocalizedStringMap;
	unsigned mDefaultDirection;
	NSMutableArray* mLocalizedDirections;
	NSMutableArray* mDirections;

}

@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) NSArray * localizedDirections; 
@property (nonatomic,readonly) NSArray * directions; 
@property (assign,nonatomic) unsigned defaultDirection; 
+(id)animationPluginMenu;
+(id)localizedStringForDirection:(unsigned)arg1 shortVersion:(char)arg2 ;
-(void)addDirection:(unsigned)arg1 useShortString:(char)arg2 ;
-(void)setDefaultDirection:(unsigned)arg1 ;
-(unsigned)defaultDirection;
-(NSArray *)localizedDirections;
-(void)addDirection:(unsigned)arg1 localizedMenuString:(id)arg2 ;
-(char)containsDirection:(unsigned)arg1 ;
-(unsigned)indexForDirection:(unsigned)arg1 ;
-(unsigned)directionForIndex:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(NSArray *)directions;
@end

