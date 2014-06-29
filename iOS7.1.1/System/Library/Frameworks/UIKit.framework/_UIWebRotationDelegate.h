/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIWebRotationDelegate
@optional
-(double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
-(CGSize*)contentSizeForScrollView:(id)arg1;

@required
-(id)contentView;
-(double)minimumScaleForSize:(CGSize)arg1;
-(id)enclosingScrollView;
-(double)zoomedDocumentScale;
-(double)currentDocumentScale;
-(SCD_Struct_UI38*)scalesForContainerSize:(CGSize)arg1;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI38)arg2;
-(CGRect*)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect*)activeRectForRectOfInterest:(CGRect)arg1;
-(bool)considerHeightOfRectOfInterestForRotation;
@end

