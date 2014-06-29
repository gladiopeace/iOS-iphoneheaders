/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>
#import <CoreDAV/CoreDAVOptionsTaskDelegate.h>
#import <CoreDAV/CoreDAVPrincipalSearchPropertySetTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSURL, NSString, NSSet, NSMutableSet;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {

	NSURL* _principalURL;
	NSString* _displayName;
	NSURL* _resourceID;
	NSSet* _emailAddresses;
	NSSet* _collections;
	NSSet* _principalSearchProperties;
	bool _isExpandPropertyReportSupported;
	bool _fetchPrincipalSearchProperties;
	bool _shouldIgnoreHomeSetOnDifferentHost;
	NSMutableSet* _redirectHistory;

}

@property (readonly) NSURL * principalURL;                                                                    //@synthesize principalURL=_principalURL - In the implementation block
@property (readonly) NSString * displayName;                                                                  //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSURL * resourceID;                                                                      //@synthesize resourceID=_resourceID - In the implementation block
@property (readonly) NSSet * emailAddresses;                                                                  //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (readonly) NSSet * collections;                                                                     //@synthesize collections=_collections - In the implementation block
@property (readonly) NSSet * principalSearchProperties;                                                       //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
@property (readonly) bool isExpandPropertyReportSupported;                                                    //@synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported - In the implementation block
@property (assign) bool fetchPrincipalSearchProperties;                                                       //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
@property (assign,nonatomic,@dynamic) <CoreDAVGetAccountPropertiesTaskGroupDelegate> * delegate; 
@property (assign,nonatomic) bool shouldIgnoreHomeSetOnDifferentHost;                                         //@synthesize shouldIgnoreHomeSetOnDifferentHost=_shouldIgnoreHomeSetOnDifferentHost - In the implementation block
-(id)collections;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
-(id)resourceID;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(bool)shouldIgnoreHomeSetOnDifferentHost;
-(bool)forceOptionsRequest;
-(void)coaxServerForPrincipalHeaders;
-(void)processPrincipalHeaders:(id)arg1 ;
-(void)_taskCompleted:(id)arg1 withError:(id)arg2 ;
-(bool)fetchPrincipalSearchProperties;
-(void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3 ;
-(bool)isExpandPropertyReportSupported;
-(void)setFetchPrincipalSearchProperties:(bool)arg1 ;
-(id)principalSearchProperties;
-(void)setShouldIgnoreHomeSetOnDifferentHost:(bool)arg1 ;
-(id)principalURL;
-(id)emailAddresses;
@end

