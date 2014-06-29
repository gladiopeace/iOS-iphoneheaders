/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSDate, NSString, NSFileHandle, NSObject;

@interface ATRollableLog : NSObject {

	NSDate* _lastStatDate;
	NSString* _directory;
	NSString* _baseFilename;
	NSString* _generationalFilenameFormat;
	NSFileHandle* _fh;
	NSObject<OS_dispatch_source>* _fdWatcher;
	NSObject<OS_dispatch_queue>* _logQueue;
	NSObject<OS_dispatch_queue>* _logRequestQueue;

}

@property (retain) NSDate * lastStatDate;              //@synthesize lastStatDate=_lastStatDate - In the implementation block
@property (retain) NSFileHandle * fh;                  //@synthesize fh=_fh - In the implementation block
+(id)loggerWithFilename:(id)arg1 ;
+(id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(int)arg3 ;
+(id)_generationalFormatFromBase:(id)arg1 ;
+(void)enableLogRolling;
+(id)allLogFilesForFilename:(id)arg1 ;
-(void)logLine:(id)arg1 withPrefix:(id)arg2 ;
-(id)_filenameWithGenerationNumber:(int)arg1 ;
-(id)_fullFilePathWithGenerationNumber:(int)arg1 ;
-(void)setFh:(id)arg1 ;
-(void)setLastStatDate:(id)arg1 ;
-(void)_loadUpHandle;
-(id)_fullCompressedFilePathWithGenerationNumber:(int)arg1 ;
-(id)compressFile:(id)arg1 ;
-(void)_rollLogs;
-(void)_statFileIfNecessaryForRollingCheck;
-(void)slurpDataFromFile:(id)arg1 ;
-(id)fh;
-(id)lastStatDate;
-(void)logString:(id)arg1 ;
-(void)logData:(id)arg1 ;
-(id)initWithFilename:(id)arg1 ;
@end

