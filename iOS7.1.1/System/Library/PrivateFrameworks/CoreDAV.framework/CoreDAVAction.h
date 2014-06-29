/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CoreDAVAction : NSObject {

	int _action;
	id _context;
	id _changeContext;

}

@property (readonly) int action;                  //@synthesize action=_action - In the implementation block
@property (readonly) id context;                  //@synthesize context=_context - In the implementation block
@property (retain) id changeContext;              //@synthesize changeContext=_changeContext - In the implementation block
-(void)dealloc;
-(id)description;
-(int)action;
-(id)context;
-(id)initWithAction:(int)arg1 context:(id)arg2 ;
-(id)changeContext;
-(void)setChangeContext:(id)arg1 ;
@end

