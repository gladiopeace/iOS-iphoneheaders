/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXIPCServerMessageHandlerContext : NSObject {

	/*^block*/id _handler;
	id _target;
	SEL _selector;

}

@property (nonatomic,readonly) id handler;                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id target;                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;              //@synthesize selector=_selector - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end
