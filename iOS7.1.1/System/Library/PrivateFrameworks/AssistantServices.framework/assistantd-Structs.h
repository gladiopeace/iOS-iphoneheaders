/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	unsigned waitingOnApp : 1;
	unsigned waitingOnAlert : 1;
} SCD_Struct_AD0;

typedef struct __CFSet* CFSetRef;

typedef struct _NSZone* NSZoneRef;

typedef struct NACContextOpaque_* NACContextOpaque_Ref;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/ void* zalloc;
	/*function pointer*/ void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

