/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	int _updateType;
	int _sampleID;

}

@property (nonatomic,readonly) char shouldUpdate; 
@property (nonatomic,readonly) char preserveDocumentUUID; 
@property (nonatomic,readonly) int updateType;                         //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) int sampleID;                             //@synthesize sampleID=_sampleID - In the implementation block
-(void)setSampleID:(int)arg1 ;
-(char)preserveDocumentUUID;
-(char)shouldUpdate;
-(int)sampleID;
-(char)hasNewStorageForData:(id)arg1 ;
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(void)enumerateDatasAndStoragesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithUpdateType:(int)arg1 ;
-(id)init;
-(int)updateType;
@end

