/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:19:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSNumber;

@interface OTATaskingManager : NSObject {

	unsigned _typesRequestedThisSession;
	unsigned _typesInstalledThisSession;
	NSString* _proxyPath;
	NSString* _crashReporterKey;
	NSString* _awdDeviceIdentifier;
	NSDictionary* _taskingIds;
	NSDictionary* _taskingSelectorInfo;
	NSNumber* _lastProxyUpdate;
	char _ignoreTasking;

}

@property (readonly) NSString * crashReporterKey;                 //@synthesize crashReporterKey=_crashReporterKey - In the implementation block
@property (readonly) NSString * awdDeviceIdentifier;              //@synthesize awdDeviceIdentifier=_awdDeviceIdentifier - In the implementation block
+(int)taskTypeForSubmissionRouting:(int)arg1 ;
-(id)taskIdForInstalledTaskOfType:(int)arg1 ;
-(void)implementTasking:(id)arg1 forStatus:(int)arg2 withData:(id)arg3 ofRouting:(int)arg4 ;
-(void)configureProxyParams:(id)arg1 withPath:(id)arg2 ;
-(id)deviceIDForTaskType:(int)arg1 ;
-(char)shouldRequestTasking:(int)arg1 ;
-(void)markTasking:(int)arg1 ;
-(NSString *)awdDeviceIdentifier;
-(void)dealloc;
-(id)init;
-(NSString *)crashReporterKey;
@end
