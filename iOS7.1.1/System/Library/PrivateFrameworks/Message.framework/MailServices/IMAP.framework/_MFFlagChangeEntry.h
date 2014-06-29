/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface _MFFlagChangeEntry : NSObject {

	NSString* path;
	unsigned uid;
	NSDictionary* changes;
	unsigned connectionTag;
	double commitTime;

}

@property (readonly) NSString * path; 
@property (readonly) unsigned uid; 
@property (readonly) NSDictionary * changes; 
@property (assign) double commitTime; 
@property (assign) unsigned connectionTag; 
-(double)commitTime;
-(void)setCommitTime:(double)arg1 ;
-(void)dealloc;
-(id)path;
-(unsigned)uid;
-(id)initWithPath:(id)arg1 UID:(unsigned)arg2 changes:(id)arg3 ;
-(unsigned)connectionTag;
-(void)setConnectionTag:(unsigned)arg1 ;
-(id)changes;
@end

