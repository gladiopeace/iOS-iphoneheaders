/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROHandlerProtocol
@required
-(int)handlePerformActionForKey:(int)arg1 trusted:(bool)arg2;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(bool)arg2;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(bool)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(bool)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(bool)arg4;
@end

