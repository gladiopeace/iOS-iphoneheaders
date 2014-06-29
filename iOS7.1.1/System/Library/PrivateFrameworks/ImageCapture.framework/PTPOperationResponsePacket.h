/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPOperationResponsePacket : NSObject {

	int _numParameters;
	unsigned short _responseCode;
	unsigned _transactionID;
	unsigned _parameters[5];

}
-(unsigned short)responseCode;
-(id)description;
-(unsigned)transactionID;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned)parameter1;
-(int)numParameters;
-(unsigned)parameter2;
-(unsigned)parameter3;
-(unsigned)parameter4;
-(unsigned)parameter5;
-(void)setTransactionID:(unsigned)arg1 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(void)setParameter1:(unsigned)arg1 ;
-(void)setParameter2:(unsigned)arg1 ;
-(void)setParameter3:(unsigned)arg1 ;
-(unsigned)parameterAtIndex:(unsigned)arg1 ;
-(void)setPparameter:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(void)setParameter4:(unsigned)arg1 ;
-(void)setParameter5:(unsigned)arg1 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 numParameters:(unsigned)arg3 parameters:(unsigned*)arg4 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 parameter4:(unsigned)arg6 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 parameter4:(unsigned)arg6 parameter5:(unsigned)arg7 ;
-(void)setResponseCode:(unsigned short)arg1 ;
@end

