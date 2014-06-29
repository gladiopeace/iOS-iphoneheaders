/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <Foundation/NSLocking.h>

@interface _PFLock : NSObject <NSLocking> {

	int _cd_rc;
	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	unsigned long long _count;

}
+(void)initialize;
-(bool)tryLock;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end

