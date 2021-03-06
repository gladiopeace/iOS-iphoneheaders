/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString, FairPlayDecryptSession;

@interface FairPlayDecryptFileOperation : ISOperation {

	NSData* _dpInfo;
	double _lastSnapshotTime;
	NSString* _path;
	FairPlayDecryptSession* _fairplayDecryptSession;

}
-(void)_updateProgressWithByteCount:(long long)arg1 ;
-(id)initWithPath:(id)arg1 dpInfo:(id)arg2 ;
-(char)_decryptWithSession:(id)arg1 error:(id*)arg2 ;
-(void)_initializeProgressWithFileHandle:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
@end

