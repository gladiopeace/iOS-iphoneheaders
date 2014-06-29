/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface VMULoadCommand : NSObject {

	unsigned long long _cmdSize;
	unsigned _command;

}
+(id)loadCommandWithMemory:(id)arg1 ;
-(id)initWithMemory:(id)arg1 ;
-(bool)isDyLinker;
-(bool)isDySymTab;
-(unsigned long long)cmdSize;
-(bool)isUUID;
-(bool)isSymTab;
-(bool)isLoadDyLib;
-(bool)isIDDyLib;
-(bool)isSegment;
-(bool)isSegment32;
-(bool)isSegment64;
@end

