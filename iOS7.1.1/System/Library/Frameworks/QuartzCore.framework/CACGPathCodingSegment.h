/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSCoding.h>

@interface CACGPathCodingSegment : NSObject <NSCoding> {

	int _type;
	CGPoint _points[3];

}
-(id)initWithCGPathElement:(const CGPathElement*)arg1 ;
-(void)addToCGPath:(CGPathRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id).cxx_construct;
@end

