/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLPreviewUIItem.h>

@protocol QLPreviewItem;
@class QLPreviewThumbnailGenerator, NSString, NSURL, UIImage;

@interface QLPreviewUIItem : NSObject <QLPreviewUIItem> {

	id<QLPreviewItem> _previewItem;
	QLPreviewThumbnailGenerator* _thumbnailGenerator;
	int _index;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
@property (readonly) UIImage * icon; 
@property (readonly) int level; 
@property (readonly) int previewItemIndex; 
@property (readonly) char isFolder; 
+(id)genericIconForPreviewItem:(id)arg1 ;
+(id)uiItemForPreviewItem:(id)arg1 index:(int)arg2 ;
-(UIImage *)icon;
-(void)updateIconWithSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelIconUpdate;
-(int)previewItemIndex;
-(void)dealloc;
-(int)level;
-(NSURL *)previewItemURL;
-(NSString *)previewItemTitle;
-(char)isFolder;
@end

