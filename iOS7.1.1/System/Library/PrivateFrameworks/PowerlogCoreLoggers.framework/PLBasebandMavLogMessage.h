/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PLBasebandLogger/PLBasebandMessage.h>

@class NSData, NSString;

@interface PLBasebandMavLogMessage : PLBasebandMessage {

	PLBasebandLogHeader* _header;
	NSData* _payload;

}

@property (readonly) NSString * eventCodeString; 
@property (readonly) unsigned eventCode; 
@property (assign,nonatomic) PLBasebandLogHeader* header;              //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
-(void)parseData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(void)setPayload:(id)arg1 ;
-(PLBasebandLogHeader*)header;
-(void)setHeader:(PLBasebandLogHeader*)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(id)eventCodeString;
-(unsigned)eventCode;
-(id)tooShortErrorString;
-(id)stringForUnknownBytes:(unsigned)arg1 ;
-(id)eventCodeString:(unsigned)arg1 ;
@end

