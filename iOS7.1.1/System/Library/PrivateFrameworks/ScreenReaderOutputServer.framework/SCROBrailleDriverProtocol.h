/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROBrailleDriverProtocol <NSObject>
@required
-(id)modelIdentifier;
-(unsigned long long)interfaceVersion;
-(int)loadDriverWithIOElement:(id)arg1;
-(bool)unloadDriver;
-(bool)isDriverLoaded;
-(bool)isSleeping;
-(bool)supportsBlinkingCursor;
-(bool)isInputEnabled;
-(bool)postsKeyboardEvents;
-(int)brailleInputMode;
-(id)getInputEvents;
-(long long)mainSize;
-(long long)statusSize;
-(bool)setMainCells:(const char*)arg1 length:(long long)arg2;
-(bool)setStatusCells:(const char*)arg1 length:(long long)arg2;
@end

