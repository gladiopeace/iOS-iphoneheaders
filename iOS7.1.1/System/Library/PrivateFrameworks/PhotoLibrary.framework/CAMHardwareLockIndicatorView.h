/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/CAMBadgeTextView.h>

@class NSDictionary;

@interface CAMHardwareLockIndicatorView : CAMBadgeTextView {

	bool _focusLocked;
	bool _exposureLocked;
	NSDictionary* __indicatorTextAttributes;

}

@property (assign,getter=isFocusLocked,nonatomic) bool focusLocked;                    //@synthesize focusLocked=_focusLocked - In the implementation block
@property (assign,getter=isExposureLocked,nonatomic) bool exposureLocked;              //@synthesize exposureLocked=_exposureLocked - In the implementation block
@property (nonatomic,readonly) NSDictionary * _indicatorTextAttributes;                //@synthesize _indicatorTextAttributes=__indicatorTextAttributes - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)_text;
-(id)_textAttributes;
-(double)_textHorizontalKerningOffset;
-(double)_textHorizontalInset;
-(double)_textVerticalInset;
-(void)setFocusLocked:(bool)arg1 ;
-(void)setExposureLocked:(bool)arg1 ;
-(void)_updateFromHardwareChange;
-(void)_commonCAMHardwareLockIndicatorViewInitialization;
-(id)_textForCurrentHardwareState;
-(bool)isFocusLocked;
-(bool)isExposureLocked;
-(id)_indicatorTextAttributes;
@end

