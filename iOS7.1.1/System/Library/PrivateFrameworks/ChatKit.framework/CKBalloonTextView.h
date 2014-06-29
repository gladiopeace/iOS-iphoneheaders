/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITextView.h>
#import <UIFoundation/NSLayoutManagerDelegate.h>

@class NSAttributedString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {

	bool _singleLine;
	NSAttributedString* _attributedText;
	double _capOffsetFromBoundsTop;
	double _lastLineBaselineOffsetFromBoundsTop;

}

@property (assign,nonatomic) double capOffsetFromBoundsTop;                           //@synthesize capOffsetFromBoundsTop=_capOffsetFromBoundsTop - In the implementation block
@property (assign,nonatomic) double lastLineBaselineOffsetFromBoundsTop;              //@synthesize lastLineBaselineOffsetFromBoundsTop=_lastLineBaselineOffsetFromBoundsTop - In the implementation block
@property (assign,getter=isSingleLine,nonatomic) bool singleLine;                     //@synthesize singleLine=_singleLine - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
-(void)didMoveToWindow;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(bool)isSingleLine;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(bool*)arg3 ;
-(double)capOffsetFromBoundsTop;
-(void)setCapOffsetFromBoundsTop:(double)arg1 ;
-(double)lastLineBaselineOffsetFromBoundsTop;
-(void)setLastLineBaselineOffsetFromBoundsTop:(double)arg1 ;
-(void)setSingleLine:(bool)arg1 ;
@end

