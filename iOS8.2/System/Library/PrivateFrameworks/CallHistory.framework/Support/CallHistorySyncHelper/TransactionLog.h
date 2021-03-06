/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class NSString;

@interface TransactionLog : CHLogger {

	NSString* _path;
	NSString* _defaultLogDirectory;
	NSString* _defaultLogFileName;

}

@property (readonly) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (readonly) NSString * defaultLogDirectory;              //@synthesize defaultLogDirectory=_defaultLogDirectory - In the implementation block
@property (readonly) NSString * defaultLogFileName;               //@synthesize defaultLogFileName=_defaultLogFileName - In the implementation block
-(id)initWithFileName:(id)arg1 ;
-(id)getTransactions;
-(id)getDefaultLogDirectory;
-(void)createLogDirectory;
-(NSString *)defaultLogDirectory;
-(NSString *)defaultLogFileName;
-(id)init;
-(NSString *)path;
-(void)clear;
-(long)append:(id)arg1 ;
@end

