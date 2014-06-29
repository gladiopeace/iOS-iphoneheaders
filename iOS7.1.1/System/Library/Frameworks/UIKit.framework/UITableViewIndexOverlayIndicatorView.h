/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UITapGestureRecognizer, UITableView, NSString;

@interface UITableViewIndexOverlayIndicatorView : UIView {

	UILabel* _label;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITableView* _table;

}

@property (nonatomic,copy) NSString * currentText; 
-(void)dealloc;
-(void)layoutSubviews;
-(void)_tapGestureChanged:(id)arg1 ;
-(id)initWithTable:(id)arg1 ;
-(void)_invalidateTable;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(id)currentText;
-(void)setCurrentText:(id)arg1 ;
@end

