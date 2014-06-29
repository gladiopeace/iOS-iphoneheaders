/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol HourlyScrollerBeltDelegate;
@class NSMutableArray;

@interface HourlyScrollerBeltView : UIScrollView <UIScrollViewDelegate> {

	<HourlyScrollerBeltDelegate>* _hourlyScrollerDelegate;
	NSMutableArray* _cells;

}

@property (assign,nonatomic) <HourlyScrollerBeltDelegate> * hourlyScrollerDelegate;              //@synthesize hourlyScrollerDelegate=_hourlyScrollerDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                                             //@synthesize cells=_cells - In the implementation block
-(void)setHourlyScrollerDelegate:(id)arg1 ;
-(void)resetScrollerOffsets;
-(id)forecasts;
-(id)hourlyScrollerDelegate;
-(void)setCells:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)cells;
@end

