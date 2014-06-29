/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/NSFetchedResultsControllerDelegate.h>

@class NSManagedObjectModel, NSManagedObjectContext, NSFetchRequest, NSFetchedResultsController, NSArray;

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate> {

	NSManagedObjectModel* _model;
	NSManagedObjectContext* _context;
	NSFetchRequest* _fetchRequest;
	NSFetchedResultsController* _fetchController;
	int _notifyToken;
	bool _assetManifestWritingDisabled;
	bool _valid;
	bool _isSaveInProgress;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * recordings; 
@property (assign,nonatomic) bool assetManifestWritingDisabled;              //@synthesize assetManifestWritingDisabled=_assetManifestWritingDisabled - In the implementation block
@property (assign) bool valid;                                               //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) bool isSaveInProgress;                          //@synthesize isSaveInProgress=_isSaveInProgress - In the implementation block
+(id)sharedModel;
+(void)initialize;
+(id)sharedModelForQueue:(id)arg1 ;
+(id)savedRecordingsDirectory;
+(id)_assetManifestPlistPath;
+(id)standardURLForRecordingWithCreationDate:(id)arg1 ;
-(void)save;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)setValid:(bool)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)_init;
-(bool)valid;
-(void).cxx_destruct;
-(id)recordingWithURIRepresentation:(id)arg1 ;
-(void)saveIfNecessary;
-(void)_scheduleAutomaticRecordingDeletions;
-(void)_generateAssetManifestPlist;
-(void)_handleExternalModelDidSaveNotification:(id)arg1 ;
-(void)_handleInternalModelDidSaveNotification:(id)arg1 ;
-(id)recordingWithID:(id)arg1 ;
-(id)_allCustomLabels;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4 ;
-(id)_copyFileIntoRecordingsDirectory:(id)arg1 ;
-(id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1 ;
-(bool)saveManagedObjectContext:(id*)arg1 ;
-(id)_labelPresetsForQuery:(id)arg1 ;
-(id)recordings;
-(void)enumerateExistingRecordingsWithBlock:(/*^block*/ id)arg1 ;
-(void)deleteRecording:(id)arg1 ;
-(void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)_postRecordingsModelDidChangeForNotificationName:(id)arg1 ;
-(id)recordingAtIndex:(unsigned long long)arg1 ;
-(id)indexPathForRecording:(id)arg1 ;
-(id)recordingWithITunesPersistentID:(long long)arg1 ;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 ;
-(bool)hasExistingRecordingForAudioFile:(id)arg1 ;
-(id)recordingsForSpotlightSearch:(id)arg1 ;
-(bool)assetManifestWritingDisabled;
-(void)setAssetManifestWritingDisabled:(bool)arg1 ;
-(bool)isSaveInProgress;
-(void)setIsSaveInProgress:(bool)arg1 ;
@end

