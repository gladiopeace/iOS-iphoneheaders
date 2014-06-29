/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, UIImage;

@interface _UIWebMediaUploadItem : NSObject {

	bool _video;
	NSString* _filePath;
	UIImage* _originalImage;

}

@property (nonatomic,retain) NSString * filePath;                    //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                //@synthesize originalImage=_originalImage - In the implementation block
@property (assign,getter=isVideo,nonatomic) bool video;              //@synthesize video=_video - In the implementation block
+(id)mediaUploadItemWithFilePath:(id)arg1 image:(id)arg2 isVideo:(bool)arg3 ;
-(void)dealloc;
-(void)setFilePath:(id)arg1 ;
-(void)setOriginalImage:(id)arg1 ;
-(void)setVideo:(bool)arg1 ;
-(id)initWithFilePath:(id)arg1 image:(id)arg2 isVideo:(bool)arg3 ;
-(CGRect)_squareCropRectForSize:(CGSize)arg1 ;
-(id)originalImage;
-(id)_squareImage:(id)arg1 ;
-(id)filePath;
-(id)_imageForVideoFile:(id)arg1 ;
-(id)displayImage;
-(bool)isVideo;
@end

