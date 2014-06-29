/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject {

	unsigned short mSeparator;
	CFArrayRef mFormatters;
	NSMutableSet* mFormatStrings;

}
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(bool)arg2 succesTSUlFormatString:(const _CFString*)arg3 ;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 ;
-(unsigned short)separator;
@end

