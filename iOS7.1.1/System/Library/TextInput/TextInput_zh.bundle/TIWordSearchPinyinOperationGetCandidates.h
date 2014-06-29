/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperationGetCandidates.h>

@class NSArray;

@interface TIWordSearchPinyinOperationGetCandidates : TIWordSearchOperationGetCandidates {

	NSArray* _initiallyHiddenCandidates;
	unsigned long long _selectedHiddenCandidateIndex;

}

@property (nonatomic,readonly) NSArray * initiallyHiddenCandidates;                          //@synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedHiddenCandidateIndex;              //@synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex - In the implementation block
-(void)dealloc;
-(unsigned long long)selectedHiddenCandidateIndex;
-(id)initiallyHiddenCandidates;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned long long)arg4 target:(id)arg5 action:(SEL)arg6 geometryModelData:(id)arg7 ;
@end

