/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {

	NSString* _correlationTableName;
	NSString* _columnName;
	NSString* _orderColumnName;

}
-(id)columnName;
-(id)correlationTableName;
-(id)inverseColumnName;
-(id)inverseOrderColumnName;
-(id)orderColumnName;
-(unsigned)columnSQLType;
-(unsigned)orderColumnSQLType;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setColumnName:(id)arg1 ;
-(bool)isMaster;
-(bool)isReflexive;
-(id)inverseManyToMany;
-(void)_setInverseManyToMany:(id)arg1 ;
-(void)_setCorrelationTableName:(id)arg1 ;
-(void)_setOrderColumnName:(id)arg1 ;
-(bool)isTableSchemaEqual:(id)arg1 ;
-(void)dealloc;
@end

