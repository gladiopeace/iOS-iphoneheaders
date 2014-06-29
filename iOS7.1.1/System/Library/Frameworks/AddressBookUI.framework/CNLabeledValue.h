/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface CNLabeledValue : NSObject <NSCopying> {

	int _multiValueIdentifier;
	NSString* _label;
	id _value;

}

@property (readonly) NSString * identifier; 
@property (readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (readonly) id value;                               //@synthesize value=_value - In the implementation block
@property (readonly) int multiValueIdentifier; 
@property (readonly) NSString * localizedLabel; 
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)allCustomLabels;
+(id)labeledValueWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3 ;
+(id)builtinLabelsForProperty:(id)arg1 ;
+(id)defaultLabels;
+(id)allLabels;
-(void)setMultiValueIdentifier:(int)arg1 ;
-(int)multiValueIdentifier;
-(id)localizedLabel;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(id)initWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3 ;
-(bool)isEqualToLabelledValue:(id)arg1 includeIdentifiers:(bool)arg2 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(bool)isEqualToLabelledValue:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)value;
-(id)label;
-(id)identifier;
@end

