/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject {

	NSMutableString* _text;
	NSMutableArray* _fragments;

}
-(void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(bool*)arg2 encoding:(unsigned)arg3 ;
-(id)quotedString:(unsigned)arg1 ;
-(void)dealloc;
-(id)string;
-(unsigned long long)fragmentCount;
-(void)getString:(id*)arg1 quoteLevel:(unsigned*)arg2 ofFragmentAtIndex:(unsigned long long)arg3 ;
-(void)appendString:(id)arg1 withQuoteLevel:(unsigned)arg2 ;
-(id)archivedRepresentation;
-(void)appendArchivedRepresentation:(id)arg1 ;
@end

