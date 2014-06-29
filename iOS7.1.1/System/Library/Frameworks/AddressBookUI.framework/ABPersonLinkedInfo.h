/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ABUIPerson;

@interface ABPersonLinkedInfo : NSObject {

	NSString* _type;
	NSString* _name;
	ABUIPerson* _person;
	bool _unified;

}

@property (retain) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (retain) ABUIPerson * person;                 //@synthesize person=_person - In the implementation block
@property (getter=isUnified) bool unified;              //@synthesize unified=_unified - In the implementation block
-(bool)isUnified;
-(void)setUnified:(bool)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(id)arg1 ;
-(id)type;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)person;
-(void)setPerson:(id)arg1 ;
@end

