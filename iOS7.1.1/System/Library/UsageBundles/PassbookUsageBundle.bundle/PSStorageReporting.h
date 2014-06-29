/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/UsageBundles/PassbookUsageBundle.bundle/PassbookUsageBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSStorageReporting <NSObject>
@optional
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1;
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2;
-(float)sizeForCategory:(id)arg1;
-(bool)deleteDataForCategory:(id)arg1 withError:(id*)arg2;

@required
-(id)usageBundleApps;
-(bool)allowDeletionForCategory:(id)arg1;
@end

