/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKCartoStyle, VKStyleManager;

@interface VKDrawStyle : NSObject {

	VKCartoStyle* _sourceStyle;
	StyleData* _internal;
	VKStyleManager* _styleManager;

}

@property (nonatomic,readonly) id variant; 
@property (nonatomic,readonly) float blendingFactor; 
+(int)renderStyleID;
-(float)blendingFactor;
-(id)variant;
-(id)initWithStyle:(id)arg1 manager:(id)arg2 ;
-(id)sourceStyle;
-(void)clearSourceStyle;
-(id)styleName;
-(void)takeFromZoomInvariantProperties:(id)arg1 ;
-(void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned)arg2 globals:(id)arg3 ;
@end

