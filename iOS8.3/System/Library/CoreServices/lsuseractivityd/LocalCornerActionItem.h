/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:23:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/lsuseractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <lsuseractivityd/CornerActionItem.h>

@class LSUserActivityClientProcess;

@interface LocalCornerActionItem : CornerActionItem {

	LSUserActivityClientProcess* _originatingClient;

}
-(id)initWithUUID:(id)arg1 type:(unsigned)arg2 options:(id)arg3 originatingClient:(id)arg4 ;
-(id)originatingClient;
-(void)setOriginatingClient:(id)arg1 ;
@end

