/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject {

	NSMutableArray* _items;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)currentItem;
-(void)enqueueImportItem:(id)arg1 ;
-(void)dequeueImportItem;
@end

