/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ADAceSerialization : NSObject
+(id)_insufficientDataErrorForBytesNeeded:(unsigned)arg1 available:(unsigned)arg2 ;
+(id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg1 ;
+(id)aceDataForObject:(id)arg1 error:(id*)arg2 ;
+(id)aceDataForPing:(unsigned)arg1 ;
+(id)aceDataForPong:(unsigned)arg1 ;
+(id)aceDataForNop;
+(id)aceDataForStreamEnd;
+(BOOL)tryParsingAceHeaderData:(id)arg1 compressionType:(unsigned char*)arg2 bytesRead:(unsigned*)arg3 error:(id*)arg4 ;
+(BOOL)tryParsingPacketData:(id)arg1 parsedData:(id*)arg2 bytesRead:(unsigned*)arg3 error:(id*)arg4 ;
@end

