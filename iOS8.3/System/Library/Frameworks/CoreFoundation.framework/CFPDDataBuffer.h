/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:42:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(char)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
-(char)beginAccessing;
-(void)endAccessing;
-(char)validatePlist;
-(void*)copyPropertyListWithMutability:(unsigned long)arg1 ;
-(id)copyXPCData;
-(CFDataRef)copyCFData;
-(unsigned long)length;
-(void*)bytes;
@end

