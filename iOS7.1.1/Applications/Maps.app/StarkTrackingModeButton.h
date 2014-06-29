/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>

@interface StarkTrackingModeButton : UIButton {

	BOOL _updatingImages;
	int _trackingMode;

}

@property (assign,nonatomic) int trackingMode;              //@synthesize trackingMode=_trackingMode - In the implementation block
-(int)trackingMode;
-(void)setTrackingMode:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateImages;
@end

