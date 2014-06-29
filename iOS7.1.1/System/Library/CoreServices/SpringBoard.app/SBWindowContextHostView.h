/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBWindowContextManagerObserver.h>

@protocol SBWindowContextHostViewDelegate;
@class UIScreen, CALayer, SBWindowContextManager, SBWindowContextHostViewContentLayerDelegate, NSMutableSet, NSMutableOrderedSet, NSMutableArray, NSSet;

@interface SBWindowContextHostView : UIView <SBWindowContextManagerObserver> {

	UIScreen* _screen;
	CALayer* _contentLayer;
	<SBWindowContextHostViewDelegate>* _delegate;
	SBWindowContextManager* _contextManager;
	SBWindowContextHostViewContentLayerDelegate* _contentLayerDelegate;
	int _jailBehavior;
	NSMutableSet* _hiddenContexts;
	NSMutableOrderedSet* _contexts;
	NSMutableArray* _layerHosts;

}

@property (nonatomic,readonly) UIScreen * screen;                                       //@synthesize screen=_screen - In the implementation block
@property (assign,nonatomic) <SBWindowContextHostViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBWindowContextManager * contextManager; 
@property (nonatomic,copy) NSSet * hiddenContexts; 
-(id)initWithScreen:(id)arg1 jailBehavior:(int)arg2 ;
-(void)_adjustLayerFrameAndTransform:(id)arg1 ;
-(void)_noteHostingStatusChanged;
-(BOOL)isHosting;
-(void)windowContextManager:(id)arg1 didRepositionContext:(id)arg2 from:(unsigned)arg3 to:(unsigned)arg4 forScreen:(id)arg5 ;
-(void)setContextManager:(id)arg1 ;
-(id)hiddenContexts;
-(void)setHiddenContexts:(id)arg1 ;
-(id)contextManager;
-(CGRect)contentFrame;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)window;
-(id)init;
-(id)description;
-(id)delegate;
-(id)screen;
-(BOOL)hasContent;
@end

