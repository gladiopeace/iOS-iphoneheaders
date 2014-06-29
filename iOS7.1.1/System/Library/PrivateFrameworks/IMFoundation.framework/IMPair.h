/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface IMPair : NSObject <NSCopying> {

	id _first;
	id _second;

}

@property (retain) id first;               //@synthesize first=_first - In the implementation block
@property (retain) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)second;
-(void)setSecond:(id)arg1 ;
-(id)first;
-(void)setFirst:(id)arg1 ;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end

