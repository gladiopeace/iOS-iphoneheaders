/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSData;

@interface PQLNameInjectionBase : NSData {

	unsigned long long _length;
	char* _bytes;

}

@property (nonatomic,readonly) NSData * sql; 
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(NSData *)sql;
@end

