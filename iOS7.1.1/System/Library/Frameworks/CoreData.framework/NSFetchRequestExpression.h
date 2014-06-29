/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression;

@interface NSFetchRequestExpression : NSExpression {

	void* _reserved1;
	void* _reserved2;
	void* _reserved3;
	void* _reserved4;
	NSExpression* _fetchRequest;
	NSExpression* _managedObjectContext;
	struct {
		unsigned isCountOnly : 1;
		unsigned _RESERVED : 31;
	}  _flags;

}
+(id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(bool)arg3 ;
-(unsigned long long)expressionType;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(bool)isCountOnlyRequest;
-(id)requestExpression;
-(id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(bool)arg3 ;
-(id)predicateFormat;
-(id)contextExpression;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
@end

