/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSAttributedString, NSString, NSArray;

@interface IMAttributedStringParserContext : NSObject {

	NSAttributedString* _inString;

}

@property (readonly) NSAttributedString * inString;              //@synthesize inString=_inString - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSArray * resultsForLogging; 
@property (readonly) bool shouldPreprocess; 
-(void)dealloc;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(id)resultsForLogging;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(id)inString;
-(void)parserDidStart:(id)arg1 ;
-(bool)shouldPreprocess;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(void)parserDidEnd:(id)arg1 ;
@end

