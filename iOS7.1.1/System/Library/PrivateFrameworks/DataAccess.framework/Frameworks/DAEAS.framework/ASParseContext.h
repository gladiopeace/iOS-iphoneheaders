/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSFileHandle, ASTrafficLogger;

@interface ASParseContext : NSObject {

	NSMutableArray* _dataBuffers;
	unsigned long long _offsetIntoFirstData;
	long long _curOffset;
	int _codePage;
	NSString* _parseErrorReason;
	bool _moreDataExpected;
	int _dataGeneration;
	long long _expectedTotalBytesCount;
	long long _currentBytesReceivedCount;
	unsigned _lastFoundBufferWithoutLineEnding;
	unsigned _numTokensInBuffersWithoutLineEndings;
	bool _lastLookedAtBufferHadStringEndPrefix;
	bool _keepPreviousData;
	NSMutableArray* _bypassedDataBuffers;
	NSFileHandle* _logFileHandle;
	NSString* _logFilePath;
	int _streamingState;
	ASTrafficLogger* _trafficLogger;

}

@property (assign,nonatomic) int streamingState;                       //@synthesize streamingState=_streamingState - In the implementation block
@property (assign) bool keepPreviousData;                              //@synthesize keepPreviousData=_keepPreviousData - In the implementation block
@property (readonly) long long curOffset;                              //@synthesize curOffset=_curOffset - In the implementation block
@property (assign) int codePage;                                       //@synthesize codePage=_codePage - In the implementation block
@property (retain) NSString * parseErrorReason;                        //@synthesize parseErrorReason=_parseErrorReason - In the implementation block
@property (assign) bool moreDataExpected;                              //@synthesize moreDataExpected=_moreDataExpected - In the implementation block
@property (assign) int dataGeneration;                                 //@synthesize dataGeneration=_dataGeneration - In the implementation block
@property (assign) long long expectedTotalBytesCount;                  //@synthesize expectedTotalBytesCount=_expectedTotalBytesCount - In the implementation block
@property (readonly) long long currentBytesReceivedCount;              //@synthesize currentBytesReceivedCount=_currentBytesReceivedCount - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned char)currentByte;
-(bool)advanceOffsetByAmount:(unsigned)arg1 ;
-(long long)curOffset;
-(void)setParseErrorReason:(id)arg1 ;
-(char*)bufferForLength:(unsigned)arg1 shouldFree:(bool*)arg2 ;
-(id)parseErrorReason;
-(void)flushLogs;
-(bool)hasNumberOfTokensRemaining:(unsigned)arg1 ;
-(void)setCodePage:(int)arg1 ;
-(int)codePage;
-(id)bufferWithAllData;
-(long long)goodSizeForBuffer;
-(bool)advanceOffsetByAmount:(unsigned)arg1 retainLastToken:(bool)arg2 ;
-(int)dataGeneration;
-(long long)currentBytesReceivedCount;
-(long long)expectedTotalBytesCount;
-(int)streamingState;
-(void)setStreamingState:(int)arg1 ;
-(unsigned char)nextByte;
-(int)numTokensStreamableForNextStringSizeOfTerminator:(int*)arg1 ;
-(int)numTokensForNextString;
-(int)numTokensForNextOpaqueData;
-(void)invalidateBuffers;
-(unsigned char)byteAtOffsetFromCurrentByte:(unsigned)arg1 ;
-(int)numberOfBytesUntilStringEnd:(char*)arg1 searchStringLength:(int)arg2 acceptingBufferBits:(bool)arg3 ;
-(int)_numTokensForNextOpaqueDataCheckNumTokens:(bool)arg1 ;
-(void)setShouldLog:(bool)arg1 ;
-(void)resetToZeroOffset;
-(void)addData:(id)arg1 ;
-(bool)moreDataExpected;
-(void)setMoreDataExpected:(bool)arg1 ;
-(void)setDataGeneration:(int)arg1 ;
-(void)setExpectedTotalBytesCount:(long long)arg1 ;
-(bool)keepPreviousData;
-(void)setKeepPreviousData:(bool)arg1 ;
@end

