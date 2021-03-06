/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDColor, GQDRStrokePattern, NSString;

@interface GQDRStroke : NSObject <GQDNameMappable> {

	float mMiterLimit;
	float mWidth;
	int mCap;
	int mJoin;
	GQDColor* mColor;
	GQDRStrokePattern* mPattern;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(void)dealloc;
-(float)miterLimit;
-(float)width;
-(id)color;
-(int)cap;
-(int)join;
-(id)pattern;
@end

