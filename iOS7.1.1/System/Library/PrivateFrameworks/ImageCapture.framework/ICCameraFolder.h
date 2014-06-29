/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraItem.h>

@class NSArray;

@interface ICCameraFolder : ICCameraItem {

	void* _folderProperties;
	int _filesLock;
	int _foldersLock;

}

@property (readonly) NSArray * contents; 
-(void)addFile:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)contents;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGImageRef)thumbnail;
-(id)folders;
-(void)deleteItem:(id)arg1 ;
-(void)addFolder:(id)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)lockFiles;
-(void)unlockFiles;
-(void)lockFolders;
-(void)unlockFolders;
-(void)deleteFile:(id)arg1 ;
-(void)deleteFolder:(id)arg1 ;
-(void)requestMetadata;
-(void)requestThumbnail;
-(id)metadata;
-(bool)hasThumbnail;
-(void)finalize;
-(id)files;
@end

