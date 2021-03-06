/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TIKeyboardInputManagerChinese.h>
#import <TextInput_zh/TIKeyboardInputManagerChineseCompletion.h>

@class NSMutableString, NSString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {

	NSMutableString* _searchString;
	BOOL _keepRemainingInput;
	NSString* _remainingInput;
	BOOL _previousActionWasAutoConfirmation;

}

@property (nonatomic,readonly) NSMutableString * searchString;                    //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSString * remainingInput;                           //@synthesize remainingInput=_remainingInput - In the implementation block
@property (assign,nonatomic) BOOL previousActionWasAutoConfirmation;              //@synthesize previousActionWasAutoConfirmation=_previousActionWasAutoConfirmation - In the implementation block
-(void)dealloc;
-(BOOL)hasCandidates;
-(BOOL)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned)initialSelectedIndex;
-(id)keyboardBehaviors;
-(void)clearInput;
-(BOOL)usesAutoDeleteWord;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(BOOL)acceptInputString:(id)arg1 ;
-(id)searchString;
-(BOOL)shouldLookForCompletionCandidates;
-(void)setPreviousActionWasAutoConfirmation:(BOOL)arg1 ;
-(void)cancelCandidatesThread;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(void)setRemainingInput:(id)arg1 ;
-(BOOL)previousActionWasAutoConfirmation;
-(void)loadDictionaries;
-(void)setCollatorLocale;
-(void)acceptInput;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(void)inputLocationChanged;
-(void)addInput:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/ id)arg3 ;
-(id)sortingMethods;
-(void)didAcceptCandidate:(id)arg1 ;
-(id)remainingInput;
@end

