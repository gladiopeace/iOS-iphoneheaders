/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraItem.h>

@class NSMutableDictionary;

@interface ICCameraFile : ICCameraItem {

	void* _fileProperties;

}

@property (getter=isRaw) bool raw; 
@property (assign) long long fileSize; 
@property (assign) unsigned long long orientation; 
@property (assign) bool fetchingThumbnail; 
@property (assign) bool fetchingMetadata; 
@property (readonly) bool hasOverriddenOrientation; 
@property (retain) NSMutableDictionary * metadata_hidden; 
-(id)importIdentifier;
-(id)parentFolderName;
-(id)fileExtension;
-(void)setFileSize:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)orientation;
-(bool)hasMetadata;
-(void)setOrientation:(unsigned long long)arg1 ;
-(CGImageRef)thumbnail;
-(long long)fileSize;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)setFetchingThumbnail:(bool)arg1 ;
-(void)setFetchingMetadata:(bool)arg1 ;
-(void)setMetadata_hidden:(id)arg1 ;
-(bool)fetchingThumbnail;
-(bool)fetchingMetadata;
-(void)setHasThumbnail:(bool)arg1 ;
-(void)setHasMetadata:(bool)arg1 ;
-(void)setRaw:(bool)arg1 ;
-(id)metadata_hidden;
-(bool)hasOverriddenOrientation;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)overrideOrientation:(unsigned long long)arg1 ;
-(void)requestMetadata;
-(void)requestThumbnail;
-(void)flushMetadataCache;
-(void)flushThumbnailCache;
-(bool)isRaw;
-(id)metadata;
-(bool)hasThumbnail;
-(void)finalize;
@end

