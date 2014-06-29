/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ASPolicyManager : NSObject {

	id _delegate;
	bool _updatingPolicy;

}

@property (assign) <ASPolicyManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)policyKeyChanged:(id)arg1 ;
-(bool)updatingPolicy;
-(void)requestPolicyUpdate;
-(id)currentPolicyKey;
-(id)initWithAccount:(id)arg1 ;
@end

