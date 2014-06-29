/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSString, NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {

	NSString* _configuration;
	NSManagedObjectModel* _mom;
	NSKnownKeysDictionary* _entitiesByName;
	NSMutableArray* _entities;
	id* _entityDescriptionToSQLMap;
	unsigned long long _brokenHashVersion;
	bool _retainLeopardStyleDictionaries;
	bool _modelHasPrecomputedKeyOrder;
	bool _hasVirtualToOnes;

}
-(id)configurationName;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(bool)arg3 ;
-(id)entityNamed:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3 ;
-(id)entityForID:(unsigned long long)arg1 ;
-(bool)_modelHasPrecomputedKeyOrder;
-(void)_recordHasVirtualToOnes;
-(bool)_useLeopardStyleHashing;
-(bool)_useSnowLeopardStyleHashing;
-(id)_precomputedKeyOrderForEntity:(id)arg1 ;
-(void)_addIndexedEntity:(id)arg1 ;
-(bool)_generateModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(bool)arg3 brokenHashVersion:(unsigned long long)arg4 ;
-(id)_entityMapping;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 ;
-(id)_sqlEntityWithRenamingIdentifier:(id)arg1 ;
-(unsigned long long)entityIDForName:(id)arg1 ;
-(bool)_retainHashHack;
-(void)dealloc;
-(id)managedObjectModel;
-(id)entitiesByName;
-(void)finalize;
-(id)entities;
@end

