/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDInsertionContext : NSObject

@property (nonatomic,readonly) BOOL hasPreferredCenter; 
@property (getter=isPreferredCenterRequired,nonatomic,readonly) BOOL preferredCenterRequired; 
@property (nonatomic,readonly) CGPoint preferredCenter; 
@property (nonatomic,readonly) BOOL shouldEndEditing; 
@property (nonatomic,readonly) BOOL insertFloating; 
@property (nonatomic,readonly) BOOL insertFromDrag; 
@property (nonatomic,readonly) BOOL fromDragToInsertController; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertFloating:(BOOL)arg5 ;
+(id)nonInteractiveInsertionContext;
+(id)nonInteractiveFloatingInsertionContext;
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 fromDragToInsertController:(BOOL)arg3 insertFloating:(BOOL)arg4 ;
-(BOOL)hasPreferredCenter;
-(BOOL)isPreferredCenterRequired;
-(CGPoint)preferredCenter;
-(BOOL)shouldEndEditing;
-(BOOL)insertFloating;
-(BOOL)insertFromDrag;
-(BOOL)fromDragToInsertController;
-(id)init;
-(BOOL)isInteractive;
@end

