/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuItem.h>

@class NSString;

@interface SCATModernMenuGestureFreehandItem : SCATModernMenuItem {

	BOOL _shouldRotate;
	BOOL _disabled;
	BOOL _focused;
	NSString* _imagePrefixForTouchDependentGlyph;
	unsigned _preferredNumberOfTitleLines;

}

@property (nonatomic,retain) NSString * imagePrefixForTouchDependentGlyph;              //@synthesize imagePrefixForTouchDependentGlyph=_imagePrefixForTouchDependentGlyph - In the implementation block
@property (assign,nonatomic) BOOL shouldRotate;                                         //@synthesize shouldRotate=_shouldRotate - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                           //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isFocused,nonatomic) BOOL focused;                             //@synthesize focused=_focused - In the implementation block
@property (assign,nonatomic) unsigned preferredNumberOfTitleLines;                      //@synthesize preferredNumberOfTitleLines=_preferredNumberOfTitleLines - In the implementation block
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imagePrefixForTouchDependentGlyph:(id)arg4 shouldRotate:(BOOL)arg5 activateBehavior:(unsigned)arg6 ;
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 activateBehavior:(unsigned)arg4 ;
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imagePrefixForTouchDependentGlyph:(id)arg4 activateBehavior:(unsigned)arg5 ;
-(void)setImagePrefixForTouchDependentGlyph:(id)arg1 ;
-(void)setPreferredNumberOfTitleLines:(unsigned)arg1 ;
-(unsigned)preferredNumberOfTitleLines;
-(id)imagePrefixForTouchDependentGlyph;
-(BOOL)shouldRotate;
-(BOOL)handleActivateWithElement:(id)arg1 ;
-(void)setShouldRotate:(BOOL)arg1 ;
-(void)setFocused:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isFocused;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
@end

