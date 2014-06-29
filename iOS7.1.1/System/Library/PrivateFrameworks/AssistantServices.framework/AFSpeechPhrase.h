/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {

	bool _isLowConfidence;
	NSArray* _interpretations;

}

@property (nonatomic,copy) NSArray * interpretations;              //@synthesize interpretations=_interpretations - In the implementation block
@property (assign,nonatomic) bool isLowConfidence;                 //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
+(bool)supportsSecureCoding;
-(id)bestInterpretation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void).cxx_destruct;
-(id)interpretations;
-(bool)isLowConfidence;
-(void)setIsLowConfidence:(bool)arg1 ;
-(void)setInterpretations:(id)arg1 ;
@end

