/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCachedURLResponse, NSURLRequest, NSString;

@interface NSURLCacheNode : NSObject {

	NSCachedURLResponse* cachedResponse;
	NSURLRequest* request;
	NSString* key;
	NSURLCacheNode* prev;
	NSURLCacheNode* next;
	unsigned long long hash;

}
-(id)initWithCachedResponse:(id)arg1 request:(id)arg2 key:(id)arg3 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
@end

