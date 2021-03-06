/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PKPaymentOptionGroupItem : NSObject {

	char _editable;
	NSString* _groupType;
	id _referenceObject;
	NSString* _title;
	NSString* _detail;

}

@property (nonatomic,readonly) NSString * groupType;                       //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) id referenceObject;                         //@synthesize referenceObject=_referenceObject - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * detail;                          //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) Class tableViewCellClass; 
@property (nonatomic,readonly) char isSelectable; 
@property (nonatomic,readonly) char isDeletable; 
@property (assign,getter=isEditable,nonatomic) char editable;              //@synthesize editable=_editable - In the implementation block
+(id)_singleLineGroupTypes;
-(id)referenceObject;
-(id)initWithReferenceObject:(id)arg1 title:(id)arg2 detail:(id)arg3 groupType:(id)arg4 ;
-(NSString *)groupType;
-(char)isEqualToOptionGroupItem:(id)arg1 ;
-(Class)tableViewCellClass;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)title;
-(char)isEditable;
-(void)setEditable:(char)arg1 ;
-(char)isSelectable;
-(char)isDeletable;
-(NSString *)detail;
@end

