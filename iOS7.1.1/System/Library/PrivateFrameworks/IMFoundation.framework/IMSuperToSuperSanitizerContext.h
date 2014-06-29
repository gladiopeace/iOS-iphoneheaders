/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMFromSuperParserContext.h>

@class NSMutableAttributedString, NSMutableArray, NSString, NSAttributedString, NSArray;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext {

	NSMutableAttributedString* _content;
	NSMutableArray* _attachments;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	unsigned long long _offset;
	long long _baseWritingDirection;
	bool _extractAttachments;
	bool _hadBaseWritingDirectionAttribute;

}

@property (readonly) NSAttributedString * sanitizedContent;              //@synthesize content=_content - In the implementation block
@property (readonly) NSArray * attachments;                              //@synthesize attachments=_attachments - In the implementation block
-(void)dealloc;
-(id)name;
-(id)resultsForLogging;
-(void)parserDidEnd:(id)arg1 ;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(id)initWithAttributedString:(id)arg1 extractAttachments:(bool)arg2 ;
-(id)sanitizedContent;
-(id)attachments;
@end

