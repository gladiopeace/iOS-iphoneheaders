/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@interface RUIVariableHeightCell : RemoteUITableViewCell {

	bool _supportsAccessory;

}

@property (assign,nonatomic) bool supportsAccessory;              //@synthesize supportsAccessory=_supportsAccessory - In the implementation block
-(void)layoutSubviews;
-(double)height;
-(double)contentWidth;
-(CGSize)textLabelSizeForWidth:(double)arg1 ;
-(CGSize)detailLabelSizeForWidth:(double)arg1 ;
-(bool)supportsAccessory;
-(void)setSupportsAccessory:(bool)arg1 ;
@end

