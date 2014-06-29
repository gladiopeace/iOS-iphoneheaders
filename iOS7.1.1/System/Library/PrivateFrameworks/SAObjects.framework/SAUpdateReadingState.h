/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * readingStateId; 
@property (assign,nonatomic) long long updatedGroupIndex; 
@property (assign,nonatomic) long long updatedItemIndex; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)updateReadingState;
+(id)updateReadingStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)readingStateId;
-(void)setReadingStateId:(id)arg1 ;
-(long long)updatedGroupIndex;
-(void)setUpdatedGroupIndex:(long long)arg1 ;
-(long long)updatedItemIndex;
-(void)setUpdatedItemIndex:(long long)arg1 ;
@end

