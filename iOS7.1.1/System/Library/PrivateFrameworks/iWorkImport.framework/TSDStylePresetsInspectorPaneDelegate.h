/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDStylePresetsInspectorPaneDelegate <NSObject>
@optional
-(id)firstShapeInfo;
-(CGSize*)imageSizeForPreset:(id)arg1 swatchSize:(CGSize)arg2;
-(id)moreOptionsTitle;
-(id)optionalTopSectionCellArrayForPresetPane:(id)arg1;
-(id)swatchRenderingOperationForPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 view:(id)arg5;
-(id)styleInspectorName;

@required
-(id)stylePresetKindForInspector;
-(void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
-(id)imageForPreset:(id)arg1 size:(CGSize)arg2;
@end

