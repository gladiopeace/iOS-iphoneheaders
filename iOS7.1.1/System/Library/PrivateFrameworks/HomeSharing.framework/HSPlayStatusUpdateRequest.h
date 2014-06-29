/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSPlayStatusUpdateRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _revisionID;

}

@property (nonatomic,readonly) unsigned interfaceID;              //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) unsigned revisionID;               //@synthesize revisionID=_revisionID - In the implementation block
-(bool)isConcurrent;
-(double)timeoutInterval;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(unsigned)interfaceID;
-(id)initWithInterfaceID:(unsigned)arg1 revisionID:(unsigned)arg2 ;
-(unsigned)revisionID;
@end

