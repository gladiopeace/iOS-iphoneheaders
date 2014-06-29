/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class UIImageView, MKStarRatingAndLabelView, UILabel, UIImage, NSString, NSDate;

@interface InfoCardReviewCell : ABContactCell {

	UIImageView* _pictureView;
	MKStarRatingAndLabelView* _starView;
	UILabel* _authorLabel;
	UILabel* _dateLabel;
	UILabel* _reviewLabel;
	UIImageView* _border;

}

@property (assign,nonatomic,@dynamic,__weak) UIImage * picture; 
@property (assign,nonatomic,@dynamic,__weak) NSString * author; 
@property (assign,nonatomic,@dynamic,__weak) NSDate * date; 
@property (assign,nonatomic,@dynamic,__weak) NSString * reviewText; 
@property (assign,nonatomic,@dynamic) unsigned rating; 
+(id)reuseIdentifier;
-(void)setRating:(unsigned)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setDate:(id)arg1 ;
-(void).cxx_destruct;
-(void)setPicture:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(void)setReviewText:(id)arg1 ;
@end

