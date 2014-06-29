/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface ADApplicationState : NSObject {

	unsigned state;
	int arch;
	double time;
	NSData* uuid;
	NSString* path;

}

@property (assign,nonatomic) unsigned state; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) int arch; 
@property (nonatomic,retain) NSData * uuid; 
@property (nonatomic,retain) NSString * path; 
-(int)arch;
-(void)setArch:(int)arg1 ;
-(void)dealloc;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)path;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setPath:(id)arg1 ;
-(id)uuid;
-(void)setUuid:(id)arg1 ;
@end

