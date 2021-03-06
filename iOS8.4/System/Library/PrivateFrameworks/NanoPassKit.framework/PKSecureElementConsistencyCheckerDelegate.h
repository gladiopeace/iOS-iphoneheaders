/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PKSecureElementConsistencyCheckerDelegate <NSObject>
@required
-(id)paymentApplications;
-(id)paymentPasses;
-(id)secureElementCards;
-(void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(BOOL)arg2;
-(void)deleteCardsWithAIDs:(id)arg1;
-(BOOL)synchronizeWithTSM;
-(void)didDownloadPaymentPass:(id)arg1;

@end

