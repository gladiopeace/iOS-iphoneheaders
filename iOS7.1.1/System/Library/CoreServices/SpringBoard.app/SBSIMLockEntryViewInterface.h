/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBSIMLockEntryViewInterface <NSObject>
@required
-(void)setupSuccess;
-(void)setupFailureState;
-(id)initWithFrame:(CGRect)arg1 languageCode:(id)arg2;
-(id)localizedStringWithKey:(id)arg1;
-(void)setupCurrentLockAttemptState;
-(void)setupUnlockAttemptState;
-(id)label;
-(id)titleText;
@end

