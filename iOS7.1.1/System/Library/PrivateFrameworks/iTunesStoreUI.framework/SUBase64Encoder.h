/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUFilteringDataConsumer.h>

@interface SUBase64Encoder : SUFilteringDataConsumer {

	unsigned long long _left;
	unsigned char _leftovers[3];
	unsigned long long _line;
	unsigned long long _lineBreakLength;
	BOOL _padChar;
	const char* _table;

}

@property (assign,nonatomic) bool allowSlash; 
@property (assign,nonatomic) unsigned long long lineBreakLength;              //@synthesize lineBreakLength=_lineBreakLength - In the implementation block
@property (assign,nonatomic) BOOL padChar;                                    //@synthesize padChar=_padChar - In the implementation block
+(long long)maxConsumeLengthForReadLength:(long long)arg1 ;
+(long long)outputLengthForInputLength:(long long)arg1 ;
-(void)finish;
-(void)setAllowSlash:(bool)arg1 ;
-(void)setPadChar:(BOOL)arg1 ;
-(int)consumeData:(id)arg1 ;
-(id)initWithDataConsumer:(id)arg1 ;
-(unsigned long long)minimumConsumeLength;
-(void)setLineBreakLength:(unsigned long long)arg1 ;
-(bool)allowSlash;
-(void)setStandardLineBreakLength;
-(unsigned long long)lineBreakLength;
-(BOOL)padChar;
@end

