/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface PedometryCompassMotionParameters : PBCodable <NSCopying> {

	float _notWalkingVariancePerAxisPerSecond;
	float _timeheadingAverageChangeDirectionRate;
	float _walkMore;
	SCD_Struct_In2 _has;

}

@property (assign,nonatomic) char hasNotWalkingVariancePerAxisPerSecond; 
@property (assign,nonatomic) float notWalkingVariancePerAxisPerSecond;                   //@synthesize notWalkingVariancePerAxisPerSecond=_notWalkingVariancePerAxisPerSecond - In the implementation block
@property (assign,nonatomic) char hasWalkMore; 
@property (assign,nonatomic) float walkMore;                                             //@synthesize walkMore=_walkMore - In the implementation block
@property (assign,nonatomic) char hasTimeheadingAverageChangeDirectionRate; 
@property (assign,nonatomic) float timeheadingAverageChangeDirectionRate;                //@synthesize timeheadingAverageChangeDirectionRate=_timeheadingAverageChangeDirectionRate - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setNotWalkingVariancePerAxisPerSecond:(float)arg1 ;
-(void)setHasNotWalkingVariancePerAxisPerSecond:(char)arg1 ;
-(char)hasNotWalkingVariancePerAxisPerSecond;
-(void)setWalkMore:(float)arg1 ;
-(void)setHasWalkMore:(char)arg1 ;
-(char)hasWalkMore;
-(void)setTimeheadingAverageChangeDirectionRate:(float)arg1 ;
-(void)setHasTimeheadingAverageChangeDirectionRate:(char)arg1 ;
-(char)hasTimeheadingAverageChangeDirectionRate;
-(float)notWalkingVariancePerAxisPerSecond;
-(float)walkMore;
-(float)timeheadingAverageChangeDirectionRate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

