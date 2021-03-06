/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMessageBodyStringAccumulator.h>

@protocol MFMessageBodyStringAccumulator <NSObject>
@required
-(bool)isFull;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
-(void)appendInnerTextWithConsumableNode:(id)arg1;
-(id)accumulatedString;
-(void)appendRange:(NSRange)arg1 ofString:(id)arg2;
-(void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;
-(void)appendString:(id)arg1;
@end


@class NSMutableString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator> {

	NSMutableString* _accumulatedString;
	unsigned long long _remainingLength;
	int _options;
	int _lastEntity;
	unsigned long long _lastCustomEntityTag;
	bool _isFull;

}
-(bool)isFull;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2 ;
-(void)appendInnerTextWithConsumableNode:(id)arg1 ;
-(id)accumulatedString;
-(void)appendRange:(NSRange)arg1 ofString:(id)arg2 ;
-(void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2 ;
-(void)dealloc;
-(void)appendString:(id)arg1 ;
@end

