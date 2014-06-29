/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSObject<OS_dispatch_source>;

typedef struct CGImage* CGImageRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct AirPlayReceiverUIPrivate* AirPlayReceiverUIPrivateRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct {
	unsigned type;
	unsigned long long format;
	unsigned char input;
	unsigned char loopback;
	unsigned char varispeed;
	unsigned char voice;
	unsigned char volumeControl;
	unsigned activeType;
	AirPlayReceiverSessionPrivate session;
	AudioStreamBasicDescription asbd;
	OpaqueAUGraph graph;
	int converterNode;
	OpaqueAudioComponentInstance converterUnit;
	int mixerNode;
	OpaqueAudioComponentInstance mixerUnit;
	int varispeedNode;
	OpaqueAudioComponentInstance varispeedUnit;
	int outputNode;
	OpaqueAudioComponentInstance outputUnit;
	unsigned char outputStarted;
	float outputVolume;
	OpaqueAudioComponentInstance inputUnit;
	char* inputBuffer;
	unsigned long long inputMaxLen;
	unsigned char inputStarted;
	NSObject<OS_dispatch_source>* ducker;
} SCD_Struct_Ai5;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __IOHIDDevice* IOHIDDeviceRef;

typedef struct __CFString* CFStringRef;

typedef struct AirPlayReceiverSessionPrivate* AirPlayReceiverSessionPrivateRef;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
} SCD_Struct_Ai10;

typedef struct {
	SCD_Struct_Ai10 field1;
	SCD_Struct_Ai10 field2;
	int field3;
	int field4;
	int field5;
} SCD_Struct_Ai11;

typedef struct __CTFont* CTFontRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct __CFArray* CFArrayRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

