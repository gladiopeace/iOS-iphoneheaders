/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {

	CoreDAVHrefItem* _href;

}

@property (retain) CoreDAVHrefItem * href;              //@synthesize href=_href - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(id)href;
-(void)setHref:(id)arg1 ;
-(void)write:(id)arg1 ;
@end

