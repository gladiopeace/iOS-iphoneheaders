/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle {

	unsigned long long _uniqueID;
	unsigned long long _completionUniqueID;

}

@property (nonatomic,readonly) unsigned long long uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long completionUniqueID;              //@synthesize completionUniqueID=_completionUniqueID - In the implementation block
+(int)type;
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isInlineCompletionCandidate;
-(unsigned long long)uniqueID;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(unsigned long long)completionUniqueID;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4 ;
@end

