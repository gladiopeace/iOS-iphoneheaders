/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKVectorMapModel.h>

@class VKRoadMapModel, VKTrafficPainter, VKTrafficDrawStyle;

@interface VKRoadTrafficMapModel : VKVectorMapModel {

	VKRoadMapModel* _roadModel;
	float _styleZAdjust;
	bool _enabled;
	VKTrafficPainter* _trafficPainter;
	VKTrafficDrawStyle* _trafficDrawStyle;

}

@property (assign,nonatomic) bool enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) VKRoadMapModel * roadModel;              //@synthesize roadModel=_roadModel - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setEnabled:(bool)arg1 ;
-(bool)enabled;
-(unsigned long long)mapLayerPosition;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)setRoadModel:(id)arg1 ;
-(void)stylesheetDidChange;
-(id)roadModel;
@end

