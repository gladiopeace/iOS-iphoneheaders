/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistantd/ADSessionObject.h>

@class NSString, NSArray;

@interface ADSpeechPacket : NSObject <ADSessionObject> {

	NSString* _aceId;
	NSString* _refId;
	NSArray* _packets;
	long long _packetNumber;

}

@property (nonatomic,retain) NSArray * packets;                     //@synthesize packets=_packets - In the implementation block
@property (assign,nonatomic) long long packetNumber;                //@synthesize packetNumber=_packetNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId;                        //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSString * refId;                        //@synthesize refId=_refId - In the implementation block
-(void)ad_invokeThunk;
-(BOOL)ad_bufferingAllowedDuringActiveSession;
-(id)serializedAceDataError:(id*)arg1 ;
-(NSString *)description;
-(NSString *)aceId;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)refId;
-(void)setRefId:(NSString *)arg1 ;
-(long long)packetNumber;
-(void)setPacketNumber:(long long)arg1 ;
-(NSArray *)packets;
-(void)setPackets:(NSArray *)arg1 ;
@end

