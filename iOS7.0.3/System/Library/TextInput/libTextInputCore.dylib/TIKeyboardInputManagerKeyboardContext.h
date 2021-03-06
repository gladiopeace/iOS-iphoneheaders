/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class TIKeyboardState, NSMutableArray;

@interface TIKeyboardInputManagerKeyboardContext : NSObject {

	/*^block*/ id _appendOperations;
	TIKeyboardState* _currentState;
	NSMutableArray* _operations;

}

@property (nonatomic,readonly) TIKeyboardState * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) NSMutableArray * operations;                 //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) id appendOperations; 
-(void)dealloc;
-(id)currentState;
-(void)insertText:(id)arg1 ;
-(void)clearInputForMarkedText;
-(void)acceptCandidate:(id)arg1 ;
-(void)unmarkText:(id)arg1 ;
-(void)insertTextAfterSelection:(id)arg1 ;
-(id)operations;
-(id)initWithKeyboardState:(id)arg1 ;
-(/*^block*/ id)appendOperations;
-(void)deleteBackward:(unsigned)arg1 shouldNotify:(BOOL)arg2 ;
-(void)deleteForward:(unsigned)arg1 shouldNotify:(BOOL)arg2 ;
-(void)setMarkedText:(id)arg1 withSelectedRange:(NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4 ;
@end

