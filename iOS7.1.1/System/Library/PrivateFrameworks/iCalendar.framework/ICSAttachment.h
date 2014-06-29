/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty

@property (retain) NSString * fmtype; 
@property (retain) NSString * managed_id; 
@property (retain) NSString * managed_filename; 
@property (assign) int size; 
@property (assign) bool x_apple_autoarchived; 
@property (retain) NSString * x_apple_filename; 
@property (retain) NSString * x_apple_ews_attachmentid; 
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setData:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)fmtype;
-(void)setFmtype:(id)arg1 ;
-(void)setX_apple_filename:(id)arg1 ;
-(int)size;
-(id)initWithData:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(bool)isBinary;
-(id)filename;
-(id)managed_filename;
-(id)x_apple_filename;
-(id)managed_id;
-(void)setManaged_id:(id)arg1 ;
-(bool)x_apple_autoarchived;
-(void)setX_apple_autoarchived:(bool)arg1 ;
-(void)setManaged_filename:(id)arg1 ;
-(id)x_apple_ews_attachmentid;
-(void)setX_apple_ews_attachmentid:(id)arg1 ;
@end

