/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityListController.h>

@class AXRemoteHearingAidDevice;

@interface HearingAidAdvancedController : AccessibilityListController {

	AXRemoteHearingAidDevice* _device;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(id)specifiersForEar:(int)arg1 ;
-(id)hardwareVersion:(id)arg1 ;
-(id)firmwareVersion:(id)arg1 ;
-(id)HIID:(id)arg1 ;
-(id)connection:(id)arg1 ;
-(void)setDevice:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)device;
-(id)specifiers;
@end

