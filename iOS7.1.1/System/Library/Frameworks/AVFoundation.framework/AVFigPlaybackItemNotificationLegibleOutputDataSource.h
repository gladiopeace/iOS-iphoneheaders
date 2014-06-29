/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVLegibleOutputDataSource.h>

@class AVWeakReference, NSString;

@interface AVFigPlaybackItemNotificationLegibleOutputDataSource : NSObject <AVLegibleOutputDataSource> {

	AVWeakReference* _weakReferenceToSelf;
	OpaqueFigPlaybackItemRef _figPlaybackItem;
	NSString* _figLegibleOutputsDictionaryKey;
	/*^block*/ id _dataProviderBlock;
	/*^block*/ id _flushBlock;

}
-(id)initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 figLegibleOutputsDictionaryKey:(id)arg2 ;
-(void)setDataProviderBlock:(/*^block*/ id)arg1 ;
-(void)setFlushBlock:(/*^block*/ id)arg1 ;
-(void)_unregisterFromNotifications;
-(void)_collectUncollectables_onlyToBeCalledFromDeallocOrFinalize;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(SCD_Struct_CM4)arg4 withLegibleOutputsDictionaryKey:(id)arg5 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2 ;
-(void)_registerForNotifications;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

