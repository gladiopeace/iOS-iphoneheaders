/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding> {

	long long _alternativeSelectionCount;
	long long _characterModificationCount;
	NSString* _correctedText;

}

@property (assign,nonatomic) long long alternativeSelectionCount;               //@synthesize alternativeSelectionCount=_alternativeSelectionCount - In the implementation block
@property (assign,nonatomic) long long characterModificationCount;              //@synthesize characterModificationCount=_characterModificationCount - In the implementation block
@property (nonatomic,copy) NSString * correctedText;                            //@synthesize correctedText=_correctedText - In the implementation block
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void).cxx_destruct;
-(void)setAlternativeSelectionCount:(long long)arg1 ;
-(void)setCharacterModificationCount:(long long)arg1 ;
-(void)setCorrectedText:(id)arg1 ;
-(long long)alternativeSelectionCount;
-(long long)characterModificationCount;
-(id)correctedText;
@end

