/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITextInput;
@class UIResponder, UITextSelectionView, NSMutableArray, NSMutableSet, UILongPressGestureRecognizer, UITapGestureRecognizer, UIGestureRecognizer, UITextChecker, NSHashTable, UIView, UIFieldEditor;

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {

	UIResponder<UITextInput>* _view;
	UITextSelectionView* _selectionView;
	NSMutableArray* _recognizers;
	NSMutableSet* _linkGestures;
	UILongPressGestureRecognizer* _loupeGesture;
	UITapGestureRecognizer* _singleTapGesture;
	UIGestureRecognizer* _doubleTapGesture;
	int _autoscrollRamp;
	double _autoscrollFactor;
	CGPoint _autoscrollBasePoint;
	CGPoint _autoscrollUntransformedExtentPoint;
	CGPoint _loupeGestureEndPoint;
	UITextChecker* _textChecker;
	bool _inGesture;
	bool _autoscrolled;
	bool _isTryingToHighlightLink;
	bool _externalTextInput;
	NSHashTable* _gestureRecognizerViews;

}

@property (nonatomic,readonly) UIResponder<UITextInput> * view; 
@property (nonatomic,readonly) UITextSelectionView * selectionView; 
@property (nonatomic,readonly) UIResponder<UITextInput> * textDocument; 
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapGesture; 
@property (nonatomic,retain) UILongPressGestureRecognizer * loupeGesture; 
@property (nonatomic,retain) UIGestureRecognizer * doubleTapGesture; 
@property (assign,nonatomic) bool inGesture; 
@property (nonatomic,readonly) UIView * scrollView; 
@property (assign,nonatomic) bool autoscrolled; 
@property (assign,nonatomic) CGPoint autoscrollUntransformedExtentPoint; 
@property (nonatomic,readonly) bool externalTextInput; 
@property (assign,nonatomic) CGPoint loupeGestureEndPoint; 
@property (nonatomic,@dynamic,readonly) UIFieldEditor * fieldEditor; 
@property (nonatomic,@dynamic,retain) UITapGestureRecognizer * singleTapGesture; 
-(void)dealloc;
-(id)view;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)fieldEditor;
-(id)selectionView;
-(void)autoscrollWillNotStart;
-(void)cancelAutoscroll;
-(void)setAutoscrolled:(bool)arg1 ;
-(CGPoint)autoscrollUntransformedExtentPoint;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)selectionChanged;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)updateAutoscroll:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)detach;
-(void)attach;
-(void)selectAll:(id)arg1 ;
-(void)setGestureRecognizers;
-(void)resignedFirstResponder;
-(void)selectWord;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(bool)isInteractingWithLink;
-(void)cancelInteractionWithLink;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)disableClearsOnInsertion;
-(void)clearSelection;
-(void)confirmMarkedText:(id)arg1 ;
-(void)layoutChangedByScrolling:(bool)arg1 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(void)setInGesture:(bool)arg1 ;
-(bool)swallowsDoubleTapWithScale:(double)arg1 atPoint:(CGPoint)arg2 ;
-(id)textDocument;
-(id)loupeGesture;
-(id)singleTapGesture;
-(id)scrollView;
-(id)_selectionView;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)clearGestureRecognizers:(bool)arg1 ;
-(void)detach:(bool)arg1 ;
-(bool)containerIsBrowserView;
-(bool)containerIsAtom;
-(bool)containerIsPlainStyleAtom;
-(bool)inGesture;
-(void)setLoupeGesture:(id)arg1 ;
-(void)setSingleTapGesture:(id)arg1 ;
-(void)setDoubleTapGesture:(id)arg1 ;
-(id)oneFingerDoubleTapRecognizer:(SEL)arg1 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(id)addOneFingerDoubleTapRecognizer:(SEL)arg1 toView:(id)arg2 ;
-(id)oneFingerTapRecognizer:(SEL)arg1 ;
-(void)oneFingerTap:(id)arg1 ;
-(id)addOneFingerTapRecognizer:(SEL)arg1 toView:(id)arg2 ;
-(void)oneFingerTripleTap:(id)arg1 ;
-(id)oneFingerTripleTapRecognizer;
-(id)selectionTapRecognizer:(SEL)arg1 ;
-(id)addSelectionTapRecognizer:(SEL)arg1 toView:(id)arg2 ;
-(void)twoFingerSingleTap:(id)arg1 ;
-(id)twoFingerSingleTapRecognizer;
-(void)tapAndAHalf:(id)arg1 ;
-(id)tapAndAHalfRecognizer;
-(void)loupeGesture:(id)arg1 ;
-(id)loupeGestureRecognizer:(bool)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(id)twoFingerRangedSelectRecognizer;
-(void)smallDelayRecognizer:(id)arg1 ;
-(void)longDelayRecognizer:(id)arg1 ;
-(id)_asText;
-(id)phraseBoundaryGestureRecognizer;
-(void)canBeginDragCursor:(id)arg1 ;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(id)linkInteractionView;
-(bool)viewCouldBecomeEditable:(id)arg1 ;
-(bool)useGesturesForEditableContent;
-(void)oneFingerTapSelectsAll:(id)arg1 ;
-(id)addPhraseBoundaryGestureRecognizerToView:(id)arg1 ;
-(id)addOneFingerTripleTapRecognizerToView:(id)arg1 ;
-(id)addOneFingerDoubleTapRecognizerToView:(id)arg1 ;
-(id)addTwoFingerSingleTapRecognizerToView:(id)arg1 ;
-(id)addTapAndAHalfRecognizerToView:(id)arg1 ;
-(id)addTwoFingerRangedSelectRecognizerToView:(id)arg1 ;
-(id)addOneFingerTapRecognizerToView:(id)arg1 ;
-(id)addLoupeGestureRecognizer:(bool)arg1 toView:(id)arg2 ;
-(id)addDragRecognizer;
-(id)addHighlightLinkRecognizerToView:(id)arg1 ;
-(id)addTapAndHoldOnLinkRecognizerToView:(id)arg1 ;
-(void)oneFingerTapInUneditable:(id)arg1 ;
-(void)doubleTapInUneditable:(id)arg1 ;
-(void)scrollSelectionToVisible;
-(void)setFirstResponderIfNecessary;
-(void)turnOffDrawsAsAtomIfPlainStyleAtom;
-(bool)autoscrolled;
-(void)notifyKeyboardSelectionChanged;
-(void)updateWithMagnifierTerminalPoint:(bool)arg1 ;
-(bool)shouldHandleFormGestureAtLocation:(CGPoint)arg1 ;
-(bool)shouldHandleOneFingerTapInUneditable:(id)arg1 ;
-(bool)shouldIgnoreLinkGestures;
-(bool)noCalloutBarAndTouchInSelection:(CGPoint)arg1 ;
-(bool)containerChangesSelectionOnOneFingerTap;
-(id)rangeForTextReplacement:(id)arg1 ;
-(double)distanceBetweenPoint:(CGPoint)arg1 andRange:(id)arg2 ;
-(void)selectWordWithoutShowingCommands;
-(bool)containerIsTextField;
-(void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2 ;
-(void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(bool)tapOnLinkWithGesture:(id)arg1 ;
-(bool)containerAllowsSelectionTintOnly;
-(void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(id)_scrollable;
-(void)setAutoscrollUntransformedExtentPoint:(CGPoint)arg1 ;
-(bool)isChineseInputEnabled;
-(void)activateSelection;
-(void)deactivateSelection;
-(id)doubleTapGesture;
-(void)setLoupeGestureEndPoint:(CGPoint)arg1 ;
-(CGPoint)loupeGestureEndPoint;
-(bool)externalTextInput;
-(bool)containerAllowsSelection;
-(id)addSelectionTapRecognizerToView:(id)arg1 ;
-(void)removeGestureRecognizersFromView:(id)arg1 ;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(id)initWithResponder:(id)arg1 ;
-(void)clearGestureRecognizers;
-(id)textSelectionView;
@end

