/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSError, QLThumbnailAddition, NSDictionary, NSData;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {

	NSURL* _documentURL;
	NSError* _error;
	BOOL _finished;
	BOOL _executing;
	BOOL _allowsThumbnailGeneration;
	QLThumbnailAddition* _addition;

}

@property (readonly) NSDictionary * thumbnailImagesDictionary; 
@property (readonly) NSData * serializedQuickLookMetadataDictionary; 
@property (retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign) BOOL allowsThumbnailGeneration;                                //@synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                   //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                     //@synthesize finished=_finished - In the implementation block
-(void)_finishWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)_finishIfCancelled;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isConcurrent;
-(NSError *)error;
-(NSDictionary *)thumbnailImagesDictionary;
-(NSData *)serializedQuickLookMetadataDictionary;
-(id)initWithDocumentAtURL:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(BOOL)allowsThumbnailGeneration;
-(void)setAllowsThumbnailGeneration:(BOOL)arg1 ;
@end

