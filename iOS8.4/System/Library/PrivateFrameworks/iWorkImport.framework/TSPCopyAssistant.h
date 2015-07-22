/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPPasteboardWriteAssistant.h>

@class TSPPasteboard;

@interface TSPCopyAssistant : TSPPasteboardWriteAssistant {

	TSPPasteboard* _pasteboard;
	BOOL _didAttemptToCopy;

}
-(void)copyToPasteboardIsSmartCopy:(BOOL)arg1 ;
-(id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)copyToPasteboard;
-(void)loadData;
@end
