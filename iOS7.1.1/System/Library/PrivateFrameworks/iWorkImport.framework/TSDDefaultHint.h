/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDHint.h>

@interface TSDDefaultHint : NSObject <TSDHint> {

	CGRect mBounds;
	unsigned long long mEdges;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long edges; 
+(Class)archivedHintClass;
-(id)initWithBounds:(CGRect)arg1 edges:(unsigned long long)arg2 ;
-(bool)isLastPartitionHorizontally:(bool)arg1 ;
-(bool)overlapsWithSelection:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(CGRect)bounds;
-(unsigned long long)edges;
@end

