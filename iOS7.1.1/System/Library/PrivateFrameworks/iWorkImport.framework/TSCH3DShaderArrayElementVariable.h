/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DShaderVariable.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DShaderVariable;

@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable <TSCHUnretainedParent> {

	TSCH3DShaderVariable* mParent;
	unsigned long long mIndex;

}
+(id)variableWithParentVariable:(id)arg1 index:(unsigned long long)arg2 ;
-(void)clearParent;
-(id)initWithParentVariable:(id)arg1 index:(unsigned long long)arg2 ;
-(void)dealloc;
@end
