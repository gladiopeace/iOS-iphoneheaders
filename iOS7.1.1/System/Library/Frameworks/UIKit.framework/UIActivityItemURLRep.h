/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject {

	int _attachmentURLType;
	NSURL* _URL;
	UIImage* _thumbnail;

}

@property (nonatomic,retain) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) int attachmentURLType;              //@synthesize attachmentURLType=_attachmentURLType - In the implementation block
-(void)dealloc;
-(id)scheme;
-(bool)isFileURL;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(void)setThumbnail:(id)arg1 ;
-(id)thumbnail;
-(int)attachmentURLType;
-(void)setAttachmentURLType:(int)arg1 ;
@end

