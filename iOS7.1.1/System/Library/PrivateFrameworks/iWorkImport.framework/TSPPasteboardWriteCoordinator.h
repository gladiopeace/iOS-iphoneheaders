/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPArchiverManagerDelegate.h>
#import <iWorkImport/TSPComponentWriterDelegate.h>
#import <iWorkImport/TSPDataArchiver.h>
#import <iWorkImport/TSPProxyObjectManager.h>
#import <iWorkImport/TSPObjectModifyDelegate.h>

@protocol TSPProxyObjectManager, OS_dispatch_queue;
@class TSPObjectContext, TSPArchiverManager, NSObject, NSHashTable, NSMutableArray, NSURL;

@interface TSPPasteboardWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPProxyObjectManager, TSPObjectModifyDelegate> {

	TSPObjectContext* _context;
	<TSPProxyObjectManager>* _proxyManager;
	TSPArchiverManager* _archiverManager;
	NSObject<OS_dispatch_queue>* _delayedObjectsQueue;
	NSHashTable* _delayedObjects;
	NSMutableArray* _dataFinalizeHandlers;

}

@property (assign,nonatomic,__weak) <TSPProxyObjectManager> * proxyManager;              //@synthesize proxyManager=_proxyManager - In the implementation block
@property (nonatomic,readonly) NSURL * relativeURLForExternalData; 
-(void)willModifyObject:(id)arg1 duringReadOperation:(bool)arg2 ;
-(id)relativeURLForExternalData;
-(id)proxyForReferencedObject:(id)arg1 ;
-(id)proxyManager;
-(void)setProxyManager:(id)arg1 ;
-(void)archiverManager:(id)arg1 didCreateArchiver:(id)arg2 ;
-(bool)archiverManager:(id)arg1 shouldDelayArchivingObject:(id)arg2 ;
-(id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 claimingComponent:(id)arg3 ;
-(void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(bool)componentWriter:(id)arg1 shouldDelayWritingObject:(id)arg2 ;
-(void)addDataFinalizeHandlerForSuccessfulSave:(/*^block*/ id)arg1 ;
-(bool)shouldDelayArchivingObject:(id)arg1 ;
-(id)createPackageMetadataWithContext:(id)arg1 writingDatas:(id)arg2 toDictionary:(id)arg3 ;
-(void)writePasteboardObject:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)delayArchivingOfObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(void).cxx_destruct;
@end

