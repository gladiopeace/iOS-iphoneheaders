/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>

@protocol UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, NSString, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {

	char _reducedWidth;
	char _showHiddenCandidatesOnly;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSString* _inlineText;
	float _maxX;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	int _position;
	UIKeyboardCandidateSortControl* _sortSelectionBar;
	CGRect _inlineRect;
	CGRect _previousCollapsedFrame;

}

@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                               //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,copy) NSString * inlineText;                                                                       //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) CGRect inlineRect;                                                                         //@synthesize inlineRect=_inlineRect - In the implementation block
@property (assign,nonatomic) float maxX;                                                                                //@synthesize maxX=_maxX - In the implementation block
@property (getter=isReducedWidth,nonatomic,readonly) char reducedWidth;                                                 //@synthesize reducedWidth=_reducedWidth - In the implementation block
@property (nonatomic,readonly) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;                                 //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (assign,nonatomic) int position;                                                                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGRect previousCollapsedFrame;                                                             //@synthesize previousCollapsedFrame=_previousCollapsedFrame - In the implementation block
@property (nonatomic,readonly) UIKeyboardCandidateSortControl * sortSelectionBar;                                       //@synthesize sortSelectionBar=_sortSelectionBar - In the implementation block
@property (assign,nonatomic) char showHiddenCandidatesOnly;                                                             //@synthesize showHiddenCandidatesOnly=_showHiddenCandidatesOnly - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)layout;
-(id)candidates;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(char)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(char)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(char)isExtendedList;
-(char)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(char)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(unsigned)selectedSortIndex;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(float)arg5 layout:(char)arg6 ;
-(void)setInlineText:(NSString *)arg1 ;
-(char)handleNumberKey:(unsigned)arg1 ;
-(char)handleTabKeyWithShift:(char)arg1 ;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(NSString *)inlineText;
-(id)_inheritedRenderConfig;
-(char)padInlineFloatingViewIsExpanded:(id)arg1 ;
-(void)padInlineFloatingViewExpand:(id)arg1 ;
-(unsigned)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(unsigned)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(char)showHiddenCandidatesOnly;
-(void)setShowHiddenCandidatesOnly:(char)arg1 ;
-(id)activeCandidateList;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(char)arg2 ;
-(UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
-(char)isReducedWidth;
-(CGRect)inlineRect;
-(void)updateLayerBorderWidth;
-(char)isAcceptableFrame:(CGRect)arg1 afterScrollBy:(float)arg2 ;
-(CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(CGRect)arg2 ;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textHeight:(float)arg2 ;
-(float)maxX;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(float)arg5 layout:(char)arg6 showHiddenCandidatesOnly:(char)arg7 ;
-(void)setInlineRect:(CGRect)arg1 ;
-(void)setMaxX:(float)arg1 ;
-(void)adjustFrameForInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(float)arg3 ;
-(UIKeyboardCandidateSortControl *)sortSelectionBar;
-(void)expand;
-(void)sortSelectionBarAction;
-(CGRect)previousCollapsedFrame;
-(void)setPreviousCollapsedFrame:(CGRect)arg1 ;
@end

