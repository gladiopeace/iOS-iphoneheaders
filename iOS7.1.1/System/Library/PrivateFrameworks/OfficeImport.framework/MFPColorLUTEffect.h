/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/MFPEffect.h>

@interface MFPColorLUTEffect : MFPEffect {

	unsigned char mLutA[256];
	unsigned char mLutR[256];
	unsigned char mLutG[256];
	unsigned char mLutB[256];

}
+(id)GUID;
-(id)initWithLUTA:(unsigned char)arg1 LUTR:(unsigned char)arg2 LUTG:(unsigned char)arg3 LUTB:(unsigned char)arg4 ;
@end

