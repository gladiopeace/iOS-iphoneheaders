/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {

	MSPSPCContext* _context;
	NSArray* _assetCollectionsInFlight;
	MSPSPCUCContext* _UCContext;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)sendMetadataForAssetCollections:(id)arg1 ;
-(void)sendUploadCompleteForAssetCollections:(id)arg1 ;
-(id)_missingAssetFieldErrorWithFieldName:(id)arg1 ;
-(id)_metadataDictForAsset:(id)arg1 outError:(id*)arg2 ;
-(id)_metadataDictForAssetCollection:(id)arg1 outError:(id*)arg2 ;
-(void)_resetConnectionVariables;
-(bool)_insertInfoAboutAsset:(id)arg1 intoDictionary:(id)arg2 outError:(id*)arg3 ;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)_coreProtocolDidFinishUCResults:(id)arg1 error:(id)arg2 ;
-(void)abort;
@end

