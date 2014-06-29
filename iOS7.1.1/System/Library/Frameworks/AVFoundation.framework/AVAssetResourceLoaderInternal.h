/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReference, NSObject, NSMutableDictionary;

@interface AVAssetResourceLoaderInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* weakReferenceToAsset;
	NSObject<OS_dispatch_queue>* stateQueue;
	AVWeakReference* weakReferenceToDelegate;
	NSObject<OS_dispatch_queue>* delegateQueue;
	NSMutableDictionary* pendingRequests;
	NSObject<OS_dispatch_queue>* contentInformationCachingQueue;
	NSMutableDictionary* contentInformationCache;

}
@end

