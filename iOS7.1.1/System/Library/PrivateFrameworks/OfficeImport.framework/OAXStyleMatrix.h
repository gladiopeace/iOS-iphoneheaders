/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXStyleMatrix : NSObject
+(void)readFromNode:(xmlNode*)arg1 toStyleMatrix:(id)arg2 packagePart:(id)arg3 drawingState:(id)arg4 ;
+(bool)readReferenceFromParentNode:(xmlNode*)arg1 name:(const char*)arg2 inNamespace:(id)arg3 color:(id*)arg4 index:(unsigned*)arg5 ;
+(id)readReferenceFromNode:(xmlNode*)arg1 ;
@end

