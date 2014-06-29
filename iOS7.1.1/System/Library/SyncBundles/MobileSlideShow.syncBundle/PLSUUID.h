/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSlideShow/MobileSlideShow-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData, NSString;

@interface PLSUUID : NSData {

	NSData* _data;

}

@property (readonly) NSString * stringValue; 
@property (readonly) NSString * photoBase64String; 
+(id)uuidWithString:(id)arg1 ;
+(id)photoBase64UUIDsFromUUIDs:(id)arg1 ;
+(id)uuidWithData:(id)arg1 ;
+(id)generateUUIDAsString;
+(long long)numberBytes;
+(id)uuid;
-(id)photoBase64String;
-(void)_dataFromCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithPhotoBase64String:(id)arg1 ;
-(Class)classForArchiver;
-(Class)classForPortCoder;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)length;
-(const void*)bytes;
-(Class)classForCoder;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)stringValue;
-(bool)isEqualToData:(id)arg1 ;
@end

