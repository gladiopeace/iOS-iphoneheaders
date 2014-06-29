/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:00:19 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject;

@interface TIRemoteDataServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject<OS_dispatch_queue>* _dispatchQueue;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)sharedRemoteDataServer;
-(id)dispatchQueue;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

