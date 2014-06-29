/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <AddressBookUI/ABGroupWrapperDelegate.h>

@class ABGroupWrapper, ABStyleProvider;

@interface ABGroupTableCell : UITableViewCell <ABGroupWrapperDelegate> {

	ABGroupWrapper* _groupWrapper;
	ABStyleProvider* _styleProvider;

}

@property (nonatomic,retain) ABGroupWrapper * groupWrapper;                //@synthesize groupWrapper=_groupWrapper - In the implementation block
@property (nonatomic,retain) ABStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)setGroupWrapper:(id)arg1 ;
-(id)groupWrapper;
-(void)updateFromGroupWrapper;
-(void)groupWrapper:(id)arg1 didBecomeSelected:(bool)arg2 ;
-(void)dealloc;
-(void)tintColorDidChange;
@end

