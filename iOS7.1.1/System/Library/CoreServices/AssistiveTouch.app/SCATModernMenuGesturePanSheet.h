/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:22 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuPanItemsViewDelegate;
@interface SCATModernMenuGesturePanSheet : SCATModernMenuGesturesSheetBase {

	<SCATMenuPanItemsViewDelegate>* _delegate;

}

@property (assign,nonatomic) <SCATMenuPanItemsViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

