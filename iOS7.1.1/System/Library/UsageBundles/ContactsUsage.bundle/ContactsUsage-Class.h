/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/UsageBundles/ContactsUsage.bundle/ContactsUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUsageBundle/PSStorageReporting.h>

@class NSArray;

@interface ContactsUsage : NSObject <PSStorageReporting> {

	NSArray* _cachedBundleApps;
	unsigned long long _totalSize;

}
-(void)populateUsageBundleApps;
-(void)dealloc;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(bool)allowDeletionForCategory:(id)arg1 ;
@end

