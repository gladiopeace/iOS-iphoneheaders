/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextField.h>

@interface MFComposeTextField : UITextField {

	BOOL _isShowingDictationPlaceholder;

}

@property (nonatomic,readonly) BOOL isShowingDictationPlaceholder;              //@synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder - In the implementation block
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(BOOL)isShowingDictationPlaceholder;
@end

