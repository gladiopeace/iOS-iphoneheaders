/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <UIKit/UIWindow.h>

@interface ADSLayerHostWindow : UIWindow
+(id)layerHostWindowForView:(id)arg1 ;
-(CGAffineTransform)_screenTransform:(float)arg1 ;
-(CGPoint)_adjustForClassic:(CGPoint)arg1 ;
-(void)_setupConfiguration;
-(CGPoint)_centerForFrame:(CGRect)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_isWindowServerHostingManaged;
-(void)_updateTransformLayerForClassicPresentation;
-(void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2 ;
@end

