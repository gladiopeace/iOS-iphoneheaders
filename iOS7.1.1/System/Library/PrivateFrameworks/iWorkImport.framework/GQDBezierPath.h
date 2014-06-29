/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDPath.h>
#import <iWorkImport/GQDNameMappable.h>

@interface GQDBezierPath : GQDPath <GQDNameMappable> {

	CGPathRef mPath;
	char* mPathStr;
	bool mHasVFlip;
	bool mVFlip;
	bool mHasHFlip;
	bool mHFlip;

}
+(const StateSpec*)stateForReading;
+(CFStringRef)createCFStringFromPath:(CGPathRef)arg1 ;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(bool)horizontalFlip;
-(bool)verticalFlip;
-(id)initWithPathString:(const char*)arg1 ;
-(char*)pathStr;
-(CGPathRef)createBezierPath;
-(bool)hasVerticalFlip;
-(bool)hasHorizontalFlip;
-(void)dealloc;
-(CGPathRef)path;
-(bool)isRectangular;
@end

