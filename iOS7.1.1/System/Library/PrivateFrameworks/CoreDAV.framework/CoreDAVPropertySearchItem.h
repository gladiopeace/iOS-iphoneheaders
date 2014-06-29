/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem {

	CoreDAVLeafItem* _prop;
	NSString* _match;
	NSString* _matchTypeAttribute;

}

@property (retain) CoreDAVLeafItem * prop;                     //@synthesize prop=_prop - In the implementation block
@property (retain) NSString * match;                           //@synthesize match=_match - In the implementation block
@property (retain) NSString * matchTypeAttribute;              //@synthesize matchTypeAttribute=_matchTypeAttribute - In the implementation block
-(int)wellKnownPrincipalSearchType;
-(id)match;
-(void)setMatch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)prop;
-(void)setProp:(id)arg1 ;
-(id)matchTypeAttribute;
-(id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setMatchTypeAttribute:(id)arg1 ;
-(void)write:(id)arg1 ;
@end

