/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MBProperties, MBDatabaseBuilder;

@interface MBManifestBuilder : NSObject {

	NSString* _directory;
	MBProperties* _properties;
	MBDatabaseBuilder* _databaseBuilder;

}

@property (nonatomic,readonly) NSString * directory;                             //@synthesize directory=_directory - In the implementation block
@property (nonatomic,readonly) NSString * propertiesPath; 
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) MBProperties * properties;                        //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) MBDatabaseBuilder * databaseBuilder;              //@synthesize databaseBuilder=_databaseBuilder - In the implementation block
+(id)manifestBuilderWithDirectory:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(id)databaseBuilder;
-(id)initWithDirectory:(id)arg1 error:(id*)arg2 ;
-(id)propertiesPath;
-(void)dealloc;
-(id)properties;
-(id)directory;
-(id)databasePath;
@end

