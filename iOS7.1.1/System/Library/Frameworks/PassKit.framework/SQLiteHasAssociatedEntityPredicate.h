/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLitePredicate.h>
#import <CoreFoundation/NSCopying.h>

@class SQLitePredicate;

@interface SQLiteHasAssociatedEntityPredicate : SQLitePredicate <NSCopying> {

	Class _associatedEntityClass;
	SQLitePredicate* _associatedPredicate;

}
+(id)predicateWithAssociatedEntityClass:(Class)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
@end

