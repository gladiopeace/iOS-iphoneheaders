/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSKChangeEntry : NSObject {

	id mChangeSource;
	NSMutableArray* mChanges;

}

@property (nonatomic,readonly) id changeSource; 
@property (nonatomic,readonly) NSMutableArray * changes; 
-(id)initWithChangeSource:(id)arg1 changes:(id)arg2 ;
-(void)dealloc;
-(NSMutableArray *)changes;
-(id)changeSource;
@end

