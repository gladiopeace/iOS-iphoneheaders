/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileCoordinator.h>

@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {

	NSString* _localPeerID;

}

@property (nonatomic,readonly) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
+(id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)arg1 ;
+(id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
+(id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 ;
-(NSString *)localPeerID;
-(void)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned)arg2 retryOnError:(char)arg3 error:(id*)arg4 byAccessor:(/*^block*/id)arg5 ;
-(char)shouldRetryForError:(id)arg1 ignoreFile:(char*)arg2 ;
-(void)dealloc;
-(id)initWithFilePresenter:(id)arg1 ;
@end

