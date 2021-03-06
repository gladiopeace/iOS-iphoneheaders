/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSPlayStatusUpdateRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _revisionID;

}

@property (nonatomic,readonly) unsigned interfaceID;              //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) unsigned revisionID;               //@synthesize revisionID=_revisionID - In the implementation block
-(BOOL)isConcurrent;
-(double)timeoutInterval;
-(unsigned)interfaceID;
-(id)initWithInterfaceID:(unsigned)arg1 revisionID:(unsigned)arg2 ;
-(unsigned)revisionID;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

