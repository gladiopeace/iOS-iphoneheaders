/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GQHXMLOutput <NSObject>
@required
-(void)startElement:(const char*)arg1;
-(void)endElementWithExpectedName:(const char*)arg1;
-(CFDataRef)createProgressiveHtml;
-(void)addCharRef:(const char*)arg1;
-(void)addXmlCharContent:(const char*)arg1;
-(CFDataRef)createHtml;
-(CFDataRef)createHtmlWithCss:(CFStringRef)arg1;
-(void)endElement;
-(void)setAttribute:(const char*)arg1 value:(const char*)arg2;
@end

