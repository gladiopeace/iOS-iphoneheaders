/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSXMLParser.h>
#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class CoreDAVXMLElementGenerator, NSSet, NSURL, CoreDAVItem, CoreDAVErrorItem, NSError;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {

	CoreDAVXMLElementGenerator* _rootElementGenerator;
	CoreDAVXMLElementGenerator* _rootErrorGenerator;
	NSSet* _parseHints;
	NSURL* _baseURL;

}

@property (retain) NSSet * parseHints;                                             //@synthesize parseHints=_parseHints - In the implementation block
@property (retain) NSURL * baseURL;                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) CoreDAVItem * rootElement; 
@property (readonly) CoreDAVErrorItem * rootError; 
@property (@dynamic,readonly) NSError * parserError; 
@property (retain) CoreDAVXMLElementGenerator * rootElementGenerator;              //@synthesize rootElementGenerator=_rootElementGenerator - In the implementation block
@property (retain) CoreDAVXMLElementGenerator * rootErrorGenerator;                //@synthesize rootErrorGenerator=_rootErrorGenerator - In the implementation block
+(bool)canHandleContentType:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)baseURL;
-(id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4 ;
-(void)setParseHints:(id)arg1 ;
-(bool)processData:(id)arg1 forTask:(id)arg2 ;
-(id)rootError;
-(id)parseHints;
-(id)rootErrorGenerator;
-(void)setRootErrorGenerator:(id)arg1 ;
-(void)setRootElementGenerator:(id)arg1 ;
-(id)rootElementGenerator;
-(void)setBaseURL:(id)arg1 ;
-(id)rootElement;
@end

