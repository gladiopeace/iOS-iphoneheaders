/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPOrder : AceObject <SAAceSerializable>

@property (assign,nonatomic) bool descending; 
@property (nonatomic,copy) NSString * mediaItemProperty; 
+(id)order;
+(id)orderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)mediaItemProperty;
-(void)setMediaItemProperty:(id)arg1 ;
-(bool)descending;
-(void)setDescending:(bool)arg1 ;
@end

