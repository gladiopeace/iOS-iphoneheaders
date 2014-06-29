/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIToolbar.h>

@class UIToolbar;

@interface PLToolbar : UIToolbar {

	unsigned _backgroundHidden : 1;
	unsigned _backgroundAlwaysVisible : 1;
	UIToolbar* _persistentToolbar;

}

@property (assign,getter=isBackgroundHidden,nonatomic) bool backgroundHidden; 
@property (assign,getter=isBackgroundAlwaysVisible,nonatomic) bool backgroundAlwaysVisible; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(bool)isBackgroundHidden;
-(void)setBackgroundHidden:(bool)arg1 ;
-(bool)isBackgroundAlwaysVisible;
-(void)setBackgroundAlwaysVisible:(bool)arg1 ;
@end

