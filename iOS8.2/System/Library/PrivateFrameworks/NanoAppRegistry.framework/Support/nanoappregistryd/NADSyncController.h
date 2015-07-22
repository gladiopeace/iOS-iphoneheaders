/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanoappregistryd/SYStoreDelegate.h>

@class NADApplicationStore, SYStore, NSString;

@interface NADSyncController : NSObject <SYStoreDelegate> {

	NADApplicationStore* _applicationStore;
	SYStore* _store;

}

@property (nonatomic,readonly) NADApplicationStore * applicationStore;              //@synthesize applicationStore=_applicationStore - In the implementation block
@property (nonatomic,readonly) SYStore * store;                                     //@synthesize store=_store - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NADApplicationStore *)applicationStore;
-(id)initWithApplicationStore:(id)arg1 ;
-(SYStore *)store;
-(void)syncStoreWillUpdate:(id)arg1 ;
-(void)syncStoreDidUpdate:(id)arg1 ;
-(void)syncStoreAllObjectsDeleted:(id)arg1 ;
-(void)syncStore:(id)arg1 objectAdded:(id)arg2 ;
-(void)syncStore:(id)arg1 objectUpdated:(id)arg2 ;
-(void)syncStore:(id)arg1 objectDeleted:(id)arg2 ;
@end
