/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/_NSXPCDistantObjectWithError.h>

@interface _NSXPCDistantObjectSynchronousWithError : _NSXPCDistantObjectWithError {

	double _timeout;

}

@property (assign) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 interface:(id)arg3 error:(/*^block*/id)arg4 timeout:(double)arg5 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
@end
