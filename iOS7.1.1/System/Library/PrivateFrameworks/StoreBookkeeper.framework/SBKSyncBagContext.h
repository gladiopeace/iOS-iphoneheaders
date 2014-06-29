/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSURL, SSURLBag;

@interface SBKSyncBagContext : NSObject <NSCopying> {

	bool _domainDisabled;
	double _pollingIntervalInSeconds;
	NSString* _domain;
	NSURL* _syncRequestURL;
	SSURLBag* _bag;

}

@property (readonly) NSString * domain;                                        //@synthesize domain=_domain - In the implementation block
@property (retain) NSURL * syncRequestURL;                                     //@synthesize syncRequestURL=_syncRequestURL - In the implementation block
@property (getter=isDomainDisabled,readonly) bool domainDisabled;              //@synthesize domainDisabled=_domainDisabled - In the implementation block
@property (assign) double pollingIntervalInSeconds;                            //@synthesize pollingIntervalInSeconds=_pollingIntervalInSeconds - In the implementation block
@property (retain) SSURLBag * bag;                                             //@synthesize bag=_bag - In the implementation block
+(void)loadBagContextFromURLBag:(id)arg1 domain:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
+(void)_findFirstValueInBag:(id)arg1 keyEnumerator:(id)arg2 valueTransformer:(/*^block*/ id)arg3 defaultValue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(id)init;
-(id)description;
-(id)domain;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(bool)isDomainDisabled;
-(double)pollingIntervalInSeconds;
-(id)syncRequestURL;
-(id)initWithBag:(id)arg1 domain:(id)arg2 ;
-(id)_initWithDomain:(id)arg1 syncRequestURL:(id)arg2 domainDisabled:(bool)arg3 ;
-(void)setDomainDisabled:(bool)arg1 ;
-(void)setIsDomainDisabled:(bool)arg1 ;
-(void)setPollingIntervalInSeconds:(double)arg1 ;
-(void)setSyncRequestURL:(id)arg1 ;
-(id)bag;
-(void)setBag:(id)arg1 ;
@end

