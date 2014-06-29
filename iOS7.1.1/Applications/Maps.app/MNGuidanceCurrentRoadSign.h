/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIActivityIndicatorView, UIImage, NSString;

@interface MNGuidanceCurrentRoadSign : UIView {

	BOOL _shouldShowSpinner;
	UIImageView* _backgroundView;
	UILabel* _label;
	UIActivityIndicatorView* _activityView;
	UIImageView* _dimmingView;
	UIImage* _backgroundImage;
	UIImage* _noLocationBackgroundImage;
	int _idiom;
	BOOL _dimmed;

}

@property (assign,nonatomic) BOOL shouldShowSpinner;                   //@synthesize shouldShowSpinner=_shouldShowSpinner - In the implementation block
@property (nonatomic,@dynamic,copy) NSString * text; 
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;              //@synthesize dimmed=_dimmed - In the implementation block
+(id)signImageForIdiom:(int)arg1 ;
+(id)signImageNoLocationForIdiom:(int)arg1 ;
+(id)signImageDimmingForIdiom:(int)arg1 ;
-(id)_activityView;
-(BOOL)shouldShowSpinner;
-(void)setShouldShowSpinner:(BOOL)arg1 ;
-(id)_noLocationBackgroundImage;
-(id)initWithFrame:(CGRect)arg1 idiom:(int)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void).cxx_destruct;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)isDimmed;
@end

