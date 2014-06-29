/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface AddressProblemItem : NSObject {

	NSString* _title;
	NSString* _value;
	NSString* _originalValue;
	NSString* _objectName;
	int _addressType;
	NSMutableArray* _items;
	BOOL isMarkedAsWrong;

}

@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * originalValue;              //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,retain) NSString * objectName;                 //@synthesize objectName=_objectName - In the implementation block
@property (assign,nonatomic) BOOL isMarkedAsWrong; 
@property (assign,nonatomic) int addressType;                       //@synthesize addressType=_addressType - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                //@synthesize items=_items - In the implementation block
+(id)addressItemWithTitle:(id)arg1 objectName:(id)arg2 addressType:(int)arg3 ;
-(id)initWithTitle:(id)arg1 objectName:(id)arg2 addressType:(int)arg3 ;
-(void)setAddressType:(int)arg1 ;
-(BOOL)isMarkedAsWrong;
-(int)addressType;
-(BOOL)isEdited;
-(void)setIsMarkedAsWrong:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)title;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void).cxx_destruct;
-(void)setOriginalValue:(id)arg1 ;
-(id)originalValue;
-(void)setObjectName:(id)arg1 ;
-(id)objectName;
@end

