/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSArray;

@interface ISDialogOperation : ISOperation {

	ISDialog* _dialog;
	bool _performDefaultActions;
	ISDialogButton* _selectedButton;
	NSArray* _textFieldValues;
	id _userNotification;

}

@property (@dynamic) <ISDialogOperationDelegate> * delegate; 
@property (retain) ISDialog * dialog;                                     //@synthesize dialog=_dialog - In the implementation block
@property (assign) bool performDefaultActions;                            //@synthesize performDefaultActions=_performDefaultActions - In the implementation block
@property (retain) ISDialogButton * selectedButton;                       //@synthesize selectedButton=_selectedButton - In the implementation block
@property (readonly) NSArray * textFieldValues; 
@property (retain) id userNotification;                                   //@synthesize userNotification=_userNotification - In the implementation block
+(id)operationWithDialog:(id)arg1 ;
+(id)operationWithError:(id)arg1 ;
-(id)dialog;
-(void)dealloc;
-(id)init;
-(void)_run;
-(void)cancel;
-(void)run;
-(void)setDialog:(id)arg1 ;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(void)setSelectedButton:(id)arg1 ;
-(id)userNotification;
-(void)setUserNotification:(id)arg1 ;
-(bool)performDefaultActions;
-(void)_showUserNotification:(id)arg1 ;
-(void)_waitForUserNotificationResponse:(CFUserNotificationRef)arg1 ;
-(void)_handleResponseForNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
-(id)textFieldValues;
-(void)setPerformDefaultActions:(bool)arg1 ;
-(id)selectedButton;
@end

