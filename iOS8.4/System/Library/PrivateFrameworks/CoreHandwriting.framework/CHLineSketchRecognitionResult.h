/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult {

	int _startEndpointType;
	int _endEndpointType;
	CGPoint _startLocation;
	CGPoint _endLocation;
	CGPoint _midpointLocation;
	CGPoint _controlPoint;

}

@property (readonly) int startEndpointType;                 //@synthesize startEndpointType=_startEndpointType - In the implementation block
@property (readonly) int endEndpointType;                   //@synthesize endEndpointType=_endEndpointType - In the implementation block
@property (readonly) CGPoint startLocation;                 //@synthesize startLocation=_startLocation - In the implementation block
@property (readonly) CGPoint endLocation;                   //@synthesize endLocation=_endLocation - In the implementation block
@property (readonly) CGPoint midpointLocation;              //@synthesize midpointLocation=_midpointLocation - In the implementation block
@property (readonly) CGPoint controlPoint;                  //@synthesize controlPoint=_controlPoint - In the implementation block
-(CGPoint)startLocation;
-(CGPoint)endLocation;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(CGPoint)arg4 startEndpointType:(int)arg5 endLocation:(CGPoint)arg6 endEndpointType:(int)arg7 midPointLocation:(CGPoint)arg8 controlPointLocation:(CGPoint)arg9 ;
-(int)startEndpointType;
-(int)endEndpointType;
-(CGPoint)midpointLocation;
-(CGPoint)controlPoint;
@end

