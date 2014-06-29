/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableArray;

@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration> {

	NSMutableArray* _tabs;

}
+(id)tabs;
-(void)saveToArchive:(TabsArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TabsArchive*)arg1 unarchiver:(id)arg2 ;
-(id)tabAtIndex:(unsigned long long)arg1 ;
-(id)initWithTabs:(id)arg1 ;
-(id)tabAtPosition:(double)arg1 ;
-(id)tabAfterPosition:(double)arg1 ;
-(void)removeTabAtIndex:(unsigned long long)arg1 ;
-(void)setPosition:(double)arg1 forTab:(id)arg2 ;
-(unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)insertTab:(id)arg1 ;
@end

