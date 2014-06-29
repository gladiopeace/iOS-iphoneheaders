/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class NSSet, KNSlideNode;

@interface KNSlideCollectionSelection : TSKSelection {

	NSSet* mSlideNodes;
	KNSlideNode* mSlideNodeToEdit;

}

@property (nonatomic,readonly) NSSet * slideNodes; 
@property (nonatomic,readonly) KNSlideNode * slideNodeToEdit; 
@property (getter=isEmpty,nonatomic,readonly) bool empty; 
-(void)saveToArchive:(SlideCollectionSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SlideCollectionSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)slideNodes;
-(id)initWithSlideNode:(id)arg1 ;
-(id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2 ;
-(id)slideNodeToEdit;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(bool)isEmpty;
@end

