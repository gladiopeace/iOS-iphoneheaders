/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property (assign) NSObject<PFUbiquityBaselineRecoveryOperationDelegate> * delegate; 
-(id)retainedDelegate;
-(bool)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3 ;
-(bool)hasCurrentBaseline;
-(bool)conflictsExistForBaseline:(id)arg1 ;
-(bool)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2 ;
-(bool)shouldReplaceLocalStoreWithBaseline:(id)arg1 ;
-(bool)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(id)delegate;
-(void)main;
@end

