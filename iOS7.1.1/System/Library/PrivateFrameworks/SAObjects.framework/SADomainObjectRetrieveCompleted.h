/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class NSArray, NSString;

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (nonatomic,copy) NSArray * objects; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)domainObjectRetrieveCompleted;
+(id)domainObjectRetrieveCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)objects;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setObjects:(id)arg1 ;
@end

