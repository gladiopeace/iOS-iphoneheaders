/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSMutableDictionary;

@interface CPDumpEnum : NSObject {

	NSString* mTypeName;
	NSMutableDictionary* mValueToNameMap;
	NSMutableDictionary* mNameToValueMap;

}
-(void)dealloc;
-(id)initWithTypeName:(id)arg1 pairs:(CPDumpEnumPair*)arg2 ;
-(id)typeName;
-(id)valueForName:(id)arg1 ;
-(id)nameForValue:(int)arg1 ;
@end

