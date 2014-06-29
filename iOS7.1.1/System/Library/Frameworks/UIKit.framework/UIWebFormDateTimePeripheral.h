/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIFormPeripheral.h>

@protocol UIWebFormControl;
@class DOMHTMLInputElement;

@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral> {

	DOMHTMLInputElement* _inputElement;
	<UIWebFormControl>* _control;

}

@property (nonatomic,retain) DOMHTMLInputElement * _inputElement;              //@synthesize inputElement=_inputElement - In the implementation block
@property (nonatomic,retain) <UIWebFormControl> * _control;                    //@synthesize control=_control - In the implementation block
+(id)createPeripheralWithDOMHTMLInputElement:(id)arg1 ;
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(id)_control;
-(id)assistantView;
-(void)set_inputElement:(id)arg1 ;
-(id)_inputElement;
-(long long)_datePickerModeForInputType:(id)arg1 ;
-(void)set_control:(id)arg1 ;
-(id)initWithDOMHTMLInputElement:(id)arg1 ;
@end

