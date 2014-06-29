/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iapd/iapd-Structs.h>
@class NSMutableDictionary, NSObject;

@interface MediaLibraryCache : NSObject {

	NSMutableDictionary* _itemCaches;
	NSObject<OS_dispatch_queue>* _mediaLibraryCacheQ;

}
-(id)collectionsForProperty:(id)arg1 ;
-(void)setCollections:(id)arg1 forProperty:(id)arg2 ;
-(id)globalItemCountForProperty:(id)arg1 ;
-(void)setGlobalItemCount:(unsigned)arg1 ForProperty:(id)arg2 ;
-(id)itemNamesForRange:(NSRange)arg1 forProperty:(id)arg2 ;
-(void)setItemNames:(id)arg1 forRange:(NSRange)arg2 forProperty:(id)arg3 ;
-(id)itemCountForProperty:(id)arg1 ;
-(void)setItemCount:(unsigned)arg1 forProperty:(id)arg2 ;
-(void)invalidateMediaItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
@end

