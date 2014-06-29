/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIResponderForwardable <NSObject>
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (nonatomic,readonly) UIWindow * window; 
@required
-(id)window;
-(id)gestureRecognizers;
-(void)_setForwardablePhase:(long long)arg1;
-(id)_responder;
-(void)_setResponder:(id)arg1;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(long long)arg1;
-(bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
-(long long)_forwardablePhase;
-(bool)_isAbandoningForwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;
@end

