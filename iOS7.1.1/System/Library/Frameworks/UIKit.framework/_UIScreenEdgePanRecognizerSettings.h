/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class NSString, _UIScreenEdgePanRecognizerEdgeSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerCornerSettings;

@interface _UIScreenEdgePanRecognizerSettings : _UISettings {

	bool _analysisLoggingEnabled;
	bool _analysisFailureOverlayVisible;
	bool _analysisLoggingOverlayVisible;
	NSString* _multitaskingGestureMode;
	NSString* _navigationGestureMode;
	_UIScreenEdgePanRecognizerEdgeSettings* _edgeSettings;
	_UIScreenEdgePanRecognizerDwellSettings* _dwellSettings;
	_UIScreenEdgePanRecognizerCornerSettings* _cornerSettings;

}

@property (nonatomic,copy) NSString * multitaskingGestureMode;                                       //@synthesize multitaskingGestureMode=_multitaskingGestureMode - In the implementation block
@property (nonatomic,copy) NSString * navigationGestureMode;                                         //@synthesize navigationGestureMode=_navigationGestureMode - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerEdgeSettings * edgeSettings;                  //@synthesize edgeSettings=_edgeSettings - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerDwellSettings * dwellSettings;                //@synthesize dwellSettings=_dwellSettings - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerCornerSettings * cornerSettings;              //@synthesize cornerSettings=_cornerSettings - In the implementation block
@property (assign,nonatomic) bool analysisLoggingEnabled;                                            //@synthesize analysisLoggingEnabled=_analysisLoggingEnabled - In the implementation block
@property (assign,nonatomic) bool analysisFailureOverlayVisible;                                     //@synthesize analysisFailureOverlayVisible=_analysisFailureOverlayVisible - In the implementation block
@property (assign,nonatomic) bool analysisLoggingOverlayVisible;                                     //@synthesize analysisLoggingOverlayVisible=_analysisLoggingOverlayVisible - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setAnalysisLoggingEnabled:(bool)arg1 ;
-(void)setAnalysisFailureOverlayVisible:(bool)arg1 ;
-(void)setAnalysisLoggingOverlayVisible:(bool)arg1 ;
-(void)setMultitaskingGestureModePost351:(id)arg1 ;
-(id)multitaskingGestureModePost351;
-(void)setNavigationGestureModePost351:(id)arg1 ;
-(id)navigationGestureModePost351;
-(id)multitaskingGestureMode;
-(void)setMultitaskingGestureMode:(id)arg1 ;
-(id)navigationGestureMode;
-(void)setNavigationGestureMode:(id)arg1 ;
-(id)edgeSettings;
-(void)setEdgeSettings:(id)arg1 ;
-(id)dwellSettings;
-(void)setDwellSettings:(id)arg1 ;
-(id)cornerSettings;
-(void)setCornerSettings:(id)arg1 ;
-(bool)analysisLoggingEnabled;
-(bool)analysisFailureOverlayVisible;
-(bool)analysisLoggingOverlayVisible;
@end

