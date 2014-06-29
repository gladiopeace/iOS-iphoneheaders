/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSIndexSet, UIEvent, NSString, UIViewController;

@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _keyCodes;
	SEL _action;
	long long _buttonType;
	UIEvent* _triggeringEvent;
	NSString* _segueIdentifier;
	UIViewController* _controllerForSegue;
	NSString* _input;
	long long _modifierFlags;

}

@property (nonatomic,readonly) NSString * input;                     //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;              //@synthesize modifierFlags=_modifierFlags - In the implementation block
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(bool)supportsSecureCoding;
+(id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_buttonType;
-(bool)triggerSegueIfPossible;
-(SEL)action;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)_setButtonType:(long long)arg1 ;
-(void)_setTriggeringEvent:(id)arg1 ;
-(id)_segueIdentifier;
-(void)_setViewControllerForSegue:(id)arg1 ;
-(id)input;
-(long long)modifierFlags;
-(id)_keyCodes;
-(id)initWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
-(id)initWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 ;
-(id)initWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
-(id)initWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
-(id)initWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
-(id)_controllerForSegue;
-(id)_triggeringEvent;
@end

