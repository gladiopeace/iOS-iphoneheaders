/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _stoppedResponding;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	BOOL _hasRespondedAtLeastOnce;
	AVAssetWriterInputPassDescription* _mostRecentPassDescription;
	/*^block*/id _callbackBlock;

}
-(id)initWithCallbackQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)respondToNewPassDescription:(id)arg1 ;
-(void)stopRespondingToPassDescriptions;
-(BOOL)_hasStoppedResponding;
-(void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

