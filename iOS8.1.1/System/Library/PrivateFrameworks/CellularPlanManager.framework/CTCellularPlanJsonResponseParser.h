/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CTCellularPlanJsonResponseParser : NSObject
+(id)sessionIdFromObject:(id)arg1 ;
+(id)sessionIdFromJsonData:(id)arg1 ;
+(BOOL)parseInitiatePurchaseResponseData:(id)arg1 intoShouldPurchase:(BOOL*)arg2 responseCode:(int*)arg3 responseText:(id*)arg4 buddyML:(id*)arg5 error:(id*)arg6 ;
+(BOOL)parsePurchaseResponseData:(id)arg1 intoShouldDownloadProfile:(BOOL*)arg2 iccid:(id*)arg3 responseCode:(int*)arg4 responseText:(id*)arg5 error:(id*)arg6 ;
+(BOOL)parseSubscriptionsResponseData:(id)arg1 intoSubscriptions:(id*)arg2 error:(id*)arg3 ;
@end
