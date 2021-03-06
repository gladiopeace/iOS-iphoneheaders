/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (assign) id delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parser;
+(id)parseContentsOfURL:(id)arg1 ;
-(bool)parseData:(id)arg1 ;
-(void)setElementValue:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(BOOL)arg2 ;
-(void)parserError:(id)arg1 ;
-(id)elementValue;
-(void)parserWarning:(id)arg1 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(bool)parseContentsOfURL:(id)arg1 ;
-(bool)parseString:(id)arg1 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)baseURL;
-(void)setBaseURL:(id)arg1 ;
-(id)result;
-(id)error;
@end

