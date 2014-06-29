/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:16:41 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ClientConnection, EKEventPredicate;

@interface CADSearchOperation : NSOperation {

	ClientConnection* _connection;
	EKEventPredicate* _predicate;
	int _entityType;
	unsigned _clientPort;
	unsigned long long _clientData;

}
+(id)operationWithConnection:(id)arg1 entityType:(int)arg2 predicate:(id)arg3 clientPort:(unsigned)arg4 clientData:(unsigned long long)arg5 ;
-(id)initWithConnection:(id)arg1 entityType:(int)arg2 predicate:(id)arg3 clientPort:(unsigned)arg4 clientData:(unsigned long long)arg5 ;
-(void)dealloc;
-(void)main;
@end

