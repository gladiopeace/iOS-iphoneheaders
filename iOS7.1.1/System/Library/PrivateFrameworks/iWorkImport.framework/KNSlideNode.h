/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSKSearchTarget.h>
#import <iWorkImport/TSCEResolverContainer.h>

@class TSPLazyReference, NSArray, NSMutableDictionary, NSString, KNAbstractSlide, NSDictionary;

@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSKSearchTarget, TSCEResolverContainer> {

	TSPLazyReference* mSlideReference;
	NSArray* mChildren;
	KNSlideNode* mParent;
	NSMutableDictionary* mThumbnails;
	bool mThumbnailsAreDirty;
	bool mIsHidden;
	bool mIsCollapsed;
	bool mIsCollapsedInOutlineView;
	bool mHasBodyInOutlineView;
	bool mHasTransition;
	bool mHasNote;
	bool mSlideNumberVisible;
	unsigned long long mSlideSpecificHyperlinksCount;
	NSString* mClassicUniqueID;
	NSString* mUniqueIdentifier;
	NSString* mCopiedFromSlideIdentifier;
	unsigned long long mEventCount;
	unsigned mTableNameCounter;

}

@property (nonatomic,retain) KNAbstractSlide * slide; 
@property (nonatomic,readonly) bool hasChildren; 
@property (nonatomic,retain) NSArray * children; 
@property (assign,nonatomic) KNSlideNode * parent; 
@property (nonatomic,readonly) NSDictionary * thumbnails; 
@property (assign,nonatomic) bool thumbnailsAreDirty; 
@property (assign,getter=isHidden,nonatomic) bool hidden; 
@property (assign,getter=isCollapsed,nonatomic) bool collapsed; 
@property (assign,getter=isCollapsedInOutlineView,nonatomic) bool collapsedInOutlineView; 
@property (assign,nonatomic) bool hasBodyInOutlineView; 
@property (assign,nonatomic) bool hasTransition; 
@property (assign,nonatomic) bool hasNote; 
@property (assign,nonatomic) bool isSlideNumberVisible; 
@property (assign,nonatomic) unsigned long long slideSpecificHyperlinksCount; 
@property (nonatomic,readonly) bool hasBuilds; 
@property (nonatomic,readonly) unsigned long long eventCount; 
@property (assign,nonatomic) NSString * classicUniqueID; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSString * copiedFromSlideIdentifier; 
@property (nonatomic,readonly) KNSlideNode * next; 
@property (nonatomic,readonly) KNSlideNode * previous; 
@property (nonatomic,readonly) KNSlideNode * nextSkippingCollapsed; 
@property (nonatomic,readonly) KNSlideNode * previousSkippingCollapsed; 
@property (nonatomic,readonly) KNSlideNode * nextSkippingHidden; 
@property (nonatomic,readonly) KNSlideNode * previousSkippingHidden; 
+(id)parentSlideNodeForInfo:(id)arg1 ;
+(id)lastSlideUnderSlideNode:(id)arg1 ;
+(id)nodesAndDescendantsForNodes:(id)arg1 includeSkippedSlideNodes:(bool)arg2 includingCollapsedSlideNodes:(bool)arg3 ;
+(id)p_nextAfterSlideNode:(id)arg1 ;
+(id)p_previousToSlideNode:(id)arg1 ;
+(id)slideNodeForSelectionModel:(id)arg1 withSelection:(id)arg2 ;
+(id)nodesAndDescendantsForNodes:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(SlideNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const SlideNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)didLoadSlide:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)childSearchTargets;
-(bool)resolverNameIsUsed:(id)arg1 ;
-(unsigned)nextUntitledResolverIndex;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(bool)isSlideNumberVisible;
-(void)setSlide:(id)arg1 ;
-(void)updateEventCount;
-(void)setIsSlideNumberVisible:(bool)arg1 ;
-(unsigned long long)slideSpecificHyperlinksCount;
-(void)setSlideSpecificHyperlinksCount:(unsigned long long)arg1 ;
-(id)descendantsIncludingSkippedSlideNodes:(bool)arg1 includingCollapsedSlideNodes:(bool)arg2 ;
-(unsigned long long)eventCount;
-(void)p_setEventCount:(unsigned long long)arg1 ;
-(void)p_addDescendantsToArray:(id)arg1 includeSkippedSlideNodes:(bool)arg2 includeCollapsedSlideNodes:(bool)arg3 ;
-(void)generateNewUniqueIdentifier;
-(bool)thumbnailsAreDirty;
-(void)setThumbnailsAreDirty:(bool)arg1 ;
-(bool)isCollapsedInOutlineView;
-(void)setCollapsedInOutlineView:(bool)arg1 ;
-(bool)hasBodyInOutlineView;
-(void)setHasBodyInOutlineView:(bool)arg1 ;
-(void)setHasTransition:(bool)arg1 ;
-(bool)hasNote;
-(void)setHasNote:(bool)arg1 ;
-(id)classicUniqueID;
-(void)setClassicUniqueID:(id)arg1 ;
-(id)copiedFromSlideIdentifier;
-(void)setCopiedFromSlideIdentifier:(id)arg1 ;
-(id)nextSkippingCollapsed;
-(id)previousSkippingCollapsed;
-(id)nextSkippingHidden;
-(id)previousSkippingHidden;
-(bool)hasBuilds;
-(void)uniquifyTableNamesForUpgradeOrImport;
-(void)addThumbnail:(id)arg1 atSize:(CGSize)arg2 ;
-(void)removeThumbnailAtSize:(CGSize)arg1 ;
-(void)removeAllThumbnails;
-(id)descendants;
-(id)copyForPasteboard:(id)arg1 ;
-(void)revert;
-(void)dealloc;
-(bool)isHidden;
-(void)setHidden:(bool)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)setCollapsed:(bool)arg1 ;
-(bool)isCollapsed;
-(void)setChildren:(id)arg1 ;
-(bool)hasChildren;
-(id)childEnumerator;
-(id)next;
-(unsigned long long)depth;
-(id)slide;
-(void)p_commonInit;
-(id)thumbnails;
-(id)previous;
-(id)children;
-(void)setParent:(id)arg1 ;
-(id)parent;
-(bool)hasTransition;
@end

