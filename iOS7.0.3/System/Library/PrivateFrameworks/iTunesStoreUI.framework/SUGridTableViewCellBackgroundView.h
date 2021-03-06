/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImage, UIBezierPath;

@interface SUGridTableViewCellBackgroundView : UIView {

	UIColor* _backgroundColor;
	unsigned _borderedEdges;
	UIImage* _borderImage;
	UIBezierPath* _bottomCornersPath;
	UIBezierPath* _topCornersPath;

}

@property (assign,nonatomic) unsigned borderedEdges;              //@synthesize borderedEdges=_borderedEdges - In the implementation block
@property (nonatomic,retain) UIImage * borderImage;               //@synthesize borderImage=_borderImage - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setBorderImage:(id)arg1 ;
-(id)borderImage;
-(void)_resetCachedPaths;
-(id)_topCornersPath;
-(id)_bottomCornersPath;
-(void)drawInteriorBordersWithRect:(CGRect)arg1 ;
-(void)_drawBorderToRect:(CGRect)arg1 fromRect:(CGRect)arg2 ;
-(void)setBorderedEdges:(unsigned)arg1 ;
-(unsigned)borderedEdges;
@end

