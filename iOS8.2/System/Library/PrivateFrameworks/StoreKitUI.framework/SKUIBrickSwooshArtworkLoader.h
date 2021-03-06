/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader {

	int _artworkSize;

}

@property (nonatomic,readonly) SKUIBrickSwooshViewController * swooshViewController; 
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(char)loadImageForBrick:(id)arg1 reason:(int)arg2 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(id)cachedImageForBrick:(id)arg1 ;
-(void)loadImagesForNextPageWithReason:(int)arg1 ;
@end

