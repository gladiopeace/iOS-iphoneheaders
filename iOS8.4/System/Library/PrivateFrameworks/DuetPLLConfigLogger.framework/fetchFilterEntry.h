/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSDictionary;

@interface fetchFilterEntry : NSObject {

	NSDate* _when;
	NSDictionary* _what;

}

@property (retain) NSDate * when;                    //@synthesize when=_when - In the implementation block
@property (retain) NSDictionary * what;              //@synthesize what=_what - In the implementation block
-(NSDate *)when;
-(id)init;
-(void)setWhen:(NSDate *)arg1 ;
-(NSDictionary *)what;
-(void)setWhat:(NSDictionary *)arg1 ;
@end
