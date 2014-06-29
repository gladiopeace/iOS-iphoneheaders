/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {

	NSMutableSet* _comps;

}

@property (retain) NSMutableSet * comps;              //@synthesize comps=_comps - In the implementation block
@property (readonly) NSSet * compNames; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)compNames;
-(void)addComp:(id)arg1 ;
-(void)setComps:(id)arg1 ;
-(id)comps;
-(id)copyParseRules;
-(id)childrenToWrite;
-(id)componentsAsString;
@end

