/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {

	NSSet* _searchItems;
	bool _applyToPrincipalCollectionSet;
	NSDictionary* _extraAttributes;

}

@property (retain) NSSet * searchItems;                             //@synthesize searchItems=_searchItems - In the implementation block
@property (retain) NSDictionary * extraAttributes;                  //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (assign) bool applyToPrincipalCollectionSet;              //@synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet - In the implementation block
-(void)setSearchItems:(id)arg1 ;
-(id)searchItems;
-(void)dealloc;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(void)setApplyToPrincipalCollectionSet:(bool)arg1 ;
-(id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(bool)arg4 extraAttributes:(id)arg5 ;
-(bool)applyToPrincipalCollectionSet;
-(id)requestBody;
-(id)httpMethod;
-(void)setExtraAttributes:(id)arg1 ;
-(id)extraAttributes;
@end

