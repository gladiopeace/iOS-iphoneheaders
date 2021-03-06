/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSMutableDictionary;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __AXUIElement* AXUIElementRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFString* CFStringRef;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_VO10;

typedef struct CGPath* CGPathRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	unsigned count;
	double delay;
	double lastTime;
	BOOL connected;
} SCD_Struct_VO15;

typedef struct VOTTextMarkerRange {
	NSData* startMarker;
	NSData* endMarker;
} VOTTextMarkerRange;

typedef struct SCRCMathAverageValue {
	unsigned samples;
	float fifo[50];
	int fifoIndex;
	float sum;
	float average;
	float current;
} SCRCMathAverageValue;

typedef struct __AXObserver* AXObserverRef;

typedef struct {
	int direction;
	unsigned count;
	float continuityDistance;
	float distanceTraveled;
	CGPoint firstCountPoint;
} SCD_Struct_VO19;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	unsigned char general;
	BOOL showGeneral;
	NSMutableDictionary* generalDict;
} SCD_Struct_VO22;

