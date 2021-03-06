/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OCCDecryptor : NSObject {

	NSString* mOutputFilename;
	NSString* mBaseStringForOutputFilename;
	OCCStreamer* mStreamer;

}

@property (nonatomic,readonly) NSString * outputFilename; 
+(id)agileDescriptorNamespace;
+(id)agilePasswordKeyEncryptorNamespace;
+(id)allocTempFileWithBase:(id)arg1 outFilename:(id*)arg2 ;
-(void)dealloc;
-(BOOL)isReadProtectedUsingDefaultPassphrase;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
-(id)outputFilename;
-(void)deleteOutputFile;
-(BOOL)verifyPassphrase:(id)arg1 ;
-(BOOL)decryptIntoOutputFile;
-(BOOL)decrypt;
@end

