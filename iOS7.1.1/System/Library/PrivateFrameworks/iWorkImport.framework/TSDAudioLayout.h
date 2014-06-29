/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaLayout.h>

@interface TSDAudioLayout : TSDMediaLayout
-(id)layoutGeometryFromInfo;
-(bool)resizeMayChangeAspectRatio;
-(bool)canAspectRatioLockBeChangedByUser;
-(CGRect)alignmentFrame;
-(bool)supportsRotation;
-(bool)shouldDisplayGuides;
-(bool)allowsConnections;
-(CGRect)computeAlignmentFrameInRoot:(bool)arg1 ;
-(id)movieInfo;
-(id)initWithInfo:(id)arg1 ;
-(bool)canFlip;
-(int)wrapType;
@end

