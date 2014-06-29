/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUStreamReadChannel.h>

@protocol SFUInputStream, OS_dispatch_queue;
@class SFUDataRepresentation, NSObject;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {

	SFUDataRepresentation* _representation;
	<SFUInputStream>* _inputStream;
	NSObject<OS_dispatch_queue>* _readQueue;

}
-(void)readWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)initWithRepresentation:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(void).cxx_destruct;
@end

