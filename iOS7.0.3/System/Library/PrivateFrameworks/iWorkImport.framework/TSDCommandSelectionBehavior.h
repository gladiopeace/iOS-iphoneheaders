/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommandSelectionBehavior.h>

@protocol TSKArchivedSelection, TSKModel, TSDCanvasEditor;
@class TSPObject, TSKDocumentRoot, NSObject;

@interface TSDCommandSelectionBehavior : TSKCommandSelectionBehavior {

	TSPObject<TSKArchivedSelection>* mArchivedOldCanvasSelection;
	TSPObject<TSKArchivedSelection>* mArchivedNewCanvasSelection;
	TSPObject<TSKModel>* mModelForSelection;
	TSKDocumentRoot* mDocumentRootForSelection;
	int mType;
	NSObject<TSDCanvasEditor>* mCanvasEditor;
	unsigned mSelectionFlags;

}

@property (nonatomic,readonly) NSObject<TSDCanvasEditor> * canvasEditor; 
@property (nonatomic,readonly) TSPObject<TSKModel> * modelForSelection; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(CommandSelectionBehaviorArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const CommandSelectionBehaviorArchive*)arg1 unarchiver:(id)arg2 ;
-(id)canvasEditor;
-(id)initWithCanvasEditor:(id)arg1 type:(int)arg2 ;
-(id)initWithCanvasEditor:(id)arg1 ;
-(id)initWithCanvasEditor:(id)arg1 type:(int)arg2 constructedInfos:(id)arg3 ;
-(id)modelForSelection;
-(id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3 selectionFlags:(unsigned)arg4 ;
-(id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3 ;
-(void)registerSelectionChangesForCommit;
-(void)p_registerSelectionChange:(id)arg1 withSelectionFlags:(unsigned)arg2 ;
-(id)destructiveSelectionChangeForSelection:(id)arg1 ;
-(void)p_registerSelectionInvalidation:(id)arg1 ;
-(void)p_adjustCommentVisibilityWhenNecessary;
-(void)registerSelectionChangesForUndo;
-(void)registerSelectionChangesForRedo;
-(void)dealloc;
@end

