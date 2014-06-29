/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKImageBrush.h>

@class UIImage;

@interface GKComposedImageBrush : GKImageBrush {

	UIImage* _maskImage;
	UIImage* _backgroundImage;
	UIImage* _overlayImage;
	UIEdgeInsets _maskInsets;

}

@property (nonatomic,retain) UIImage * maskImage;                    //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                 //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets maskInsets;                //@synthesize maskInsets=_maskInsets - In the implementation block
-(CGSize)sizeForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(double)scaleForInput:(id)arg1 ;
-(id)maskImage;
-(id)overlayImage;
-(void)setOverlayImage:(id)arg1 ;
-(UIEdgeInsets)maskInsets;
-(void)setMaskInsets:(UIEdgeInsets)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)backgroundImage;
-(void)setBackgroundImage:(id)arg1 ;
-(void)setMaskImage:(id)arg1 ;
@end

