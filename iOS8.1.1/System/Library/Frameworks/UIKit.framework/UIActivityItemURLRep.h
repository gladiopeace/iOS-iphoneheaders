/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject {

	NSURL* _URL;
	UIImage* _thumbnail;
	long long _attachmentURLType;

}

@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                      //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) long long attachmentURLType;              //@synthesize attachmentURLType=_attachmentURLType - In the implementation block
-(void)dealloc;
-(id)scheme;
-(BOOL)isFileURL;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(UIImage *)thumbnail;
-(long long)attachmentURLType;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setAttachmentURLType:(long long)arg1 ;
@end

