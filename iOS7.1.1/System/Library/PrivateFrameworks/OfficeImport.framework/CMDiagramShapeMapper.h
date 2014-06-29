/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramMapper.h>

@class OADOrientedBounds, NSString;

@interface CMDiagramShapeMapper : CMDiagramMapper {

	int mChildCount;
	OADOrientedBounds* mDiagramShapeBounds;
	NSString* mIdentifier;
	float mDefaultFontSize;
	int mMaxMappableTreeDepth;
	float mDefaultScale;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(CGRect)circumscribedBounds;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(void)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(CGSize)textSizeForShapeSize:(CGSize)arg1 ;
-(float)defaultFontSize;
-(void)setDefaultFonSize;
@end

