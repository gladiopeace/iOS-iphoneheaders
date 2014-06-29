/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString;

@interface SBDeviceLockTitle : UIView {

	int _style;
	long long _interfaceOrientation;

}

@property (assign,nonatomic) long long interfaceOrientation;                     //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) bool highlighted; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
+(id)newWithStyle:(int)arg1 interfaceOrientation:(long long)arg2 ;
-(void)setTitle:(id)arg1 ;
-(long long)interfaceOrientation;
-(id)title;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)_initWithStyle:(int)arg1 interfaceOrientation:(long long)arg2 ;
-(void)blinkSubtitle;
@end

