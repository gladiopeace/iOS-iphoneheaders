/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MecabraDatabaseAccessProtocol;
@class NSString, NSURL;

@interface MecabraDatabase : NSObject {

	<MecabraDatabaseAccessProtocol>* _serverObject;
	NSString* _type;
	NSURL* _URL;

}

@property (nonatomic,retain) <MecabraDatabaseAccessProtocol> * serverObject;              //@synthesize serverObject=_serverObject - In the implementation block
@property (nonatomic,retain) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
-(void)addEntry:(id)arg1 ;
-(void)save;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(void)refresh;
-(id)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2 originalIdentifier:(unsigned)arg3 ;
-(id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned)arg4 identifierKey:(id)arg5 ;
-(void)deleteAllMatchingEntries:(id)arg1 ;
-(id)entriesToMerge;
-(id)allEntries;
-(void)clearStoredMergeEntries;
-(void)deleteEntry:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3 ;
-(id)initWithType:(id)arg1 URL:(id)arg2 ;
-(id)rootProxyWithDispatchSemaphore:(id)arg1 ;
-(id)serverObject;
-(void)databaseDidChange;
-(id)synchronousDatabaseReadWithFilter:(id)arg1 ;
-(id)synchronousDatabaseReadWithPropertyKey:(id)arg1 ;
-(id)synchronousDatabaseWriteWithObject:(id)arg1 ;
-(id)entriesWithValues:(id)arg1 ;
-(unsigned)addEntryWithReturnedIdentifier:(id)arg1 ;
-(void)setServerObject:(id)arg1 ;
@end

