/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject {

	NSMutableArray* _files;
	NSMutableArray* _folders;

}

@property (retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
-(void)dealloc;
-(NSMutableArray *)folders;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)finalize;
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
@end

