/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@protocol NotesBackgroundViewDelegate;
@class NotesTextureBackgroundView, UIView;

@interface NotesBackgroundView : UIView {

	<NotesBackgroundViewDelegate>* _delegate;
	NotesTextureBackgroundView* _textureView;
	int _style;
	NotesTextureBackgroundView* _topTextureView;
	NotesTextureBackgroundView* _bottomTextureView;
	CGPoint _lastRecordedContentOffset;
	UIView* _contentView;
	unsigned _inLandscape : 1;

}

@property (assign,nonatomic) <NotesBackgroundViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)defaultBottomMargin;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 delegate:(id)arg3 ;
-(void)addContentView:(id)arg1 ;
-(void)scrollView:(id)arg1 setContentOffset:(CGPoint)arg2 ;
-(void)setTopFadingViewVisible:(BOOL)arg1 ;
-(void)snapshotContentIntoSnapshotView:(id)arg1 ;
-(void)setContentLayerVisible:(BOOL)arg1 ;
-(id)scrollViewDescendantOfView:(id)arg1 ;
-(id)copyGradientBottomWithImage:(id)arg1 forBounds:(CGRect)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void).cxx_destruct;
-(float)bottomMargin;
@end

