/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:59:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <HelpKit/APDGenericData.h>
#import <HelpKit/NSCopying.h>

@class NSString;

@interface APDNavigationItem : APDGenericData <NSCopying> {

	char _hasRead;
	APDNavigationItem* _parent;
	int _level;
	NSString* _identifier;
	NSString* _name;
	NSString* _icon;

}

@property (assign,nonatomic,__weak) APDNavigationItem * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) char hasRead;                                   //@synthesize hasRead=_hasRead - In the implementation block
@property (assign,nonatomic) int level;                                      //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * icon;                                  //@synthesize icon=_icon - In the implementation block
-(NSString *)icon;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIcon:(NSString *)arg1 ;
-(char)hasRead;
-(void)setHasRead:(char)arg1 ;
-(APDNavigationItem *)parent;
-(void)setParent:(APDNavigationItem *)arg1 ;
@end

