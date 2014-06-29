/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SUDownloadGridImageModifier : SUImageModifier {

	CGSize _maxImageSize;

}

@property (assign,nonatomic) CGSize maxImageSize;              //@synthesize maxImageSize=_maxImageSize - In the implementation block
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(bool)scalesImage;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)setMaxImageSize:(CGSize)arg1 ;
-(CGSize)maxImageSize;
@end

