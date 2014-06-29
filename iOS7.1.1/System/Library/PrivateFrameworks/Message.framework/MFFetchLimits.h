/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFFetchLimits : NSObject {

	unsigned long long _fetchMinBytes;
	unsigned long long _fetchMaxBytes;
	unsigned long long _minBytesLeft;

}

@property (assign,nonatomic) unsigned long long fetchMinBytes;              //@synthesize fetchMinBytes=_fetchMinBytes - In the implementation block
@property (assign,nonatomic) unsigned long long fetchMaxBytes;              //@synthesize fetchMaxBytes=_fetchMaxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long minBytesLeft;               //@synthesize minBytesLeft=_minBytesLeft - In the implementation block
-(id)init;
-(void)setFetchMaxBytes:(unsigned long long)arg1 ;
-(unsigned long long)fetchMaxBytes;
-(unsigned long long)fetchMinBytes;
-(void)setFetchMinBytes:(unsigned long long)arg1 ;
-(unsigned long long)minBytesLeft;
-(void)setMinBytesLeft:(unsigned long long)arg1 ;
@end

