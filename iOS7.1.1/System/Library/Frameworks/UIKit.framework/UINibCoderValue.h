/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UINibCoderValue : NSObject {

	NSString* key;
	unsigned scope;
	BOOL type;
	SCD_Union_UI59* value;
	unsigned long long length;

}
+(id)nibValueForInt8:(unsigned char)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForInt16:(unsigned short)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForInt32:(unsigned)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForInt64:(unsigned long long)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForObjectReference:(long long)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForInteger:(unsigned long long)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForBoolean:(bool)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForDouble:(double)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForFloat:(float)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForBytes:(const void*)arg1 length:(unsigned long long)arg2 key:(id)arg3 scope:(unsigned)arg4 ;
+(id)nibValueRepresentingNilReferenceForKey:(id)arg1 scope:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned long long)byteLength;
@end

