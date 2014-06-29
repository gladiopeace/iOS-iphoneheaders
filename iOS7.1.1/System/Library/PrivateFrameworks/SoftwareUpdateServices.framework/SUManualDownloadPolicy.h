/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUManualDownloadPolicy : SUDefaultDownloadPolicy {

	bool _downloadFreeForCellular;
	bool _downloadAllowableForCellular;
	bool _downloadAllowableForCellular2G;
	bool _downloadAllowableForCellularRoaming;
	bool _downloadAllowableForWiFi;
	bool _autoDownloadAllowableForCellular;
	bool _hasEnoughDiskSpace;
	bool _powerRequired;
	bool _downloadable;
	Class _fakeClass;

}

@property (nonatomic,retain) Class fakeClass;                                                                                    //@synthesize fakeClass=_fakeClass - In the implementation block
@property (assign,getter=isDownloadable,nonatomic) bool downloadable;                                                            //@synthesize downloadable=_downloadable - In the implementation block
@property (assign,getter=isPowerRequired,nonatomic) bool powerRequired;                                                          //@synthesize powerRequired=_powerRequired - In the implementation block
@property (assign,getter=hasEnoughDiskSpace,nonatomic) bool hasEnoughDiskSpace;                                                  //@synthesize hasEnoughDiskSpace=_hasEnoughDiskSpace - In the implementation block
@property (assign,getter=isDownloadFreeForCellular,nonatomic) bool downloadFreeForCellular;                                      //@synthesize downloadFreeForCellular=_downloadFreeForCellular - In the implementation block
@property (assign,getter=isDownloadAllowableForCellular,nonatomic) bool downloadAllowableForCellular;                            //@synthesize downloadAllowableForCellular=_downloadAllowableForCellular - In the implementation block
@property (assign,getter=isDownloadAllowableForCellular2G,nonatomic) bool downloadAllowableForCellular2G;                        //@synthesize downloadAllowableForCellular2G=_downloadAllowableForCellular2G - In the implementation block
@property (assign,getter=isDownloadAllowableForCellularRoaming,nonatomic) bool downloadAllowableForCellularRoaming;              //@synthesize downloadAllowableForCellularRoaming=_downloadAllowableForCellularRoaming - In the implementation block
@property (assign,getter=isDownloadAllowableForWiFi,nonatomic) bool downloadAllowableForWiFi;                                    //@synthesize downloadAllowableForWiFi=_downloadAllowableForWiFi - In the implementation block
-(bool)isDownloadable;
-(Class)class;
-(id)init;
-(void)setDownloadable:(bool)arg1 ;
-(bool)isDownloadFreeForCellular;
-(bool)isPowerRequired;
-(bool)isDownloadAllowableForCellular2G;
-(bool)isDownloadAllowableForCellular;
-(bool)isDownloadAllowableForCellularRoaming;
-(bool)isDownloadAllowableForWiFi;
-(bool)hasEnoughDiskSpace;
-(bool)superIsDownloadable;
-(Class)fakeClass;
-(void)setFakeClass:(Class)arg1 ;
-(void)setPowerRequired:(bool)arg1 ;
-(void)setHasEnoughDiskSpace:(bool)arg1 ;
-(void)setDownloadFreeForCellular:(bool)arg1 ;
-(void)setDownloadAllowableForCellular:(bool)arg1 ;
-(void)setDownloadAllowableForCellular2G:(bool)arg1 ;
-(void)setDownloadAllowableForCellularRoaming:(bool)arg1 ;
-(void)setDownloadAllowableForWiFi:(bool)arg1 ;
@end

