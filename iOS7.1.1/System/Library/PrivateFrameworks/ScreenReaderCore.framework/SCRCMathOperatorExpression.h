/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression {

	unsigned short _operatorChar;

}

@property (nonatomic,readonly) unsigned short operatorChar;              //@synthesize operatorChar=_operatorChar - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)mathMLString;
-(bool)canBeUsedWithRange;
-(bool)isNaturalSuperscript;
-(bool)isEllipsis;
-(bool)isTermSeparator;
-(bool)isOperationSymbol;
-(bool)isFenceDelimiter;
-(id)latexFormatStringAsOver;
-(bool)_isIntegral;
-(bool)_isUnionOrIntersection;
-(bool)_isSummation;
-(bool)_isRingOperator;
-(bool)_isInvisibleCharacter;
-(bool)_isMinusSign;
-(unsigned short)operatorChar;
@end

