/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:01:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSKeyedArchiver, NSString;

@interface HMDKeyedRemoteArchiver : NSObject {

	NSKeyedArchiver* _archiver;
	NSString* _transportType;

}

@property (nonatomic,retain) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
@property (nonatomic,retain) NSString * transportType;                //@synthesize transportType=_transportType - In the implementation block
-(void)dealloc;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)finishEncoding;
-(void)setTransportType:(NSString *)arg1 ;
-(id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(char)arg2 ;
-(void)setArchiver:(NSKeyedArchiver *)arg1 ;
-(NSKeyedArchiver *)archiver;
-(NSString *)transportType;
@end

