/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface _ASPurchasedCellContentView : UIView {

	UILabel* _publisherLabel;
	UILabel* _restrictionsLabel;
	UILabel* _titleLabel;
	UILabel* _versionLabel;
	NSString* _text;

}

@property (nonatomic,retain) UILabel * publisherLabel;                   //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (nonatomic,retain) UILabel * restrictionsLabel;                //@synthesize restrictionsLabel=_restrictionsLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * versionLabel;                     //@synthesize versionLabel=_versionLabel - In the implementation block
@property (nonatomic,readonly) NSString * publisher; 
@property (nonatomic,readonly) NSString * restrictionsText; 
@property (nonatomic,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * version; 
-(NSString *)restrictionsText;
-(void)setPublisherLabel:(UILabel *)arg1 ;
-(UILabel *)publisherLabel;
-(void)setRestrictionsLabel:(UILabel *)arg1 ;
-(UILabel *)restrictionsLabel;
-(void)setVersionLabel:(UILabel *)arg1 ;
-(UILabel *)versionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(NSString *)title;
-(NSString *)text;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)version;
-(NSString *)publisher;
@end

