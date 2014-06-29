/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationCell.h>

@class SBNotificationCenterSeparatorView;

@interface SBNotificationsBulletinCell : SBNotificationCell {

	SBNotificationCenterSeparatorView* _separator;
	BOOL _missed;

}

@property (assign,nonatomic) BOOL showsSeparator; 
@property (assign,getter=isMissed,nonatomic) BOOL missed;              //@synthesize missed=_missed - In the implementation block
+(id)defaultColorForRelevanceDate;
+(float)iconPaddingLeft;
+(CGSize)_preferredSizeForRelevanceDateLabel:(id)arg1 ;
-(void)setRelevanceDateLabel:(id)arg1 ;
-(void)setEventDateLabel:(id)arg1 ;
-(BOOL)isMissed;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(CGRect)_separatorFrame;
-(BOOL)showsSeparator;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(void)setMissed:(BOOL)arg1 ;
@end

