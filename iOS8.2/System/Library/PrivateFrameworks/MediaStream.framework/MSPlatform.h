/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSPlatform <NSObject>
@optional
-(id)pushToken;
-(Class)deletePluginClass;
-(id)contentURLForPersonID:(id)arg1;
-(void)didDetectUnrecoverableCondition;
-(char)shouldEnableNewFeatures;
-(char)policyMaySendDelete;
-(char)isPerformanceLoggingEnabled;
-(id)pushTokenForPersonID:(id)arg1;

@required
-(Class)publisherPluginClass;
-(Class)subscriberPluginClass;
-(Class)sharingPluginClass;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
-(id)baseURLForPersonID:(id)arg1;
-(char)policyMayUpload;
-(char)policyMayDownload;
-(char)shouldLogAtLevel:(int)arg1;
-(id)pathMediaStreamDir;
-(id)socketOptions;
-(id)theDaemon;
-(id)authTokenForPersonID:(id)arg1;
-(id)appBundleInfoString;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(void*)arg4;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(void*)arg7;
-(id)hardwareString;
-(id)OSString;
-(id)UDID;

@end

