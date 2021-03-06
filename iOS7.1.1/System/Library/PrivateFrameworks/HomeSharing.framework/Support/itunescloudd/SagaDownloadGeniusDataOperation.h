/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@interface SagaDownloadGeniusDataOperation : CloudLibraryOperation {

	BOOL _processResultsOnly;

}

@property (assign,nonatomic) BOOL processResultsOnly;              //@synthesize processResultsOnly=_processResultsOnly - In the implementation block
-(id)_requestWithURL:(id)arg1 ;
-(id)_requestWithURLBagKey:(id)arg1 bodyPayload:(id)arg2 ;
-(BOOL)_importGeniusDataIfPresent;
-(BOOL)_isOfflineGeniusEnabled;
-(id)_determineCUID;
-(id)_newUploadMetadataPayloadForCUID:(id)arg1 returningItemCount:(unsigned*)arg2 ;
-(id)_determineUploadURLForItemCount:(unsigned)arg1 cuid:(id)arg2 returningUpdateID:(id*)arg3 ;
-(id)_determineResultsURLWithUpdateID:(id)arg1 cuid:(id)arg2 returningAdditionalFieldsURL:(id*)arg3 ;
-(void)_downloadSimDataFromResultsURL:(id)arg1 additionalFieldsURL:(id)arg2 ;
-(id)_destinationSimFilePath;
-(id)_destinationAdditionalFieldsFilePath;
-(void)_addDownloadForURL:(id)arg1 destinationURL:(id)arg2 ;
-(id)_itemsToUpload;
-(BOOL)processResultsOnly;
-(void)setProcessResultsOnly:(BOOL)arg1 ;
-(void)main;
@end

