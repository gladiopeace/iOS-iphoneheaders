/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/AVRecorderImpl.h>

@class NSMutableDictionary;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {

	bool _isActive;
	bool _isRecording;
	bool _isWriting;
	NSMutableDictionary* _attributes;
	unsigned _fileType;
	unsigned _audioCodec;
	long long _maxPCMFramesToRecord;
	bool _haveRecordedMaxPCMFrames;
	AudioStreamBasicDescription _recordingFormat;
	OpaqueAudioFileIDRef _audioFile;
	OpaqueAudioQueueRef _audioQueue;
	unsigned _numDeviceChannels;
	AudioQueueLevelMeterState* _audioLevels;
	AudioQueueLevelMeterState* _audioLevelsDB;
	unsigned long long _totalBytesRecorded;
	unsigned long long _totalPacketsRecorded;
	unsigned long long _totalFramesRecorded;
	AudioQueueBuffer* _buffers[3];
	bool _bufferUsed[3];

}
-(bool)isRecording;
-(double)recordedDuration;
-(bool)takePhoto;
-(id)attributeForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isActive;
-(void)deactivate;
-(bool)start;
-(void)stop;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(bool)activate:(id*)arg1 ;
-(bool)autoFocusAtPoint:(CGPoint)arg1 ;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned long long)audioNumDeviceChannels;
-(bool)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(bool)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(void)copyEncoderCookieToFile;
-(bool)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 useDB:(bool)arg3 ;
-(void)haveABuffer:(AudioQueueBuffer*)arg1 withTimeStamp:(const AudioTimeStamp*)arg2 andNumPackets:(unsigned)arg3 andPacketDescs:(const AudioStreamPacketDescription*)arg4 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 ;
@end

