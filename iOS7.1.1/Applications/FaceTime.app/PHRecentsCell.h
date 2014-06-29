/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIDateLabel, UIImageView, NSDictionary, NSLayoutConstraint, UIView, PHCellContentView, PHRecentCall, NSArray;

@interface PHRecentsCell : UITableViewCell {

	UILabel* _callerNameLabel;
	UILabel* _callerLabelLabel;
	UILabel* _callerCountLabel;
	UIDateLabel* _callerDateLabel;
	UIImageView* _callTypeIconView;
	NSDictionary* _allViewsDictionary;
	long _buildConstraintsOnceToken;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _dateConstraint;
	UIView* _layoutView;
	PHCellContentView* _cellContentView;
	PHRecentCall* _call;
	NSArray* _calculatedConstraints;

}

@property (nonatomic,retain) PHRecentCall * call;                          //@synthesize call=_call - In the implementation block
@property (@dynamic,readonly) int count; 
@property (@dynamic,readonly) NSDictionary * allViews; 
@property (@dynamic,readonly) NSDictionary * allMetrics; 
@property (nonatomic,retain) NSArray * calculatedConstraints;              //@synthesize calculatedConstraints=_calculatedConstraints - In the implementation block
+(float)editingMarginWidth;
+(id)_sharedOutgoingFaceTimeImage;
+(id)_sharedOutgoingCallImage;
+(id)allMetrics;
+(id)_sharedOutgoingSelectedCallImage;
+(id)_sharedOutgoingSelectedFaceTimeImage;
+(float)height;
+(float)marginWidth;
-(void)_updateFonts;
-(void)setCall:(id)arg1 ;
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(void)_updateConstraints;
-(id)allMetrics;
-(id)allViews;
-(void)_buildConstraints;
-(id)calculatedConstraints;
-(void)setCalculatedConstraints:(id)arg1 ;
-(id)call;
-(void)dealloc;
-(int)count;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

