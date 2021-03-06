/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIWebRotationDelegate
@optional
-(float)scaleForProposedNewScale:(float)arg1 andOldScale:(float)arg2;
-(CGSize*)contentSizeForScrollView:(id)arg1;

@required
-(id)contentView;
-(float)minimumScaleForSize:(CGSize)arg1;
-(id)enclosingScrollView;
-(float)zoomedDocumentScale;
-(float)currentDocumentScale;
-(SCD_Struct_UI43*)scalesForContainerSize:(CGSize)arg1;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI43)arg2;
-(CGRect*)rectOfInterestForRotation;
-(float)minimumVerticalContentOffset;
-(float)heightToKeepVisible;
-(CGRect*)activeRectForRectOfInterest:(CGRect)arg1;
-(char)considerHeightOfRectOfInterestForRotation;

@end

