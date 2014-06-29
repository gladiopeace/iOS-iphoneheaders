/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ServiceInterface;
@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface AnalyticsWorkspace : NSObject {

	NSString* backingStore;
	bool readOnly;
	bool pathKnownToFail;
	bool share;
	NSPersistentStoreCoordinator* __persistentStoreCoordinator;
	NSManagedObjectContext* __mainObjectContext;
	NSManagedObjectModel* __objectModel;
	<ServiceInterface>* __service;

}

@property (nonatomic,readonly) NSManagedObjectModel * objectModel;                                     //@synthesize _objectModel=__objectModel - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * mainObjectContext;                             //@synthesize _mainObjectContext=__mainObjectContext - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize _persistentStoreCoordinator=__persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) <ServiceInterface> * service;                                           //@synthesize _service=__service - In the implementation block
+(id)defaultWorkspace;
+(id)workspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(bool)arg3 ;
-(bool)save;
-(id)service;
-(void).cxx_destruct;
-(id)persistentStoreCoordinator;
-(id)initWorkspaceWithService:(id)arg1 ;
-(id)objectModel;
-(id)_initWithName:(id)arg1 useReadOnly:(bool)arg2 ;
-(bool)_primePath:(id)arg1 ;
-(id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(bool)arg3 ;
-(id)mainObjectContext;
@end

