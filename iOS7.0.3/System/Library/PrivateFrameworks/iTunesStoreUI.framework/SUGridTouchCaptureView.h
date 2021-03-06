/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIControl.h>

@class SUGridTableViewCell;

@interface SUGridTouchCaptureView : UIControl {

	SUGridTableViewCell* _swipedCell;

}

@property (nonatomic,readonly) SUGridTableViewCell * swipedCell;              //@synthesize swipedCell=_swipedCell - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSwipedCell:(id)arg1 ;
-(id)swipedCell;
@end

