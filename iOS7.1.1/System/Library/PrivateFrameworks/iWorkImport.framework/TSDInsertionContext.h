/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDInsertionContext : NSObject

@property (nonatomic,readonly) bool hasPreferredCenter; 
@property (getter=isPreferredCenterRequired,nonatomic,readonly) bool preferredCenterRequired; 
@property (nonatomic,readonly) CGPoint preferredCenter; 
@property (nonatomic,readonly) bool shouldEndEditing; 
@property (nonatomic,readonly) bool insertFloating; 
@property (nonatomic,readonly) bool insertFromDrag; 
@property (nonatomic,readonly) bool fromDragToInsertController; 
@property (nonatomic,readonly) bool insertWillBeDiscarded; 
@property (getter=isInteractive,nonatomic,readonly) bool interactive; 
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(bool)arg2 shouldEndEditing:(bool)arg3 fromDragToInsertController:(bool)arg4 insertWillBeDiscarded:(bool)arg5 ;
+(id)nonInteractiveInsertionContext;
+(id)nonInteractiveFloatingInsertionContext;
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(bool)arg2 fromDragToInsertController:(bool)arg3 insertWillBeDiscarded:(bool)arg4 ;
-(bool)shouldEndEditing;
-(bool)hasPreferredCenter;
-(bool)isPreferredCenterRequired;
-(CGPoint)preferredCenter;
-(bool)insertFloating;
-(bool)insertFromDrag;
-(bool)fromDragToInsertController;
-(bool)insertWillBeDiscarded;
-(id)init;
-(bool)isInteractive;
@end

