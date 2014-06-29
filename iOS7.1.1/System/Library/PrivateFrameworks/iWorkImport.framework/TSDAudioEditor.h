/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDMediaEditor.h>

@class NSSet, TSDMovieInfo;

@interface TSDAudioEditor : TSDMediaEditor

@property (nonatomic,readonly) NSSet * movieInfos; 
@property (nonatomic,readonly) TSDMovieInfo * firstMovieInfo; 
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)firstMovieInfo;
-(id)movieInfos;
-(void)setPropertyValue:(id)arg1 forMovieProperty:(int)arg2 ;
@end

