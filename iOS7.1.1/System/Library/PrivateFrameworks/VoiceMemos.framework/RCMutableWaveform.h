/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveform.h>

@interface RCMutableWaveform : RCWaveform
-(id)segments;
-(id)classForCoder;
-(bool)clipToTimeRange:(SCD_Struct_RC0)arg1 ;
-(void)addSegment:(id)arg1 ;
-(id)_mutableSegmentsIntersectingTimeRange:(SCD_Struct_RC0)arg1 intersectionRange:(NSRange*)arg2 ;
-(void)_mergeBoundarySegmentsInArray:(id)arg1 ;
-(id)_mutableSegmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2 ;
-(void)addSegments:(id)arg1 ;
-(void)removeSegment:(id)arg1 ;
@end

