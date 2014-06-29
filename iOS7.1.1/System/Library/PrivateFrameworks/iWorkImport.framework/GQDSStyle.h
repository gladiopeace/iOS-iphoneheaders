/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappableWithDefault.h>

@interface GQDSStyle : NSObject <GQDNameMappableWithDefault> {

	GQDSStyle* mParent;
	GQDSMapRef mPropertyMap;

}
+(id)createReplacementForMissingStyleOfType:(int)arg1 ;
+(const StateSpec*)stateForReading;
+(GQDSMapRef)defaultMapForStyleType:(int)arg1 ;
+(int)styleTypeForNodeName:(const char*)arg1 ;
+(id)createReplacementForMissingObject:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(bool)overridesBoolProperty:(int)arg1 value:(bool*)arg2 ;
-(bool)valueForBoolProperty:(int)arg1 ;
-(bool)hasValueForObjectProperty:(int)arg1 value:(id*)arg2 ;
-(void)setPropertyMap:(GQDSMapRef)arg1 ;
-(bool)hasValueForBoolProperty:(int)arg1 value:(bool*)arg2 ;
-(bool)hasValueForBoolProperty:(int)arg1 value:(bool*)arg2 wasOverriddenWithNull:(bool*)arg3 ;
-(bool)hasValueForIntProperty:(int)arg1 value:(int*)arg2 ;
-(bool)hasValueForIntProperty:(int)arg1 value:(int*)arg2 wasOverriddenWithNull:(bool*)arg3 ;
-(bool)hasValueForFloatProperty:(int)arg1 value:(float*)arg2 ;
-(bool)hasValueForFloatProperty:(int)arg1 value:(float*)arg2 wasOverriddenWithNull:(bool*)arg3 ;
-(bool)hasValueForDoubleProperty:(int)arg1 value:(double*)arg2 ;
-(bool)hasValueForDoubleProperty:(int)arg1 value:(double*)arg2 wasOverriddenWithNull:(bool*)arg3 ;
-(bool)hasValueForObjectProperty:(int)arg1 value:(id*)arg2 wasOverriddenWithNull:(bool*)arg3 ;
-(int)valueForIntProperty:(int)arg1 ;
-(bool)overridesIntProperty:(int)arg1 value:(int*)arg2 ;
-(float)valueForFloatProperty:(int)arg1 ;
-(bool)overridesFloatProperty:(int)arg1 value:(float*)arg2 ;
-(double)valueForDoubleProperty:(int)arg1 ;
-(bool)overridesDoubleProperty:(int)arg1 value:(double*)arg2 ;
-(id)valueForObjectProperty:(int)arg1 ;
-(bool)overridesObjectProperty:(int)arg1 value:(id*)arg2 ;
-(void)dealloc;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

