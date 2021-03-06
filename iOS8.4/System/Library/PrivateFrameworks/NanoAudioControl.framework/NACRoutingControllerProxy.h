/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoAudioControl/NACRoutingController.h>

@protocol NACRoutingControllerDelegate;
@class NACXPCClient, NSString, NSArray, NACAudioRoute;

@interface NACRoutingControllerProxy : NSObject <NACRoutingController> {

	NACXPCClient* _xpcClient;
	NSString* _category;
	BOOL _isObserving;
	id<NACRoutingControllerDelegate> _delegate;
	NSArray* _availableAudioRoutes;
	NACAudioRoute* _pickedRoute;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NACAudioRoute * pickedRoute;                                 //@synthesize pickedRoute=_pickedRoute - In the implementation block
@property (nonatomic,readonly) NSArray * availableAudioRoutes;                              //@synthesize availableAudioRoutes=_availableAudioRoutes - In the implementation block
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithAudioCategory:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(NACAudioRoute *)pickedRoute;
-(void)dealloc;
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(id<NACRoutingControllerDelegate>)delegate;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
-(void)_audioRoutesDidChange;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
@end

