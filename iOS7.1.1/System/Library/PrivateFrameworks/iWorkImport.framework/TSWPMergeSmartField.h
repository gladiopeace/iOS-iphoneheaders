/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPlaceholderSmartField.h>

@class NSString;

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField {

	NSString* _property;
	NSString* _label;
	NSString* _key;
	int _category;
	bool _requiresFollowingWhitespace;
	NSString* _whitespace;
	NSString* _guid;
	NSString* _tableField;

}

@property (nonatomic,copy) NSString * property;                             //@synthesize property=_property - In the implementation block
@property (nonatomic,copy) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int category;                                  //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) bool requiresFollowingWhitespace;              //@synthesize requiresFollowingWhitespace=_requiresFollowingWhitespace - In the implementation block
@property (nonatomic,copy) NSString * whitespace;                           //@synthesize whitespace=_whitespace - In the implementation block
@property (nonatomic,copy) NSString * guid;                                 //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * tableField;                           //@synthesize tableField=_tableField - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(bool)allowsPasteAsSmartField;
-(const PlaceholderSmartFieldArchive*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1 ;
-(void)setRequiresFollowingWhitespace:(bool)arg1 ;
-(void)setWhitespace:(id)arg1 ;
-(void)setTableField:(id)arg1 ;
-(bool)requiresFollowingWhitespace;
-(id)whitespace;
-(id)tableField;
-(id)property;
-(void)setProperty:(id)arg1 ;
-(void)dealloc;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)key;
-(void)setCategory:(int)arg1 ;
-(int)category;
-(void)setKey:(id)arg1 ;
-(id)guid;
-(void)setGuid:(id)arg1 ;
@end

