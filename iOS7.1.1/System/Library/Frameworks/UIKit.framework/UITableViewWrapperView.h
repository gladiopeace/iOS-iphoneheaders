/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface UITableViewWrapperView : UIView {

	NSMutableArray* _stuckToBackViews;

}

@property (nonatomic,readonly) NSArray * stuckToBackViews;              //@synthesize stuckToBackViews=_stuckToBackViews - In the implementation block
-(void)dealloc;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)_stickViewToBack:(id)arg1 ;
-(void)_unstickView:(id)arg1 ;
-(id)stuckToBackViews;
@end

