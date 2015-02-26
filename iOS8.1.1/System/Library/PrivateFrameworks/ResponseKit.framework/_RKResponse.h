/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _RKResponse : NSObject {

	NSString* _text;
	unsigned long long _type;

}

@property (retain) NSString * text;                      //@synthesize text=_text - In the implementation block
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(id)init;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 type:(unsigned long long)arg2 ;
@end
