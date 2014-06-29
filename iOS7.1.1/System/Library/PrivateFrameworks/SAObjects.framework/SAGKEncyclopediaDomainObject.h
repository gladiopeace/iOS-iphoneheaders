/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * nameAnnotation; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)encyclopediaDomainObject;
+(id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)nameAnnotation;
-(void)setNameAnnotation:(id)arg1 ;
-(id)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(id)arg1 ;
-(id)structuredAnswers;
-(void)setStructuredAnswers:(id)arg1 ;
@end

