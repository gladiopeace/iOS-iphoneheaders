/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSString, CoreDAVXMLData, NSMutableDictionary, NSDictionary;

@interface CoreDAVMultiPutTask : CoreDAVTask {

	NSString* _appSpecificNamespace;
	NSString* _appSpecificDataProp;
	NSString* _checkCTag;
	CoreDAVXMLData* _pushedData;
	bool _validCTag;
	NSString* _nextCTag;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;

}

@property (readonly) NSString * nextCTag;                          //@synthesize nextCTag=_nextCTag - In the implementation block
@property (readonly) NSDictionary * uuidToHREF;                    //@synthesize uuidToHREF=_uuidToHREF - In the implementation block
@property (readonly) NSDictionary * hrefToETag;                    //@synthesize hrefToETag=_hrefToETag - In the implementation block
@property (readonly) NSDictionary * uuidToStatus;                  //@synthesize uuidToStatus=_uuidToStatus - In the implementation block
@property (readonly) NSDictionary * hrefToStatus;                  //@synthesize hrefToStatus=_hrefToStatus - In the implementation block
@property (readonly) NSDictionary * uuidToErrorItems;              //@synthesize uuidToErrorItems=_uuidToErrorItems - In the implementation block
@property (readonly) NSDictionary * hrefToErrorItems;              //@synthesize hrefToErrorItems=_hrefToErrorItems - In the implementation block
-(void)dealloc;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)nextCTag;
-(id)additionalHeaderValues;
-(id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 ;
-(id)uuidToHREF;
-(id)hrefToETag;
-(id)uuidToErrorItems;
-(id)hrefToErrorItems;
-(id)uuidToStatus;
-(id)hrefToStatus;
-(void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2 ;
-(id)requestBody;
-(id)httpMethod;
@end

