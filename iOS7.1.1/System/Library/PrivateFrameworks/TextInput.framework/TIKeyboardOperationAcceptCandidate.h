/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TIKeyboardOperation.h>

@class TIKeyboardCandidate;

@interface TIKeyboardOperationAcceptCandidate : TIKeyboardOperation {

	TIKeyboardCandidate* _candidate;

}

@property (nonatomic,readonly) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(bool)supportsSecureCoding;
+(id)operationWithCandidate:(id)arg1 ;
-(void)main;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)candidate;
-(id)propertiesForDescription;
-(id)initWithCandidate:(id)arg1 ;
@end

