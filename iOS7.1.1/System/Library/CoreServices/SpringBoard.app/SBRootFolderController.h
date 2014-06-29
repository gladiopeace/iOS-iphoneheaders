/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBFolderController.h>

@class SBRootFolder, SBRootFolderView;

@interface SBRootFolderController : SBFolderController

@property (nonatomic,retain) SBRootFolder * folder; 
@property (nonatomic,readonly) SBRootFolderView * contentView; 
+(Class)listViewClass;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(id)dockListView;
-(void)setDockOffscreenFraction:(float)arg1 ;
-(void)setDockVerticalStretch:(float)arg1 ;
-(BOOL)_listIndexIsVisible:(unsigned)arg1 ;
-(unsigned)_depth;
-(id)folderControllers;
-(BOOL)setCurrentPageIndex:(int)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)willRotateToInterfaceOrientation:(int)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(Class)_contentViewClass;
-(void)setIdleText:(id)arg1 ;
@end

