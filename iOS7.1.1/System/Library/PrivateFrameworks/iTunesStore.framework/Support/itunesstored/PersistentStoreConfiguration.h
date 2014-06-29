/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray;

@interface PersistentStoreConfiguration : NSObject <NSCopying> {

	NSString* _databaseFileName;
	NSArray* _legacyModelVersionIdentifiers;
	NSString* _modelFileName;
	int _storeType;

}

@property (nonatomic,retain) NSString * databaseFileName;                        //@synthesize databaseFileName=_databaseFileName - In the implementation block
@property (nonatomic,readonly) NSString * integrityCookieFileName; 
@property (nonatomic,copy) NSArray * legacyModelVersionIdentifiers;              //@synthesize legacyModelVersionIdentifiers=_legacyModelVersionIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * modelFileName;                           //@synthesize modelFileName=_modelFileName - In the implementation block
@property (assign,nonatomic) int storeType;                                      //@synthesize storeType=_storeType - In the implementation block
-(id)initWithStoreType:(int)arg1 ;
-(int)storeType;
-(id)integrityCookieFileName;
-(id)databaseFileName;
-(id)modelFileName;
-(id)legacyModelVersionIdentifiers;
-(void)setDatabaseFileName:(id)arg1 ;
-(void)setLegacyModelVersionIdentifiers:(id)arg1 ;
-(void)setModelFileName:(id)arg1 ;
-(void)setStoreType:(int)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
@end

