/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <MDM/SSPersonalizeOffersDelegate.h>

@class SSPersonalizeOffersResponse, SSPersonalizeOffersRequest;

@interface MCSSPersonalizeOffersDelegate : MCSSRequestDelegate <SSPersonalizeOffersDelegate> {

	SSPersonalizeOffersResponse* _response;

}

@property (nonatomic,@dynamic,readonly) SSPersonalizeOffersRequest * request; 
+(id)instanceWithItems:(id)arg1 ;
-(void).cxx_destruct;
-(void)startCompletionBlock:(/*^block*/ id)arg1 ;
-(void)personalizeOffersRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

