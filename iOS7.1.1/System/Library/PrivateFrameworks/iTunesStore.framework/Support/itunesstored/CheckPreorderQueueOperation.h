/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface CheckPreorderQueueOperation : ISOperation {

	NSNumber* _accountID;
	int _numberOfPreorders;

}

@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) int numberOfPreordersInQueue; 
-(id)_newURLOperation;
-(int)numberOfPreordersInQueue;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)accountIdentifier;
@end

