/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAObjectSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * aceVersion; 
@property (nonatomic,copy) NSString * classId; 
@property (nonatomic,copy) NSString * groupId; 
@property (nonatomic,copy) NSArray * supportedProperties; 
+(id)objectSupport;
+(id)objectSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)supportedProperties;
-(id)groupIdentifier;
-(id)groupId;
-(void)setGroupId:(id)arg1 ;
-(id)encodedClassName;
-(id)aceVersion;
-(void)setAceVersion:(id)arg1 ;
-(id)classId;
-(void)setClassId:(id)arg1 ;
-(void)setSupportedProperties:(id)arg1 ;
@end

