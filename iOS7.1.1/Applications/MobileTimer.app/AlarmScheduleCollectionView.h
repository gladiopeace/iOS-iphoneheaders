/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionView.h>

@class AlarmScheduleGridView, AlarmScheduleLayout;

@interface AlarmScheduleCollectionView : UICollectionView {

	AlarmScheduleGridView* _gridView;

}

@property (nonatomic,retain) AlarmScheduleLayout * collectionViewLayout; 
@property (nonatomic,readonly) AlarmScheduleGridView * gridView;                         //@synthesize gridView=_gridView - In the implementation block
@property (assign,getter=isShowingNoAlarms,nonatomic) BOOL showingNoAlarms; 
-(void)setShowingNoAlarms:(BOOL)arg1 ;
-(id)frontmostVisibleCellWithAlarmBodyContainingPoint:(CGPoint)arg1 ;
-(BOOL)isShowingNoAlarms;
-(void)updateGridLayout;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(id)collectionViewLayout;
-(id)gridView;
@end

