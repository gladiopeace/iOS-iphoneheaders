/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKCalendarItemEditItemDelegate <NSObject>
@optional
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
-(void)editItemDidStartEditing:(id)arg1;
-(void)editItem:(id)arg1 didCommitFromDetailViewController:(bool)arg2;
-(void)editItemDidEndEditing:(id)arg1;
-(void)editItemTextChanged:(id)arg1;
-(void)editItem:(id)arg1 wantsKeyboardPinned:(bool)arg2;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(bool)arg2;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
-(void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 actions:(/*^block*/ id)arg4;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2;
-(void)editItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
-(void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(bool)arg4 forSubitem:(unsigned long long)arg5 inSubsection:(unsigned long long)arg6;
-(void)editItem:(id)arg1 didEndDatePickingAnimated:(bool)arg2;
-(void)editItemRequiresHeightChange:(id)arg1;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg1;
-(void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;
-(id)viewControllerForEditItem:(id)arg1;

@required
-(id)defaultAlertTitleForEditItem:(id)arg1;
@end

