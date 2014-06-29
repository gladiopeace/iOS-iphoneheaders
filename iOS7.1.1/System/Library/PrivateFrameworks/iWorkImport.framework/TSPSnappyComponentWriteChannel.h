/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel;
@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	char* _uncompressedBuffer;
	unsigned long long _uncompressedLength;
	<TSPComponentWriteChannel>* _writeChannel;

}
-(id)initWithWriteChannel:(id)arg1 ;
-(void)writeBlock;
-(void)dealloc;
-(void)close;
-(void).cxx_destruct;
-(void)writeData:(id)arg1 ;
@end

