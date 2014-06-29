/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:54:57 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSXMLParserDelegate.h>

@class NSMutableArray, NSString;

@interface XMLRPCEventBasedParserDelegate : NSObject <NSXMLParserDelegate> {

	XMLRPCEventBasedParserDelegate* myParent;
	NSMutableArray* myChildren;
	int myElementType;
	NSString* myElementKey;
	id myElementValue;

}
-(void)setElementType:(int)arg1 ;
-(int)elementType;
-(void)setElementKey:(id)arg1 ;
-(id)elementKey;
-(BOOL)isDictionaryElementType:(int)arg1 ;
-(id)parseInteger:(id)arg1 ;
-(id)parseDouble:(id)arg1 ;
-(id)parseBoolean:(id)arg1 ;
-(id)parseDate:(id)arg1 ;
-(void)addElementValueToParent;
-(id)parseDateString:(id)arg1 withFormat:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(id)parseData:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)setElementValue:(id)arg1 ;
-(id)elementValue;
-(id)parseString:(id)arg1 ;
-(void)dealloc;
-(void)setParent:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(id)parent;
@end

