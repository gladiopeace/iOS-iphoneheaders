/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@protocol InfoCardCheckInWriteReviewCellDelegate;
@class UILabel, NSAttributedString;

@interface InfoCardCheckInWriteReviewCell : ABContactCell {

	UILabel* _checkInLabel;
	UILabel* _writeReviewLabel;
	NSAttributedString* _checkInTitle;
	NSAttributedString* _writeReviewTitle;
	<InfoCardCheckInWriteReviewCellDelegate>* _delegate;

}

@property (nonatomic,retain) NSAttributedString * checkInTitle;                                       //@synthesize checkInTitle=_checkInTitle - In the implementation block
@property (nonatomic,retain) NSAttributedString * writeReviewTitle;                                   //@synthesize writeReviewTitle=_writeReviewTitle - In the implementation block
@property (assign,nonatomic,__weak) <InfoCardCheckInWriteReviewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(void)cellTapped:(id)arg1 ;
-(id)checkInTitle;
-(void)setCheckInTitle:(id)arg1 ;
-(id)writeReviewTitle;
-(void)setWriteReviewTitle:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(void)updateConstraints;
-(void).cxx_destruct;
@end

