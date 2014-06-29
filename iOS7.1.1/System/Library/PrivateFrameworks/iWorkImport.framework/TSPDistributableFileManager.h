/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, TSUPathSet, NSMutableSet, TSUTemporaryDirectory;

@interface TSPDistributableFileManager : NSObject {

	NSString* _directoryPath;
	bool _shouldCreate;
	TSUPathSet* _claimedPaths;
	NSMutableSet* _newIdentifiers;
	NSMutableSet* _modifiedIdentifiers;
	NSMutableSet* _deletedIdentifiers;
	TSUTemporaryDirectory* _modifiedFilesDirectory;
	bool _isCullingDisabled;

}
-(void)setDataFromInputStream:(id)arg1 length:(long long)arg2 forIdentifier:(id)arg3 ;
-(id)addDataFromInputStream:(id)arg1 length:(long long)arg2 filenameHint:(id)arg3 ;
-(id)initWithPath:(id)arg1 shouldCreate:(bool)arg2 ;
-(bool)commitWithError:(id*)arg1 ;
-(id)_filePathForIdentifier:(id)arg1 ;
-(id)_filePathForModifiedIdentifier:(id)arg1 ;
-(id)_claimedPaths;
-(void)_writeDataFromInputStream:(id)arg1 length:(long long)arg2 toPath:(id)arg3 ;
-(id)_modifiedFilesDirectoryPath;
-(id)addDataRepresentation:(id)arg1 filenameHint:(id)arg2 ;
-(void)setDataRepresentation:(id)arg1 forIdentifier:(id)arg2 ;
-(id)representationForIdentifier:(id)arg1 ;
-(void)disableFileCulling;
-(bool)prepareForSaveToPath:(id)arg1 error:(id*)arg2 ;
-(bool)rehomeOntoPath:(id)arg1 ;
-(void).cxx_destruct;
-(void)removeIdentifier:(id)arg1 ;
@end

