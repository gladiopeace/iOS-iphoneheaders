/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * seasonType; 
@property (nonatomic,copy) NSDate * start; 
+(id)seasonRange;
+(id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)start;
-(id)end;
-(void)setStart:(id)arg1 ;
-(void)setEnd:(id)arg1 ;
-(id)encodedClassName;
-(id)seasonType;
-(void)setSeasonType:(id)arg1 ;
@end

