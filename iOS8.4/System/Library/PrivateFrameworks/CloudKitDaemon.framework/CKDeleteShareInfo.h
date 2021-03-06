/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKShareID, CKDSharePCSData;

@interface CKDeleteShareInfo : NSObject {

	CKShareID* _shareID;
	CKDSharePCSData* _pcsData;

}

@property (nonatomic,retain) CKShareID * shareID;                    //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKDSharePCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(void)setPcsData:(CKDSharePCSData *)arg1 ;
-(CKDSharePCSData *)pcsData;
@end

