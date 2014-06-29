/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>

@class GQUProgressiveHelper;

@interface GQUProgressiveOutputBundle : NSObject <GQUOutputBundle> {

	GQUProgressiveHelper* mHelper;
	CFDictionaryRef mQuickLookProperties;
	CFDictionaryRef mAttachmentsURLs;
	CFDictionaryRef mComputedAttachments;
	CFStringRef mUuidStr;
	CFStringRef mUriScheme;
	bool mPreviewStarted;

}
-(void)setDocumentSize:(CGSize)arg1 ;
-(void)setPageElementXPath:(CFStringRef)arg1 withThumbnailsOnLeft:(bool)arg2 ;
-(void)startProgressiveData;
-(bool)setData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 forNamedResource:(CFStringRef)arg3 ;
-(bool)setDataForMainHtmlResource:(CFDataRef)arg1 ;
-(CFStringRef)createUriForResource:(CFStringRef)arg1 ;
-(void)setCurrentSheetUri:(CFStringRef)arg1 ;
-(bool)appendData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 resourceName:(CFStringRef)arg3 ;
-(void)closeAttachment:(CFStringRef)arg1 ;
-(CFURLRef)getAttachmentURL:(CFStringRef)arg1 mimeType:(CFStringRef)arg2 ;
-(id)initWithHandler:(id)arg1 ;
-(void)dealloc;
@end
