/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSArray;

@interface AVAudioPayload : NSObject {

	SoundDec_t* encoder;
	int payload;
	unsigned samplesPerFrame;
	unsigned blockSize;
	unsigned sampleRate;
	unsigned encodedBytesPerFrame;
	unsigned bundleHeaderBytes;
	unsigned bitrate;
	NSArray* supportedBitrates;
	bool canBundle;
	bool canSetBitrate;
	bool forcingBitrate;
	bool useSBR;
	bool shouldReset;
	int format;

}

@property (nonatomic,readonly) int payload; 
@property (nonatomic,readonly) unsigned samplesPerFrame; 
@property (nonatomic,readonly) unsigned blockSize; 
@property (nonatomic,readonly) unsigned sampleRate; 
@property (nonatomic,readonly) unsigned encodedBytesPerFrame; 
@property (nonatomic,readonly) unsigned bundleHeaderBytes; 
@property (nonatomic,readonly) unsigned bitrate; 
@property (nonatomic,readonly) NSArray * supportedBitrates; 
@property (nonatomic,readonly) bool canBundle; 
@property (assign,nonatomic) bool useSBR; 
+(bool)isPayloadSupported:(int)arg1 ;
-(bool)setupInputProperties;
-(bool)setupEncodeProperties;
-(void)createSupportedBitrates;
-(unsigned)aacBitrate;
-(void)createSupportedBitratesForAACELD;
-(void)dealloc;
-(unsigned)samplesPerFrame;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 ;
-(int)payload;
-(bool)canBundle;
-(unsigned)blockSize;
-(bool)useSBR;
-(unsigned)bitrate;
-(id)initWithPayload:(int)arg1 blockSize:(unsigned)arg2 ;
-(void)setUseSBR:(bool)arg1 ;
-(unsigned)flags;
-(bool)getMagicCookie:(char*)arg1 withLength:(unsigned*)arg2 ;
-(bool)createEncoderWithInternalFormat:(AudioStreamBasicDescription*)arg1 ;
-(unsigned)bundleHeaderBytes;
-(void)resetEncoder;
-(bool)setBitrate:(unsigned)arg1 ;
-(float)qualityForBitrate:(unsigned)arg1 ;
-(unsigned)encodedBytesPerFrame;
-(void)setInternalSampleRate:(unsigned)arg1 ;
-(id)supportedBitrates;
-(unsigned)sampleRate;
@end

