/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface JaliscoLoadChapterArtworkOperation : CloudLibraryOperation {

	NSDictionary* _chapterArtworkToLoad;
	NSObject<OS_dispatch_queue>* _responseQueue;

}
+(void)cancelAllOperations;
-(id)initWithDictionary:(id)arg1 ;
-(void)main;
-(void).cxx_destruct;
@end

