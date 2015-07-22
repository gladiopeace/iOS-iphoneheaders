/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSThread, NSError, NSString;

@interface CPLEngineStoreTransaction : NSObject {

	NSThread* _currentThread;
	char _forWrite;
	NSError* _error;
	NSString* _name;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(char)canWrite;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)_forWrite;
-(id)initForWrite:(char)arg1 ;
-(char)do:(/*^block*/id)arg1 ;
-(void)_transactionWillBeginOnThread:(id)arg1 ;
-(void)_transactionDidFinish;
-(char)canRead;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end
