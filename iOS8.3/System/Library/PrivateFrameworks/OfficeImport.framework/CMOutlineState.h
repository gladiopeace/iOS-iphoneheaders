/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CMOutlineState : NSObject {

	unsigned counter[10];
	unsigned listId;

}
-(id)init;
-(void)reset;
-(unsigned)counterAtLevel:(unsigned char)arg1 ;
-(void)increaseCounterAtLevel:(unsigned char)arg1 ;
-(unsigned)listId;
-(id)initWithListId:(unsigned)arg1 ;
-(void)setCounterTo:(unsigned)arg1 atLevel:(unsigned char)arg2 ;
@end

