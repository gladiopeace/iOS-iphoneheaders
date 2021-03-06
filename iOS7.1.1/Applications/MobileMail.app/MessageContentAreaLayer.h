/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/DelayedScroller.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol MFAttachmentHandlingDelegate, MFMessageContentDisplayDelegate;
@class MFMessageViewingContext, MessageContentLayer, MessageContentProgressLayer, UIView, NSTimer, MFActivityMonitor;

@interface MessageContentAreaLayer : DelayedScroller <UIScrollViewDelegate, UIActionSheetDelegate> {

	MFMessageViewingContext* _context;
	MessageContentLayer* _contentLayer;
	unsigned _suspendDisplayChanges : 1;
	MessageContentProgressLayer* _progressLayer;
	UIView* _partialLoadTransitionBackgroundView;
	NSTimer* _loadUpdateTimer;
	MFActivityMonitor* _loadTask;
	<MFAttachmentHandlingDelegate>* _attachmentHandlingDelegate;
	CGPoint _preservedOffset;
	CGSize _minimumContentSize;
	float _zoomScaleBeforeLoadingFullMessage;
	int _displayStyle;
	BOOL _shouldResetContentOffset;
	BOOL _sourceIsManaged;
	<MFMessageContentDisplayDelegate>* _displayDelegate;
	UIEdgeInsets _contentInsetAdjustment;

}

@property (assign,nonatomic) <MFAttachmentHandlingDelegate> * attachmentHandlingDelegate;              //@synthesize attachmentHandlingDelegate=_attachmentHandlingDelegate - In the implementation block
@property (assign,nonatomic) <MFMessageContentDisplayDelegate> * displayDelegate;                      //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                     //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsetAdjustment;                                      //@synthesize contentInsetAdjustment=_contentInsetAdjustment - In the implementation block
-(void)resetContentInset;
-(void)_loadCompleted:(id)arg1 ;
-(void)displayMessage:(id)arg1 withStyle:(int)arg2 ;
-(void)_setShouldResetContentOffset;
-(void)updateForRedisplay;
-(void)updateContentOffsetIfNecessary;
-(void)showDelayedProgressUI;
-(void)_addProgressUI;
-(void)viewingContextFinishedLoading:(id)arg1 ;
-(void)messageContentLayerDidChangeSize:(id)arg1 ;
-(BOOL)_isPreservingOffset;
-(void)_tryToRestorePreservedOffset;
-(void)_repositionLoadingLayer;
-(id)attachmentHandlingDelegate;
-(id)displayDelegate;
-(CGPoint)_originForProgress;
-(CGPoint)_maximumOffsetWithinContentSize;
-(void)viewingContextWillBeginLoading:(id)arg1 ;
-(void)messageContentLayerDidLoad:(id)arg1 ;
-(void)messageContentLayerMainLoadCompleted:(id)arg1 ;
-(void)messageContentLayerDidDraw:(id)arg1 ;
-(void)messageContentLayerDidFirstVisuallyNonEmptyDraw:(id)arg1 ;
-(void)messageContentLayerDidUpdateSize:(id)arg1 ;
-(void)messageContentLayerWillLoadMoreOfCurrentMessage:(id)arg1 ;
-(id)attachmentHandlingDelegateForMessageContentLayer:(id)arg1 ;
-(id)displayDelegateForMessageContentLayer:(id)arg1 ;
-(void)suspendDisplayChanges:(BOOL)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 force:(BOOL)arg2 ;
-(void)moveProgressLayer:(float)arg1 ;
-(void)updateTextSize;
-(void)setAttachmentHandlingDelegate:(id)arg1 ;
-(UIEdgeInsets)contentInsetAdjustment;
-(void)setContentInsetAdjustment:(UIEdgeInsets)arg1 ;
-(void)setDisplayDelegate:(id)arg1 ;
-(BOOL)usePadDisplayStyle;
-(void)didRotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)contentView;
-(id)context;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(CGSize)arg3 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(BOOL)isCancelled;
-(id)selectedText;
-(BOOL)sourceIsManaged;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)clearMessage;
@end

