/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsVoices/Slot.h>

@class SlotSequence;

@interface CompoundSlot : Slot {

	SlotSequence* _slots;

}

@property (readonly) SlotSequence * slots;              //@synthesize slots=_slots - In the implementation block
-(id)initFromPlist:(id)arg1 ;
-(id)slots;
-(bool)matches:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithArray:(id)arg1 ;
-(id)reversed;
@end

