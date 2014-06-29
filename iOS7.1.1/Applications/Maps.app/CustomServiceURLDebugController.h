/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface CustomServiceURLDebugController : UITableViewController <UITextFieldDelegate> {

	UITextField* _textField;
	NSString* _defaultsKey;
	NSString* _defaultURLString;
	/*^block*/ id _callback;

}

@property (nonatomic,copy) NSString * defaultsKey;                   //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,copy) NSString * defaultURLString;              //@synthesize defaultURLString=_defaultURLString - In the implementation block
@property (nonatomic,copy) id callback;                              //@synthesize callback=_callback - In the implementation block
-(id)defaultsKey;
-(void)setDefaultsKey:(id)arg1 ;
-(void)setDefaultURLString:(id)arg1 ;
-(id)defaultURLString;
-(/*^block*/ id)callback;
-(void)setCallback:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)title;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

