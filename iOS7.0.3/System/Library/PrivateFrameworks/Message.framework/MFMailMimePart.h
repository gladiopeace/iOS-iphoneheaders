/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(void)configureFileWrapper:(id)arg1 ;
-(id)contentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(id)htmlContentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(BOOL)_shouldContinueDecodingProcess;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)htmlContentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 ;
-(id)htmlContent;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartAppledouble;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
@end

