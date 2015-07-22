/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PSDSchedulingObserver <NSObject>
@required
-(void)scheduler:(id)arg1 didStartSessionWithActivityCount:(unsigned long long)arg2 isResuming:(BOOL)arg3;
-(void)scheduler:(id)arg1 didStartActivity:(id)arg2;
-(void)scheduler:(id)arg1 activityDidCompleteSending:(id)arg2;
-(void)scheduler:(id)arg1 didFinishActivity:(id)arg2 success:(BOOL)arg3 error:(id)arg4;
-(void)schedulerDidFinishSession:(id)arg1;

@end
