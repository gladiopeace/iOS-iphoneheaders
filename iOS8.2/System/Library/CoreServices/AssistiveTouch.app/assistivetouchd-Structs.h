/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __IOHIDDevice* IOHIDDeviceRef;

typedef struct __IOHIDManager* IOHIDManagerRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct SCRCMathAverageValue {
	unsigned samples;
	float fifo[50];
	int fifoIndex;
	float sum;
	float average;
	float current;
} SCRCMathAverageValue;

typedef struct CGPath* CGPathRef;

typedef struct __IOHIDValue* IOHIDValueRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_HN12;

typedef struct _NSZone* NSZoneRef;

typedef struct __AXObserver* AXObserverRef;

typedef struct CGContext* CGContextRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	CGRect field1;
	double field2;
	float field3;
	char field4;
	float field5;
	char field6;
} SCD_Struct_SC17;

typedef struct CGColor* CGColorRef;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct CGImage* CGImageRef;

