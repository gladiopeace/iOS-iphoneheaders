/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface CloudPendingChangesCoordinator : NSObject {

	NSString* _name;
	NSString* _pendingChangesPath;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sagaPendingChangesCoordinator;
+(id)jaliscoPendingChangesCoordinator;
+(id)jaliscoAppLibraryPendingChangesCoordinator;
-(void)removeAllPendingChanges;
-(void)processPendingChangesUsingLibrary:(id)arg1 ;
-(void)addPendingChange:(id)arg1 ;
-(id)initWithPrefix:(id)arg1 ;
-(id)_pendingChanges;
-(char)_savePendingChanges:(id)arg1 ;
@end

