/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIDictationPhrase : NSObject {

	NSString* _text;
	NSArray* _alternativeInterpretations;

}

@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeInterpretations;              //@synthesize alternativeInterpretations=_alternativeInterpretations - In the implementation block
+(id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)text;
-(id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 ;
-(id)alternativeInterpretations;
@end

