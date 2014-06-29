/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <AddressBookUI/ABDateFieldDelegate.h>

@class ABDateField, NSDate;

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate> {

	ABDateField* _dateField;

}

@property (nonatomic,readonly) NSDate * date; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(bool)arg6 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(bool)dateFieldShouldClear:(id)arg1 ;
-(void)dateFieldDateDidChange:(id)arg1 ;
-(bool)dateFieldShouldBeginEditing:(id)arg1 ;
-(void)dateFieldDidBeginEditing:(id)arg1 ;
-(bool)dateFieldShouldEndEditing:(id)arg1 ;
-(void)dateFieldDidEndEditing:(id)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(bool)arg1 ;
-(id)viewForFirstResponder;
-(id)hitTestForTouches:(id)arg1 withEvent:(id)arg2 ;
-(void)setUpdateDelegate:(id)arg1 ;
-(bool)dateFieldShouldReturn:(id)arg1 ;
-(void)dealloc;
-(void)reload;
-(id)date;
@end

