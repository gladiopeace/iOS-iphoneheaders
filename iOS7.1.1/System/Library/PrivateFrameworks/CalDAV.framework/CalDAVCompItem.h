/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {

	NSString* _nameAttribute;

}

@property (retain) NSString * nameAttribute;              //@synthesize nameAttribute=_nameAttribute - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setNameAttribute:(id)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)parserFoundAttributes:(id)arg1 ;
-(id)nameAttribute;
-(void)write:(id)arg1 ;
@end

