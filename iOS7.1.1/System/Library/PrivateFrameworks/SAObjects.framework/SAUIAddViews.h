/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dialogPhase; 
@property (nonatomic,copy) NSString * displayTarget; 
@property (assign,nonatomic) bool scrollToTop; 
@property (assign,nonatomic) bool temporary; 
@property (nonatomic,copy) NSArray * views; 
+(id)addViews;
+(id)addViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setViews:(id)arg1 ;
-(id)views;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)dialogPhase;
-(void)setDialogPhase:(id)arg1 ;
-(id)displayTarget;
-(void)setDisplayTarget:(id)arg1 ;
-(void)setScrollToTop:(bool)arg1 ;
-(bool)temporary;
-(void)setTemporary:(bool)arg1 ;
-(bool)scrollToTop;
@end

