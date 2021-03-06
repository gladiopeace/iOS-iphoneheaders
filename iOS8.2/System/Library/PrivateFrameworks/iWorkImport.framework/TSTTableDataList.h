/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSTIntegerKeyDict, TSTTableDataObjectKeyDict;

@interface TSTTableDataList : TSPObject {

	int mListType;
	unsigned mNextID;
	TSTIntegerKeyDict* mData;
	TSTTableDataObjectKeyDict* mIDs;

}

@property (nonatomic,readonly) unsigned nextID; 
@property (nonatomic,readonly) TSTIntegerKeyDict * data; 
+(id)newObjectForUnarchiver:(id)arg1 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)allRichTextPayloadStorages;
-(unsigned long)flushableSize;
-(void)enumerateCustomFormatsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithType:(int)arg1 context:(id)arg2 ;
-(char)supportsIDMapForType:(int)arg1 ;
-(void)p_setupWithType:(int)arg1 nextKeyID:(unsigned)arg2 ;
-(void)enumerateCustomFormatObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)nextID;
-(void)p_customFormatList_setNextID:(unsigned)arg1 ;
-(void)dealloc;
-(TSTIntegerKeyDict *)data;
@end

