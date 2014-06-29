/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MBDomainManager, MBDecoder;

@interface MBDatabase : NSObject {

	NSString* _path;
	MBDomainManager* _domainManager;
	MBDecoder* _decoder;
	double _version;
	unsigned _offsetBase;

}

@property (nonatomic,readonly) MBDomainManager * domainManager;              //@synthesize domainManager=_domainManager - In the implementation block
@property (nonatomic,readonly) double version;                               //@synthesize version=_version - In the implementation block
+(id)databaseWithFile:(id)arg1 domainManager:(id)arg2 error:(id*)arg3 ;
+(id)databaseWithDrive:(id)arg1 path:(id)arg2 domainManager:(id)arg3 error:(id*)arg4 ;
-(id)indexFromDatabaseIgnoringTruncation:(BOOL)arg1 ;
-(id)fileEnumerator;
-(id)initWithFile:(id)arg1 domainManager:(id)arg2 error:(id*)arg3 ;
-(id)initWithDrive:(id)arg1 path:(id)arg2 domainManager:(id)arg3 error:(id*)arg4 ;
-(id)initWithData:(id)arg1 domainManager:(id)arg2 error:(id*)arg3 ;
-(id)fileAtOffset:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(double)version;
-(id)domainManager;
@end

