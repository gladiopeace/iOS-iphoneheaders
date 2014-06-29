/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIActivityIndicatorView;

@interface SearchProgressCell : UITableViewCell {

	UILabel* _titleLabel;
	UIActivityIndicatorView* _spinner;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
+(id)_progressFont;
+(float)defaultRowHeight;
+(void)invalidateCachedLayoutInformation;
-(float)_rowHeightForWidth:(float)arg1 ;
-(void)_layoutChanged;
-(void)_getBaseTitleFrame:(CGRect*)arg1 baseSpinnerFrame:(CGRect*)arg2 withBounds:(CGRect)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(int)state;
-(void)setState:(int)arg1 ;
@end

