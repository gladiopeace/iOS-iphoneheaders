/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonTableViewDataSourceDelegate <NSObject>
@property (assign,nonatomic) <ABPersonEditDelegate> * editDelegate; 
@required
-(void)setEditDelegate:(id)arg1;
-(void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;
-(bool)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;
-(void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;
-(bool)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
-(void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
-(void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
-(void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
-(void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5;
-(bool)personTableViewDataSourceIsLocation:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;
-(void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;
-(id)editDelegate;
-(void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(long long)arg2;
-(void)personTableViewDataSourceDidReloadData:(id)arg1;
-(void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(bool)arg2;
-(bool)personTableViewDataSourceShouldShowHeader:(id)arg1;
-(double)personTableViewDataSourceHeaderPadding:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(bool)arg3;
-(void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(bool)arg2;
-(void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
-(bool)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(bool)arg5;
-(void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
-(void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
-(bool)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;
-(bool)personTableViewDataSourceIsInPopover:(id)arg1;
-(void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2;
-(void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;
-(void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;
-(bool)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
-(void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
-(bool)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
-(void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
-(void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(bool)arg2;
-(bool)personTableViewDataSourceShouldShowContactSources:(id)arg1;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
@end

