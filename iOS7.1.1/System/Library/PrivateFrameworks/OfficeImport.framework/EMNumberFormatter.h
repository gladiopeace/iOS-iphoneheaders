/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSMutableString;

@interface EMNumberFormatter : NSObject {

	CFNumberFormatterRef mGenericFormatter;
	CFNumberFormatterRef mBigNumberFormatter;
	CFNumberFormatterRef mSmallNumberFormatter;
	CFDateFormatterRef mDateFormatter;
	CFNumberFormatterRef mCurrencyFormatter;
	NSString* excelFormatString;
	NSMutableString* icuFormatString;
	bool mIsNegativeRed;
	unsigned short mCurrencySymbol;
	int formatType;

}
+(id)formatterForFormat:(id)arg1 ;
+(void)initFormatterCache;
+(void)releaseFormatterCache;
-(void)preprocessIcuString;
-(void)convertGenericNumberFormat;
-(void)dealloc;
-(CFDateFormatterRef)_dateFormatter;
-(id)formatDefault:(double)arg1 ;
-(int)formatType;
-(bool)isNegativeRed;
-(id)formatDate:(id)arg1 ;
-(id)formatPhoneNumber:(double)arg1 ;
-(id)formatCurrency:(double)arg1 ;
-(id)formatFraction:(double)arg1 ;
-(id)formatPercent:(double)arg1 ;
-(id)formatDoubleValue:(double)arg1 ;
-(id)initWithExcelFormatString:(id)arg1 ;
-(id)initWithDefaultFormatString;
-(void)convertDateFormat;
-(void)convertCurrencyFormat;
-(CFNumberFormatterRef)_genericFormatterForDouble;
-(CFNumberFormatterRef)_genericFormatterForPercent;
-(CFNumberFormatterRef)_bigNumberFormatter;
-(CFNumberFormatterRef)_smallNumberFormatter;
-(CFNumberFormatterRef)_genericFormatter;
-(CFNumberFormatterRef)_currencyFormatter;
-(id)icuFormatString;
@end

