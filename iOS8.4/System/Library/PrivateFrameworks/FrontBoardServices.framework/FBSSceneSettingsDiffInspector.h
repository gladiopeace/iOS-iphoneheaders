/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BSMutableSettings;

@interface FBSSceneSettingsDiffInspector : NSObject {

	BSMutableSettings* _observerInfo;
	BOOL _iteratingObservers;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)inspectDiff:(id)arg1 withContext:(void*)arg2 ;
-(void)observeOtherSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)observeOcclusionsWithBlock:(/*^block*/id)arg1 ;
-(void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3 ;
-(void)removeAllObservers;
-(void)observeClassWithBlock:(/*^block*/id)arg1 ;
-(void)observeFrameWithBlock:(/*^block*/id)arg1 ;
-(void)observeLevelWithBlock:(/*^block*/id)arg1 ;
-(void)observeInterfaceOrientationWithBlock:(/*^block*/id)arg1 ;
-(void)observeIsBackgroundedWithBlock:(/*^block*/id)arg1 ;
@end

