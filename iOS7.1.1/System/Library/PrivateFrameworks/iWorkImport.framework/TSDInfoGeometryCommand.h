/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>
#import <iWorkImport/TSDCoalesceableInfoPositioningCommmand.h>
#import <iWorkImport/TSDPropagatableCommand.h>

@protocol TSDChangeableInfo;
@class TSPObject, TSDInfoGeometry;

@interface TSDInfoGeometryCommand : TSKCommand <TSDCoalesceableInfoPositioningCommmand, TSDPropagatableCommand> {

	TSPObject<TSDChangeableInfo>* mInfo;
	TSDInfoGeometry* mOldGeometry;
	TSDInfoGeometry* mNewGeometry;
	bool mDidMatchObjectPlaceholderGeometry;
	bool mShouldClearObjectPlaceholderFlag;

}

@property (nonatomic,readonly) TSPObject<TSDChangeableInfo> * info; 
@property (nonatomic,readonly) TSDInfoGeometry * newGeometry; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithInfo:(id)arg1 newGeometry:(id)arg2 context:(id)arg3 ;
-(id)initWithInfo:(id)arg1 newGeometry:(id)arg2 shouldClearObjectPlaceholderFlag:(bool)arg3 context:(id)arg4 ;
-(bool)modifiesAnyObjectPassingTest:(/*^block*/ id)arg1 ;
-(void)populateChangePropagationMapAfterCommit:(id)arg1 ;
-(void)p_do;
-(bool)shouldBeCoalescedWithInsertionCommandOfInfo:(id)arg1 ;
-(id)newGeometry;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)info;
-(bool)process;
-(id)actionString;
@end

