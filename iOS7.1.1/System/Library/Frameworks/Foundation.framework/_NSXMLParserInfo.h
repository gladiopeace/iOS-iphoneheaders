/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSError, NSMutableArray, NSMapTable, NSData;

@interface _NSXMLParserInfo : NSObject {

	xmlSAXHandler* saxHandler;
	xmlParserCtxt* parserContext;
	unsigned long long parserFlags;
	NSError* error;
	NSMutableArray* namespaces;
	NSMapTable* slowStringMap;
	bool delegateAborted;
	bool haveDetectedEncoding;
	NSData* bomChunk;
	unsigned long long chunkSize;

}
@end

