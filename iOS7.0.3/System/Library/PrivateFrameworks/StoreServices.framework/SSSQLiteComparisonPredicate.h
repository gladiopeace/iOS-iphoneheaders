/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePropertyPredicate.h>
#import <CoreFoundation/NSCopying.h>

@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate <NSCopying> {

	int _comparisonType;
	id _value;

}

@property (nonatomic,readonly) int comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) id value;                        //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3 ;
-(int)comparisonType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)value;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)_comparisonTypeString;
@end

