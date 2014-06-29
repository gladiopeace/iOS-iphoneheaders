/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, NSString;

@interface PLEditOverlayTextView : UIView {

	UIView* __backgroundView;
	UILabel* __textLabel;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UIView * _backgroundView;              //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _textLabel;                  //@synthesize _textLabel=__textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_backgroundView;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)_textLabel;
-(void)_commonPLEditOverlayTextViewInitialization;
@end

