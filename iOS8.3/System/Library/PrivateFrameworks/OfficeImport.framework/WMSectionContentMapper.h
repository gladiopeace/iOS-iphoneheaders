/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDText;

@interface WMSectionContentMapper : CMMapper {

	WDText* wdText;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDText:(id)arg1 parent:(id)arg2 ;
-(void)updateTextFrameState:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)mapTextFrameAt:(id)arg1 withState:(id)arg2 ;
-(id)paragraphAtIndex:(unsigned)arg1 ;
-(void)mapTextFrameStyleTo:(id)arg1 withState:(id)arg2 ;
@end

