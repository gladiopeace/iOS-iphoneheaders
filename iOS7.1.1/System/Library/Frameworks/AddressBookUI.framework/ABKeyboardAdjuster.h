/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject {

	NSMutableSet* _adjustmentRecords;
	bool _active;

}

@property (assign,nonatomic) bool active;              //@synthesize active=_active - In the implementation block
+(id)sharedAdjuster;
-(id)recordForScrollView:(id)arg1 ;
-(bool)containsScrollView:(id)arg1 ;
-(bool)shouldForceAutomaticKeyboardForView:(id)arg1 ;
-(void)textFieldTextDidBeginEditingNotification:(id)arg1 ;
-(void)textFieldTextDidEndEditingNotification:(id)arg1 ;
-(void)textViewTextDidBeginEditingNotification:(id)arg1 ;
-(void)textViewTextDidEndEditingNotification:(id)arg1 ;
-(void)dateFieldDateDidBeginEditingNotification:(id)arg1 ;
-(void)dateFieldDateDidEndEditingNotification:(id)arg1 ;
-(void)cancelDelayedAdjustmentsForView:(id)arg1 ;
-(void)manuallyAdjustEdgeInsets:(UIEdgeInsets)arg1 force:(bool)arg2 ;
-(void)addScrollView:(id)arg1 ;
-(void)removeScrollView:(id)arg1 ;
-(void)resetAdjustment;
-(void)dealloc;
-(id)init;
-(bool)active;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setActive:(bool)arg1 ;
-(void)_adjustTableForKeyboardInfo:(id)arg1 ;
@end

