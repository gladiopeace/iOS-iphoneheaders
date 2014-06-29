/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OABWriterClient, ESDContainer, NSMutableArray, TSUPointerKeyDictionary, NSMutableDictionary, OADColorMap, OADColorScheme;

@interface OABWriterState : NSObject {

	OABWriterClient* mClient;
	ESDContainer* mDrawingGroup;
	NSMutableArray* mDrawings;
	TSUPointerKeyDictionary* mDrawableMap;
	NSMutableDictionary* mSourceDrawableIdToSourceDrawableMap;
	NSMutableArray* mConnectorsInCurrentDrawing;
	OADColorMap* mColorMap;
	OADColorScheme* mColorScheme;

}

@property (retain) OADColorMap * colorMap; 
@property (retain) OADColorScheme * colorScheme; 
-(void)dealloc;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
-(void)cacheCHDChart:(id)arg1 forESDObject:(id)arg2 ;
-(id)mappingForRGBColor:(id)arg1 ;
-(void)setTargetObject:(id)arg1 forSourceDrawable:(id)arg2 ;
-(id)connectorsInCurrentDrawing;
-(unsigned long long)indexForChild:(id)arg1 parentContainer:(id)arg2 ;
-(void)addDrawing:(id)arg1 ;
-(unsigned)drawingCount;
-(id)drawingGroup;
-(unsigned)targetShapeIdForSourceDrawableId:(unsigned long long)arg1 ;
-(void)setDrawingGroup:(id)arg1 ;
-(id)targetObjectForSourceDrawable:(id)arg1 ;
-(id)sourceDrawableForSourceDrawableId:(unsigned long long)arg1 ;
-(unsigned)targetShapeIdForSourceDrawable:(id)arg1 ;
-(id)drawingAtIndex:(unsigned)arg1 ;
-(id)client;
-(id)initWithClient:(id)arg1 ;
@end
