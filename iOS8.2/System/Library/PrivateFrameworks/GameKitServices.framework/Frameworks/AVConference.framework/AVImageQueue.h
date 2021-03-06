/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface AVImageQueue : NSObject {

	CAImageQueueRef _caQueue;
	OpaqueFigImageQueueRef _figQueue;
	unsigned _slot;

}
+(id)drawingContext;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
-(void)pause;
-(unsigned)setVideoDestination:(id)arg1 ;
-(void)getQueueRepresentation:(void*)arg1 ;
-(char)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_AV9)arg2 ;
@end

