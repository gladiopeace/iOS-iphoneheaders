/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIKeyboardPreferencesController : NSObject

@property (assign) long long handBias; 
+(id)sharedPreferencesController;
+(void)handleSpecificHardwareKeyboard;
-(void)setInputModeLastUsed:(id)arg1 ;
-(BOOL)boolForKey:(int)arg1 ;
-(id)valueForKey:(int)arg1 ;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(double)rivenSizeFactor:(double)arg1 ;
-(void)saveInputModes:(id)arg1 ;
-(void)setLanguageAwareInputModeLastUsed:(id)arg1 ;
-(BOOL)spaceConfirmationEnabled;
-(BOOL)typologyEnabled;
-(long long)handBias;
-(void)setHandBias:(long long)arg1 ;
-(BOOL)isKeyLockedDown:(int)arg1 ;
-(void)synchronizePreferences;
-(void)releaseDontSynchronizePreferences;
-(void)preferencesControllerChanged:(id)arg1 ;
-(void)touchSynchronizePreferencesTimer;
-(BOOL)costlyCapture;
@end

