/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:06:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel;

@interface CloudStorageDataAndMailBarButtonView : UIView {

	UILabel* _data;
	UILabel* _dataSizes;
	UILabel* _mail;
	UILabel* _mailSizes;

}
+(id)barButtonItemWithData:(id)arg1 andMail:(id)arg2 ;
-(id)initWithData:(id)arg1 andMail:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;
@end

