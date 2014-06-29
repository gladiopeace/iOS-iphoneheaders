/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@interface AudioSettingsTableViewCell : UITableViewCell {

	BOOL _cellEnabled;
	float _textIndentation;
	BOOL _checked;

}

@property (assign,nonatomic) BOOL cellEnabled;                   //@synthesize cellEnabled=_cellEnabled - In the implementation block
@property (assign,nonatomic) float textIndentation;              //@synthesize textIndentation=_textIndentation - In the implementation block
@property (assign,nonatomic) BOOL checked;                       //@synthesize checked=_checked - In the implementation block
-(void)setTextIndentation:(float)arg1 ;
-(float)textIndentation;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(BOOL)cellEnabled;
-(BOOL)checked;
@end

