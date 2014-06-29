/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <BackupAgent2/MBSettingsContext.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSSet, NSMutableDictionary, MBDrive, MBDriveEncryptionManager;

@interface MBDriveSettingsContext : MBSettingsContext <NSCopying> {

	double _protocolVersion;
	NSString* _targetDeviceClass;
	NSString* _sourceIdentifier;
	NSString* _targetIdentifier;
	NSSet* _applicationIDs;
	NSMutableDictionary* _options;
	MBDrive* _drive;
	MBDriveEncryptionManager* _encryptionManager;
	NSString* _deviceCacheDir;
	NSString* _deviceTemporaryDir;

}

@property (assign,nonatomic) double protocolVersion;                                    //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,retain) NSString * targetDeviceClass;                              //@synthesize targetDeviceClass=_targetDeviceClass - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;                               //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * targetIdentifier;                               //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,retain) NSSet * applicationIDs;                                    //@synthesize applicationIDs=_applicationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL shouldNotifySpringBoard; 
@property (nonatomic,readonly) BOOL shouldCopyBackup; 
@property (nonatomic,readonly) NSString * password; 
@property (nonatomic,readonly) BOOL shouldRemoveItemsNotRestored; 
@property (nonatomic,retain) MBDrive * drive;                                           //@synthesize drive=_drive - In the implementation block
@property (nonatomic,retain) MBDriveEncryptionManager * encryptionManager;              //@synthesize encryptionManager=_encryptionManager - In the implementation block
@property (nonatomic,readonly) NSString * driveBackupDir; 
@property (nonatomic,readonly) NSString * driveBackupStatusPath; 
@property (nonatomic,readonly) NSString * driveBackupPropertiesPath; 
@property (nonatomic,readonly) NSString * driveBackupDatabasePath; 
@property (nonatomic,readonly) NSString * driveBackupDatabaseIndexPath; 
@property (nonatomic,readonly) NSString * driveBackupInfoPath; 
@property (nonatomic,readonly) NSString * driveSnapshotDir; 
@property (nonatomic,readonly) NSString * driveSnapshotPropertiesPath; 
@property (nonatomic,readonly) NSString * driveSnapshotDatabasePath; 
@property (nonatomic,readonly) NSString * driveSnapshotDatabaseIndexPath; 
@property (nonatomic,retain) NSString * deviceCacheDir;                                 //@synthesize deviceCacheDir=_deviceCacheDir - In the implementation block
+(id)defaultSettingsContext;
-(id)drive;
-(id)driveSnapshotDir;
-(id)encryptionManager;
-(id)driveBackupDir;
-(id)driveSnapshotPropertiesPath;
-(id)driveSnapshotDatabasePath;
-(id)driveBackupPropertiesPath;
-(id)driveBackupDatabasePath;
-(id)driveBackupDatabaseIndexPath;
-(id)deviceCacheDir;
-(id)driveBackupStatusPath;
-(void)setApplicationIDs:(id)arg1 ;
-(void)setDrive:(id)arg1 ;
-(id)targetDeviceClass;
-(BOOL)shouldRestoreSystemFiles;
-(BOOL)shouldCopyBackup;
-(BOOL)shouldRemoveItemsNotRestored;
-(void)setTargetDeviceClass:(id)arg1 ;
-(void)setEncryptionManager:(id)arg1 ;
-(void)setDeviceCacheDir:(id)arg1 ;
-(id)applicationIDs;
-(BOOL)shouldNotifySpringBoard;
-(id)driveBackupInfoPath;
-(id)driveSnapshotDatabaseIndexPath;
-(BOOL)shouldRestoreAppWithID:(id)arg1 ;
-(id)password;
-(double)protocolVersion;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)log;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(void)setProtocolVersion:(double)arg1 ;
-(void)setSourceIdentifier:(id)arg1 ;
-(id)sourceIdentifier;
-(void)setTargetIdentifier:(id)arg1 ;
-(id)targetIdentifier;
@end

