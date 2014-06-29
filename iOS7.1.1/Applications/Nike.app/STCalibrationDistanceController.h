/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/STCustomSheetController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView;

@interface STCalibrationDistanceController : STCustomSheetController <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _distancePicker;
	float _originalMinDistance;
	float _originalMaxDistance;
	float _minDistance;
	float _maxDistance;
	float _distanceInterval;
	float _defaultDistance;

}

@property (assign,nonatomic) float minDistance;                    //@synthesize minDistance=_minDistance - In the implementation block
@property (assign,nonatomic) float maxDistance;                    //@synthesize maxDistance=_maxDistance - In the implementation block
@property (assign,nonatomic) float distanceInterval;               //@synthesize distanceInterval=_distanceInterval - In the implementation block
@property (assign,nonatomic) float defaultDistance;                //@synthesize defaultDistance=_defaultDistance - In the implementation block
@property (nonatomic,readonly) float distanceInMiles; 
-(void)setDistanceInterval:(float)arg1 ;
-(void)setMinDistance:(float)arg1 ;
-(void)_updateDistanceLabel;
-(float)_roundFloatToDistanceInterval:(float)arg1 roundingMode:(unsigned)arg2 ;
-(float)distanceInterval;
-(void)setDefaultDistance:(float)arg1 ;
-(float)minDistance;
-(float)defaultDistance;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)init;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(id)description;
-(void)loadView;
-(float)maxDistance;
-(void)setMaxDistance:(float)arg1 ;
-(float)distanceInMiles;
@end

