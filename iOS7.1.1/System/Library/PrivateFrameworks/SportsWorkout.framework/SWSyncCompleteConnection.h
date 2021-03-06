/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWSyncServiceConnection.h>

@protocol SWSyncServiceConnectionDelegateSWSyncCompleteConnectionDelegate;
@class NSString;

@interface SWSyncCompleteConnection : SWSyncServiceConnection {

	<SWSyncServiceConnectionDelegate><SWSyncCompleteConnectionDelegate>* _delegate;
	NSString* _PIN;

}

@property (assign,nonatomic) <SWSyncServiceConnectionDelegate><SWSyncCompleteConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * PIN;                                                                            //@synthesize PIN=_PIN - In the implementation block
-(id)initWithPIN:(id)arg1 host:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)PIN;
-(void)handleResponse:(id)arg1 ;
@end

