/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {

	BOOL mySet[32];

}
+(id)ASCIIByteSet;
+(id)asciiWhitespaceSet;
+(id)nonASCIIByteSet;
+(id)suspiciousCodepage1252ByteSet;
-(id)initWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)_initWithSet:(const char*)arg1 ;
-(BOOL)byteIsMember:(BOOL)arg1 ;
-(id)initWithCString:(const char*)arg1 ;
-(id)invertedSet;
@end

