/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:18 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface OTALogFileManager : NSObject
+(void)moveAsidePendingLogs;
+(void)cleanupRetiredLogs;
+(void)gatherNonMobileLogs;
+(unsigned)scanLogs:(id)arg1 ;
+(void)retireLog:(id)arg1 ;
+(void)scanDir:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
+(void)setup;
@end

