/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewControllerDelegate.h>

@protocol EKEditItemViewControllerProtocol, EKCalendarItemEditItemDelegate, EKStyleProvider;
@class EKEventStore, UIViewController, EKCalendarItem, UIResponder;

@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate> {

	EKEventStore* _store;
	UIViewController<EKEditItemViewControllerProtocol>* _viewController;
	EKCalendarItem* _calendarItem;
	<EKCalendarItemEditItemDelegate>* _delegate;
	<EKStyleProvider>* _styleProvider;
	UIResponder* _selectedResponder;

}

@property (assign,nonatomic,__weak) <EKCalendarItemEditItemDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) <EKStyleProvider> * styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIResponder * selectedResponder;                                 //@synthesize selectedResponder=_selectedResponder - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(id)viewForActionSheet;
-(id)calendarItem;
-(bool)saveAndDismissWithForce:(bool)arg1 ;
-(bool)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(unsigned long long)numberOfSubsections;
-(void)endInlineEditing;
-(bool)shouldAppearWithVisibility:(int)arg1 ;
-(bool)configureForCalendarConstraints:(id)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(id)selectedResponder;
-(bool)shouldPinKeyboard;
-(void)editor:(id)arg1 didStartEditingItem:(id)arg2 ;
-(bool)requiresReconfigurationOnCommit;
-(unsigned long long)numberOfSubitemsInSubsection:(unsigned long long)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 forWidth:(double)arg3 ;
-(bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(double)footerHeightForWidth:(double)arg1 ;
-(void)editorDidScroll:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(void)notifyDidStartEditing;
-(bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(bool)editItemViewControllerShouldShowDetachAlert;
-(bool)editItemViewControllerCommit:(id)arg1 ;
-(void)editItemViewControllerWantsKeyboardPinned:(bool)arg1 ;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(id)titleForHeader;
-(void)notifyDidEndEditing;
-(void)notifySubitemDidCommit:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(void)notifyTextChanged;
-(void)notifyRequiresHeightChange;
-(void)setSelectedResponder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)applicationDidResume;
-(void)reset;
-(void).cxx_destruct;
-(id)footerView;
-(bool)isInline;
@end

