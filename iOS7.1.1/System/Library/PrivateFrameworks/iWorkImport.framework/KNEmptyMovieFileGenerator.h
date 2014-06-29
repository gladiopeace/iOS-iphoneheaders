/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject {

	NSURL* mGeneratedFileURL;
	double mDuration;

}

@property (nonatomic,readonly) NSURL * generatedFileURL; 
-(id)initWithGeneratedFileURL:(id)arg1 duration:(double)arg2 ;
-(id)generatedFileURL;
-(void)generateFileWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
@end

