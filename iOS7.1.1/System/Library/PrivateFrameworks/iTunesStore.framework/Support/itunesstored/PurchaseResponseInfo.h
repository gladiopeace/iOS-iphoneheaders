/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ISDialog;

@interface PurchaseResponseInfo : NSObject {

	NSString* _changedBuyParameters;
	ISDialog* _dialog;
	BOOL _didPasswordAuthenticate;
	int _machineDataRetryCount;
	NSString* _machineDataSyncState;
	BOOL _shouldRetryForMachineData;

}

@property (nonatomic,retain) NSString * changedBuyParameters;              //@synthesize changedBuyParameters=_changedBuyParameters - In the implementation block
@property (nonatomic,retain) ISDialog * dialog;                            //@synthesize dialog=_dialog - In the implementation block
@property (assign,nonatomic) BOOL didPasswordAuthenticate;                 //@synthesize didPasswordAuthenticate=_didPasswordAuthenticate - In the implementation block
@property (assign,nonatomic) int machineDataRetryCount;                    //@synthesize machineDataRetryCount=_machineDataRetryCount - In the implementation block
@property (nonatomic,copy) NSString * machineDataSyncState;                //@synthesize machineDataSyncState=_machineDataSyncState - In the implementation block
@property (assign,nonatomic) BOOL shouldRetryForMachineData;               //@synthesize shouldRetryForMachineData=_shouldRetryForMachineData - In the implementation block
-(id)changedBuyParameters;
-(id)machineDataSyncState;
-(BOOL)shouldRetryForMachineData;
-(int)machineDataRetryCount;
-(void)setMachineDataRetryCount:(int)arg1 ;
-(BOOL)didPasswordAuthenticate;
-(void)setDidPasswordAuthenticate:(BOOL)arg1 ;
-(void)setChangedBuyParameters:(id)arg1 ;
-(void)setMachineDataSyncState:(id)arg1 ;
-(void)setShouldRetryForMachineData:(BOOL)arg1 ;
-(id)dialog;
-(void)dealloc;
-(void)reset;
-(void)setDialog:(id)arg1 ;
@end

