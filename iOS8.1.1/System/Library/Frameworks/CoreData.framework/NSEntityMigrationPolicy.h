/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSEntityMigrationPolicy : NSObject
-(BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4 ;
-(BOOL)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4 ;
-(BOOL)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
@end
