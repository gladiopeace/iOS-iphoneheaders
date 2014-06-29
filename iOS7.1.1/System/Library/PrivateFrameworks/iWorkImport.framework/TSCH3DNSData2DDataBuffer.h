/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3D2DDataBuffer.h>

@class NSData, NSMutableData;

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {

	NSData* mConstData;
	NSMutableData* mMutableData;

}

@property (nonatomic,readonly) NSData * NSData; 
+(id)bufferWithCapacityDimension:(const DataBuffer2DDimension*)arg1 mutableData:(id)arg2 ;
+(id)bufferWithCapacityDimension:(const DataBuffer2DDimension*)arg1 data:(id)arg2 ;
-(id)NSData;
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 data:(id)arg2 ;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 ;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 mutableData:(id)arg2 ;
-(void)resizeFillDimension:(const DataBuffer2DDimension*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(const void*)data;
-(int)componentType;
-(void*)mutableData;
@end

