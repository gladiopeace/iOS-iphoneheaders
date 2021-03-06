/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding> {

	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
	}  _flags;
	double _location;
	id _reserved;

}

@property (readonly) long long alignment; 
@property (readonly) double location; 
@property (readonly) NSDictionary * options; 
+(id)allocWithZone:(NSZone)arg1 ;
+(void)initialize;
+(id)columnTerminatorsForLocale:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(long long)alignment;
-(double)location;
-(id)options;
-(id)initWithTextAlignment:(long long)arg1 location:(double)arg2 options:(id)arg3 ;
-(id)initWithType:(unsigned long long)arg1 location:(double)arg2 ;
-(unsigned long long)tabStopType;
-(id)accessibilityRulerMarkerType;
-(id)accessibilityRulerMarkerTypeDescription;
@end

