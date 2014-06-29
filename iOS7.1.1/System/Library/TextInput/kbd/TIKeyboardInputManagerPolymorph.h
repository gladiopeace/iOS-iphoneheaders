/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:00:19 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TIKeyboardInputManagerBase, NSMutableDictionary;

@interface TIKeyboardInputManagerPolymorph : NSObject {

	TIKeyboardInputManagerBase* _inputManager;
	NSMutableDictionary* _availableInputManagers;

}

@property (nonatomic,retain) TIKeyboardInputManagerBase * inputManager;                 //@synthesize inputManager=_inputManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * availableInputManagers;              //@synthesize availableInputManagers=_availableInputManagers - In the implementation block
-(void)setInputManagerForInputMode:(id)arg1 withClass:(Class)arg2 ;
-(id)availableInputManagers;
-(void)setInputManager:(id)arg1 ;
-(id)keyboardStateFromRequest:(id)arg1 ;
-(void)setInputManagerForKeyboardState:(id)arg1 ;
-(void)setAvailableInputManagers:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)inputManager;
-(void)handleRequest:(id)arg1 ;
@end

