/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/NSCoding.h>
#import <MobileBackup/NSCopying.h>

@class NSDate, NSString;

@interface MBRestoreInfo : NSObject <NSCoding, NSCopying> {

	NSDate* _date;
	char _wasCloudRestore;
	NSString* _deviceBuildVersion;
	NSString* _backupBuildVersion;

}

@property (readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) char wasCloudRestore;                       //@synthesize wasCloudRestore=_wasCloudRestore - In the implementation block
@property (readonly) NSString * deviceBuildVersion;              //@synthesize deviceBuildVersion=_deviceBuildVersion - In the implementation block
@property (readonly) NSString * backupBuildVersion;              //@synthesize backupBuildVersion=_backupBuildVersion - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setWasCloudRestore:(char)arg1 ;
-(void)setDeviceBuildVersion:(NSString *)arg1 ;
-(void)setBackupBuildVersion:(NSString *)arg1 ;
-(char)wasCloudRestore;
-(NSString *)deviceBuildVersion;
-(NSString *)backupBuildVersion;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

