/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct __GSEvent* GSEventRef;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	float field5;
	int field6;
} SCD_Struct_SB3;

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1[8];
} SCD_Struct_SB8;

typedef struct _MISProfile* MISProfileRef;

typedef struct __MKBAssertion* MKBAssertionRef;

typedef struct tcp_connection_fallback_watch_s* tcp_connection_fallback_watch_sRef;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_SB14;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGColor* CGColorRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct SBIconCoordinate {
	int row;
	int col;
} SBIconCoordinate;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct BKSDisplayBrightnessTransaction* BKSDisplayBrightnessTransactionRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_SB27;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	int startStyle;
	int endStyle;
	float transitionFraction;
} SCD_Struct_SB29;

typedef struct {
	BOOL valid;
	SCD_Struct_SB29 styleTransitionState;
} SCD_Struct_SB30;

typedef struct {
	int type;
	int modifier;
	unsigned pathIndex;
	unsigned pathIdentity;
	CGPoint location;
	CGPoint previousLocation;
	CGPoint unrotatedLocation;
	CGPoint previousUnrotatedLocation;
	float totalDistanceTraveled;
	int interfaceOrientation;
	int previousInterfaceOrientation;
	double timestamp;
	BOOL isValid;
} SCD_Struct_SB31;

typedef struct __SBGestureContext* SBGestureContextRef;

typedef struct {
	int field1;
	int field2;
	unsigned field3;
	unsigned field4;
	CGPoint field5;
	CGPoint field6;
	CGPoint field7;
	CGPoint field8;
	float field9;
	int field10;
	int field11;
	double field12;
	BOOL field13;
} SCD_Struct_SB33;

typedef struct _CARenderImage* CARenderImageRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
} SCD_Struct_SB35;

typedef struct CGImage* CGImageRef;

typedef struct {
	BOOL itemIsEnabled[25];
	BOOL timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	BOOL serviceString[100];
	BOOL serviceCrossfadeString[100];
	BOOL serviceImages[2][100];
	BOOL operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	BOOL batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	BOOL activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
} SCD_Struct_SB37;

typedef struct SBWindowLevelRange_struct {
	float start;
	float end;
} SBWindowLevelRange_struct;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
} SCD_Struct_SB40;

