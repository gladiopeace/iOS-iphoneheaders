/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodyElement_Private.h>

@class MFMessageBodyParser, NSArray;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {

	MFMessageBodyParser* _parser;
	NSArray* _nodes;
	unsigned long long _quoteLevel;
	unsigned long long _externalRetainCount;
	int _validAttributes;
	int _attributes;

}

@property (assign,nonatomic) MFMessageBodyParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) NSArray * nodes; 
-(unsigned long long)quoteLevel;
-(void)setParser:(id)arg1 ;
-(bool)isExternallyRetained;
-(void)setNodes:(id)arg1 ;
-(bool)_hasValueForAttributes:(int)arg1 ;
-(void)_setValue:(int)arg1 forAttributes:(int)arg2 ;
-(id)retainExternally;
-(void)releaseExternally;
-(int)valueForAttributes:(int)arg1 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(unsigned long long)getQuoteLevel;
-(id)parser;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
-(id)nodes;
@end

