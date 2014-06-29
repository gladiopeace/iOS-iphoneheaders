/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDCanvas, TSDRootLayout, NSMutableSet, TSDLayout;

@interface TSDLayoutController : NSObject {

	TSDCanvas* mCanvas;
	TSDRootLayout* mRootLayout;
	CFDictionaryRef mLayoutsByInfo;
	NSMutableSet* mInvalidLayouts;
	NSMutableSet* mLayoutsNeedingRecreating;
	NSMutableSet* mInvalidChildrenLayouts;
	TSDLayout* mValidatingLayout;

}
+(void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(/*^block*/ id)arg2 ;
+(id)allInteractiveLayoutControllers;
-(bool)isLayoutOffscreen;
-(void)setInfos:(id)arg1 ;
-(void)validateLayoutWithDependencies:(id)arg1 ;
-(id)layoutForInfo:(id)arg1 ;
-(id)layoutsForInfo:(id)arg1 ;
-(id)validatedLayoutForInfo:(id)arg1 ;
-(id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2 ;
-(void)invalidateLayout:(id)arg1 ;
-(void)invalidateChildrenOfLayout:(id)arg1 ;
-(id)rootLayout;
-(void)i_registerLayout:(id)arg1 ;
-(void)i_unregisterLayout:(id)arg1 ;
-(void)validateLayouts;
-(void)validateLayouts:(id)arg1 ;
-(id)sortLayoutsForDependencies:(id)arg1 ;
-(void)validateLayoutsWithDependencies:(id)arg1 ;
-(id)validatedLayoutsForInfo:(id)arg1 ;
-(void)invalidateLayoutForRecreation:(id)arg1 ;
-(id)layoutsForInfos:(id)arg1 ;
-(id)layoutsInRect:(CGRect)arg1 ;
-(CGRect)rectOfTopLevelLayouts;
-(id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2 ;
-(void)i_removeAllLayouts;
-(void)dealloc;
-(id)initWithCanvas:(id)arg1 ;
-(id)canvas;
@end

