/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CPDumpType.h>

@class CPDumpEnum;

@interface CPDumpNumeric : CPDumpType {

	int mType;
	CPDumpEnum* mEnumType;

}
-(void)dealloc;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(id)initWithType:(int)arg1 enumType:(id)arg2 ;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(void)fromXml:(xmlNode*)arg1 toBinary:(_sFILE*)arg2 state:(id)arg3 ;
-(id)enumType;
@end

