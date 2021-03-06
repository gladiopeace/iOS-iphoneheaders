/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class TRAdvertisingInfo, NSString;

@interface TRService : NSObject <NSSecureCoding> {

	TRAdvertisingInfo* _advertisingInfo;
	NSString* _name;
	int _uniqueID;

}

@property (nonatomic,readonly) TRAdvertisingInfo * advertisingInfo;              //@synthesize advertisingInfo=_advertisingInfo - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int uniqueID;                                     //@synthesize uniqueID=_uniqueID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)connectWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)name;
-(int)uniqueID;
-(id)_initWithName:(id)arg1 uniqueID:(int)arg2 advertisingInfo:(id)arg3 ;
-(id)advertisingInfo;
-(void).cxx_destruct;
@end

