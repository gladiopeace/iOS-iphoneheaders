/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:26:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSDate, NSString;

@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic,copy) NSDate * publicationDate; 
@property (nonatomic,copy) NSString * source; 
+(id)newsLinkedAnswer;
+(id)newsLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSDate *)publicationDate;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(id)encodedClassName;
@end

