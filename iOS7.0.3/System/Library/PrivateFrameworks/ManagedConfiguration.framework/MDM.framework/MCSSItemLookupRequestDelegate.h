/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <MDM/SSItemLookupRequestDelegate.h>

@class NSArray, SSItemLookupRequest;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate> {

	NSArray* _items;

}

@property (nonatomic,@dynamic,readonly) SSItemLookupRequest * request; 
+(id)instance;
-(void)startCompletionBlock:(/*^block*/ id)arg1 ;
-(void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2 ;
-(void).cxx_destruct;
@end

