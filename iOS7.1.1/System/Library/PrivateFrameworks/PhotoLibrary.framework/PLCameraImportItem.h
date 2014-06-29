/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSString, NSMutableDictionary, UIImage, NSData, NSError, PLManagedAsset;

@interface PLCameraImportItem : NSObject {

	NSString* _identifier;
	NSString* _parentFolder;
	NSString* _basePath;
	NSMutableDictionary* _representationsMapping;
	UIImage* _thumbnail;
	NSData* _thumbnailData;
	int _thumbnailState;
	bool _metadataRequested;
	bool _thumbnailRequested;
	bool _shouldImport;
	NSError* _importError;
	NSString* eventName;
	PLManagedAsset* importedAsset;

}

@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * parentFolder;                   //@synthesize parentFolder=_parentFolder - In the implementation block
@property (nonatomic,retain) NSString * basePath;                         //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,retain) NSString * eventName; 
@property (nonatomic,retain) PLManagedAsset * importedAsset; 
@property (nonatomic,readonly) UIImage * thumbnail;                       //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) NSData * thumbnailData;                      //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (assign,nonatomic) bool shouldImport;                           //@synthesize shouldImport=_shouldImport - In the implementation block
@property (nonatomic,retain) NSError * importError;                       //@synthesize importError=_importError - In the implementation block
-(void)dealloc;
-(id)description;
-(bool)isLocked;
-(id)identifier;
-(id)thumbnail;
-(unsigned long long)fileSize;
-(id)initWithIdentifier:(id)arg1 parentFolder:(id)arg2 ;
-(void)addRepresentationForCameraFile:(id)arg1 ;
-(void)removeRepresentationForCameraFile:(id)arg1 ;
-(id)representations;
-(void)requestMetadata;
-(id)representationForCameraFile:(id)arg1 ;
-(bool)hasAllMetadata;
-(bool)canRequestThumbnail;
-(int)thumbnailState;
-(void)setThumbnailState:(int)arg1 ;
-(void)requestThumbnail;
-(void)setThumbnailWithImageRef:(CGImageRef)arg1 ;
-(bool)shouldImport;
-(bool)isOnDisk;
-(void)setShouldImport:(bool)arg1 ;
-(void)setBasePath:(id)arg1 ;
-(void)setEventName:(id)arg1 ;
-(void)setImportError:(id)arg1 ;
-(id)parentFolder;
-(bool)isStandalonePhoto;
-(bool)isMovie;
-(id)basePath;
-(id)eventName;
-(void)markRepresentationsInDatabase;
-(id)importError;
-(bool)isInDatabaseForce:(bool)arg1 ;
-(void)_addRepresentation:(id)arg1 ;
-(void)_removeRepresentation:(id)arg1 ;
-(bool)canRequestMetadata;
-(bool)_isTypeWithSelector:(SEL)arg1 ;
-(id)fileExtensions;
-(bool)isRaw;
-(id)_fileExtensionForTypeWithSelector:(SEL)arg1 ;
-(id)metadataForRepresentationWithFileExtension:(id)arg1 ;
-(void)clearMetadata;
-(void)cancelThumbnailRequest;
-(void)clearThumbnail;
-(bool)isStandaloneMovie;
-(id)jpgExtension;
-(id)rawExtension;
-(id)movieExtension;
-(id)audioExtension;
-(id)otherExtensions;
-(id)thumbnailData;
-(void)setThumbnailData:(id)arg1 ;
-(id)importedAsset;
-(void)setImportedAsset:(id)arg1 ;
-(id)creationDate;
-(bool)isJPEG;
-(bool)isAudio;
@end

