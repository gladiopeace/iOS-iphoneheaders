/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>

@interface PBMutableData : NSMutableData {

	char* p;
	char* buffer;
	char* end;

}
-(void)dealloc;
-(unsigned)length;
-(id)initWithCapacity:(unsigned)arg1 ;
-(const void*)bytes;
-(void)setLength:(unsigned)arg1 ;
-(void*)mutableBytes;
-(void)_pb_growCapacityBy:(unsigned)arg1 ;
@end

