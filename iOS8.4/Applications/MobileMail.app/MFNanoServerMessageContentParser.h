/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NNMKHTMLParser;

@interface MFNanoServerMessageContentParser : NSObject {

	NNMKHTMLParser* _htmlParser;

}
-(id)parseMessage:(id)arg1 maxImageWidth:(float)arg2 messageBody:(id*)arg3 imageAttachmentsURLsToLoad:(id*)arg4 ;
-(id)_attachmentForURL:(id)arg1 mimePart:(id)arg2 ;
-(id)_nanoAttachmentForURL:(id)arg1 mimePart:(id)arg2 ;
-(char)_parseMimeParts:(id)arg1 messageBody:(id)arg2 attributedString:(id)arg3 maxLength:(unsigned)arg4 maxImageWidth:(float)arg5 maxImageAttachments:(unsigned)arg6 shouldTryAlternatives:(char)arg7 urlsForValidation:(id)arg8 nanoAttachmentsList:(id)arg9 imageAttachmentsURLsToLoad:(id)arg10 usingAlternativePart:(char*)arg11 partiallyLoaded:(char*)arg12 ;
-(id)_parseTextAttachmentMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned)arg3 nanoAttachmentsList:(id)arg4 imageAttachmentsURLsToLoad:(id)arg5 ;
-(id)_parseStringMimePart:(id)arg1 maxLength:(unsigned)arg2 ;
-(id)_parseWebMessageDocumentMimePart:(id)arg1 messageBody:(id)arg2 maxLength:(unsigned)arg3 maxImageWidth:(float)arg4 maxImageAttachments:(unsigned)arg5 shouldTryAlternatives:(char)arg6 urlsForValidation:(id)arg7 finalNanoAttachmentsList:(id)arg8 finalImageAttachmentsURLsToLoad:(id)arg9 usingAlternativePart:(char*)arg10 partiallyLoaded:(char*)arg11 ;
-(void)_parseAttachmentsFromMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned)arg3 nanoAttachmentsList:(id)arg4 imageAttachmentsURLsToLoad:(id)arg5 ;
-(void)dealloc;
@end
