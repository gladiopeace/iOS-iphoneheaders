/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class VKMapSnapshot, UIImage;

@interface MKMapSnapshot : NSObject {

	VKMapSnapshot* _snapshot;
	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
-(id)_initWithSnapshot:(id)arg1 ;
-(SCD_Struct_MK1)_coordinateForPoint:(CGPoint)arg1 ;
-(id)image;
-(void).cxx_destruct;
-(CGPoint)pointForCoordinate:(SCD_Struct_MK1)arg1 ;
@end

