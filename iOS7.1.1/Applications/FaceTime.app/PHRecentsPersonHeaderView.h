/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIView.h>

@class PHRecentCall, NSArray;

@interface PHRecentsPersonHeaderView : UIView {

	PHRecentCall* _recentCall;
	NSArray* _dateLabels;
	NSArray* _summaries;
	float _intrinsicContentHeight;

}

@property (readonly) PHRecentCall * recentCall;               //@synthesize recentCall=_recentCall - In the implementation block
@property (retain) NSArray * dateLabels;                      //@synthesize dateLabels=_dateLabels - In the implementation block
@property (retain) NSArray * summaries;                       //@synthesize summaries=_summaries - In the implementation block
@property (assign) float intrinsicContentHeight;              //@synthesize intrinsicContentHeight=_intrinsicContentHeight - In the implementation block
+(id)headerViewWithFrame:(CGRect)arg1 recentCall:(id)arg2 ;
-(id)newSummaryViewForRecentCall:(id)arg1 occurrenceDate:(id)arg2 type:(int)arg3 duration:(double)arg4 category:(int)arg5 dataUsage:(double)arg6 ;
-(void)setIntrinsicContentHeight:(float)arg1 ;
-(float)intrinsicContentHeight;
-(void)_buildView;
-(id)_initWithFrame:(CGRect)arg1 recentCall:(id)arg2 ;
-(id)recentCall;
-(void)setDateLabels:(id)arg1 ;
-(void)setSummaries:(id)arg1 ;
-(id)dateLabels;
-(id)summaries;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end

