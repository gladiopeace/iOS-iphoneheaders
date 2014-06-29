/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class iAP2SessionHighSpeed;

@interface EAUSBBuffer : NSObject {

	iAP2SessionHighSpeed* _session;
	int _usbError;
	char* _bufPtr;
	char* _readPtr;
	char* _writePtr;
	unsigned _writeAttempts;
	unsigned _bufferLength;

}

@property (assign,nonatomic) iAP2SessionHighSpeed * session;              //@synthesize session=_session - In the implementation block
@property (assign) int error;                                             //@synthesize usbError=_usbError - In the implementation block
@property (nonatomic,readonly) char* readPtr;                             //@synthesize readPtr=_readPtr - In the implementation block
@property (nonatomic,readonly) char* writePtr;                            //@synthesize writePtr=_writePtr - In the implementation block
@property (nonatomic,readonly) unsigned writeAttempts;                    //@synthesize writeAttempts=_writeAttempts - In the implementation block
@property (nonatomic,readonly) unsigned dataLength; 
@property (nonatomic,readonly) unsigned writeSpaceRemaining; 
-(id)initWithSession:(id)arg1 bufferSize:(unsigned)arg2 ;
-(unsigned)writeSpaceRemaining;
-(void)moveReadPtr:(unsigned)arg1 ;
-(void)moveWritePtr:(unsigned)arg1 ;
-(void)attemptWrite;
-(char*)writePtr;
-(char*)readPtr;
-(unsigned)writeAttempts;
-(id)session;
-(void)setSession:(id)arg1 ;
-(void)setError:(int)arg1 ;
-(void)dealloc;
-(void)reset;
-(unsigned)dataLength;
-(int)error;
@end

