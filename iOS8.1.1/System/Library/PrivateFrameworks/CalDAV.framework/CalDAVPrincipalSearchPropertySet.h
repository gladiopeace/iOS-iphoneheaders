/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {

	NSSet* _properties;

}

@property (nonatomic,readonly) NSSet * stringProperties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) BOOL supportsPropertySearch; 
+(id)searchSetWithProperties:(id)arg1 ;
-(void)dealloc;
-(BOOL)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)initWithSearchProperties:(id)arg1 ;
-(BOOL)isEqualToPropertySet:(id)arg1 ;
-(id)initWithStringProperties:(id)arg1 ;
-(NSSet *)stringProperties;
-(BOOL)supportsPropertySearch;
-(BOOL)supportsWellKnownType:(int)arg1 ;
@end

