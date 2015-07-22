/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSArray;

@interface SiriRestaurantsOpenHoursCell : SiriUIContentCollectionViewCell {

	NSArray* _dayRangeLabels;
	NSArray* _hoursLabelPerRange;

}
+(double)heightForParsedOpenHoursInfo:(id)arg1 ;
-(void)configureWithParsedOpenHoursInfo:(id)arg1 ;
-(void)_layoutView:(id)arg1 withX:(double)arg2 Y:(double)arg3 width:(double)arg4 ;
-(void)_getRightLabel:(id*)arg1 leftLabel:(id*)arg2 configuredWithPeriod:(id)arg3 isHighlighted:(BOOL)arg4 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end
