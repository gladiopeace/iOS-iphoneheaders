/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQPProcessor.h>

@interface GQPBGProcessor : GQPProcessor {

	Class mGenerator;

}
-(bool)go;
-(id)initWithPath:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(CFStringRef)arg4 previewRequest:(QLPreviewRequestRef)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7 zipArchive:(id)arg8 cryptoKey:(id)arg9 ;
-(id)initWithPath:(id)arg1 zipArchive:(id)arg2 indexFileName:(id)arg3 outputType:(int)arg4 outputPath:(CFStringRef)arg5 previewRequest:(QLPreviewRequestRef)arg6 progressiveHelper:(id)arg7 generator:(Class)arg8 cryptoKey:(id)arg9 ;
-(void)pushInitialState;
-(Class)generator;
@end

