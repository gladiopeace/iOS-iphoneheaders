/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PhoneTabViewController <NSObject,PhoneBadgeable>
@optional
+(int)tabBarSystemItem;
+(id)tabBarIconImage;
+(id)tabBarIconImageSelected;
+(id)tabBarIconImageName;
+(BOOL)requiresNavigationControllerContainer;
-(void)tabBarDidSelectViewController;
-(BOOL)tabBarControllerShouldSelectViewController:(id)arg1;

@required
+(id)tabBarIconName;
+(int)tabViewType;
+(id)defaultPNGName;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)handleURL:(id)arg1;
@end

