/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSMutableArray, NSArray;

@interface TSTTableTile : TSPObject {

	unsigned char mMaxColumn;
	unsigned short mMaxRow;
	unsigned short mNumCells;
	NSMutableArray* mRowInfos;
	unsigned short mNumRows;
	unsigned char mStorageVersion;

}

@property (nonatomic,readonly) unsigned char maxColumn; 
@property (nonatomic,readonly) unsigned short maxRow; 
@property (nonatomic,readonly) unsigned short numCells; 
@property (nonatomic,readonly) unsigned short numRows; 
@property (nonatomic,readonly) NSArray * rowInfos; 
-(void)i_upgradeTileRowInfosWithDataStore:(id)arg1 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithRows:(id)arg1 context:(id)arg2 ;
-(unsigned long long)flushableSize;
-(unsigned char)maxColumn;
-(unsigned short)maxRow;
-(unsigned short)numCells;
-(unsigned short)numRows;
-(id)rowInfos;
-(void)debugDump;
-(void)debugListRows;
-(void)validate;
-(void)dealloc;
-(id)description;
-(id)initWithContext:(id)arg1 ;
@end

