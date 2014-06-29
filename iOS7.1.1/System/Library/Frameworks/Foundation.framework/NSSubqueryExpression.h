/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {

	NSExpression* _collection;
	NSExpression* _variableExpression;
	NSPredicate* _subpredicate;

}
+(bool)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(void)allowEvaluation;
-(id)collection;
-(id)variableExpression;
-(id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicateFormat;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
-(bool)_shouldUseParensWithDescription;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)variable;
-(id)predicate;
@end

