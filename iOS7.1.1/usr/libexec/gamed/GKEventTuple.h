/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GKEventTuple : NSObject {

	unsigned _eventType;
	id _context;

}

@property (assign,nonatomic) unsigned eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) id context;                        //@synthesize context=_context - In the implementation block
-(unsigned)eventType;
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
@end

