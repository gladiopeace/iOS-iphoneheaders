/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DScene, NSMutableDictionary, NSDictionary;

@interface TSCH3DGeometryCollector : TSCH3DRetargetRenderProcessor {

	TSCH3DScene* mScene;
	NSMutableDictionary* mDerivedData;

}

@property (nonatomic,readonly) NSDictionary * derivedData; 
@property (nonatomic,readonly) TSCH3DScene * scene; 
+(id)processor;
+(id)processorWithOriginal:(id)arg1 ;
+(id)collectorWithScene:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(id)derivedData;
-(id)scene;
-(void)dealloc;
-(id)init;
@end

