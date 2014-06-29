/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CertInfoGradientLabel* _trustedLabel;

}
-(void)dealloc;
-(void)layoutSubviews;
-(double)rowHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_titleLabel;
-(id)_trustedLabel;
-(void)setTrustTitle:(id)arg1 ;
-(void)setTrustSubtitle:(id)arg1 ;
-(void)setExpired:(bool)arg1 ;
-(id)_certificateImage;
-(id)_notTrustedGradient;
-(id)_subtitleLabel;
@end

