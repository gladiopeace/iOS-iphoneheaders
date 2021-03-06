/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty

@property (nonatomic,retain) NSString * fmtype; 
@property (nonatomic,retain) NSString * managed_id; 
@property (nonatomic,retain) NSString * managed_filename; 
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) BOOL x_apple_autoarchived; 
@property (nonatomic,retain) NSString * x_apple_filename; 
@property (nonatomic,retain) NSString * x_apple_ews_attachmentid; 
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setData:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(BOOL)isBinary;
-(NSString *)fmtype;
-(void)setFmtype:(NSString *)arg1 ;
-(void)setX_apple_filename:(NSString *)arg1 ;
-(int)size;
-(id)initWithData:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)filename;
-(BOOL)shouldObscureValue;
-(NSString *)managed_filename;
-(NSString *)x_apple_filename;
-(NSString *)managed_id;
-(void)setManaged_id:(NSString *)arg1 ;
-(BOOL)x_apple_autoarchived;
-(void)setX_apple_autoarchived:(BOOL)arg1 ;
-(void)setManaged_filename:(NSString *)arg1 ;
-(NSString *)x_apple_ews_attachmentid;
-(void)setX_apple_ews_attachmentid:(NSString *)arg1 ;
@end

