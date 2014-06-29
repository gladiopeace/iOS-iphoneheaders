/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class ClipCornerView, UIImage;

@interface RoundedCornerView : UIView {

	ClipCornerView* _clipCornerViews[4];
	float _cornerRadius;
	float _cornerSize;
	UIImage* _imageBackground;

}
-(CGPoint)_originForCornerIndex:(int)arg1 withBoundsSize:(CGSize)arg2 ;
-(id)initWithCornerRadius:(float)arg1 size:(float)arg2 imageBackground:(id)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(void).cxx_destruct;
-(void)_layoutSubviews;
@end

