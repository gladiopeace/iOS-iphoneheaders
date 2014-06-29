/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:19:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Resources/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString, NSMutableDictionary;

@interface FudHistory : NSObject <NSCoding> {

	NSString* filterName;
	NSMutableDictionary* history;

}
-(void)recordSuccessfulRemoteFindForRevision:(id)arg1 date:(id)arg2 ;
-(BOOL)policyAllowsRemoteFindNow:(id)arg1 revision:(id)arg2 ;
-(id)getHistoryKeyForRevision:(id)arg1 ;
-(BOOL)policyAllowsRemoteFind:(id)arg1 revision:(id)arg2 date:(id)arg3 ;
-(id)initWithFilterName:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

