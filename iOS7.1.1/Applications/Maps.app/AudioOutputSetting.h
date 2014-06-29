/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface AudioOutputSetting : NSObject {

	NSSet* _pickableRoutes;
	BOOL _selected;
	BOOL _selectedForSystem;
	BOOL _hfpPreference;

}

@property (nonatomic,readonly) BOOL hfpPreference; 
@property (assign,nonatomic) BOOL selectedForSystem;              //@synthesize selectedForSystem=_selectedForSystem - In the implementation block
+(id)macAddressForRoute:(id)arg1 ;
+(BOOL)isBluetoothRoute:(id)arg1 ;
-(BOOL)settingForBluetoothDevice;
-(BOOL)settingSupportsBluetoothHFP;
-(BOOL)settingForBluetoothComboDevice;
-(BOOL)hfpPreference;
-(id)initWithPickableRoutes:(id)arg1 ;
-(id)pickableRouteForHFPPreference:(BOOL)arg1 ;
-(BOOL)_isHFPRoute:(id)arg1 ;
-(BOOL)selectedForRouteSelection:(int)arg1 ;
-(BOOL)_isPicked:(id)arg1 ;
-(void)setHfpPreference:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 shouldSetHFPPreference:(BOOL)arg2 ;
-(id)initWithPickableRoute:(id)arg1 ;
-(BOOL)containsPickableRoute:(id)arg1 ;
-(BOOL)isEqualToSetting:(id)arg1 ;
-(BOOL)settingForDefaultRoute;
-(BOOL)allowHFPPreferenceSelectionForRouteSelection:(int)arg1 ;
-(BOOL)pickedStateConsistentWithHFPPreference;
-(BOOL)selectedForSystem;
-(void)setSelectedForSystem:(BOOL)arg1 ;
-(BOOL)isPicked;
-(id)routeUID;
-(void)setPicked:(BOOL)arg1 ;
-(BOOL)_pickRoute:(id)arg1 ;
-(id)description;
-(void)setSelected:(BOOL)arg1 ;
-(id)displayName;
-(void).cxx_destruct;
-(id)macAddress;
@end

