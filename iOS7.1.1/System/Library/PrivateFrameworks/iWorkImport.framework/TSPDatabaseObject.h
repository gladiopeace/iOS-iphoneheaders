/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface TSPDatabaseObject : NSObject {

	int _classType;
	long long _identifier;

}

@property (nonatomic,readonly) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int classType;                     //@synthesize classType=_classType - In the implementation block
@property (nonatomic,readonly) bool hasDataState; 
@property (nonatomic,readonly) long long dataState; 
@property (nonatomic,readonly) bool hasFileState; 
@property (nonatomic,readonly) NSString * fileState; 
@property (nonatomic,readonly) NSURL * fileURL; 
+(id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3 ;
+(id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4 ;
-(bool)hasDataState;
-(long long)dataState;
-(id)initWithIdentifier:(long long)arg1 classType:(int)arg2 ;
-(bool)hasFileState;
-(id)fileState;
-(int)classType;
-(id)init;
-(long long)identifier;
-(id)fileURL;
@end

