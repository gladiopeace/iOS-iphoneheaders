/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <OTACrashCopier/OTAXPCServiceConnection.h>

@interface OTATaskingAgentConnection : OTAXPCServiceConnection
+(id)sharedConnection;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(id)init;
@end

