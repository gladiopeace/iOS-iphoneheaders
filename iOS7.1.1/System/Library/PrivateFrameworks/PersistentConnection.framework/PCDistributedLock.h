/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSLocking.h>

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {

	NSString* _path;
	int _fd;

}
-(bool)tryLock;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(bool)_lockBlocking:(bool)arg1 ;
@end

