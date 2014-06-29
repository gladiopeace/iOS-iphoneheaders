/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TPPageIndexPath, TSWPStorage, TPSection;

@interface TPPageLayoutState : NSObject {

	TPPageIndexPath* _pageIndexPath;
	unsigned long long _documentPageIndex;
	TSWPStorage* _bodyStorage;
	void* _bodyLayoutState;
	unsigned long long _bodyCharIndex;
	unsigned long long _footnoteIndex;
	bool _doingLayout;
	bool _onLastSection;
	unsigned long long _lastLaidOutSectionIndex;

}

@property (nonatomic,readonly) TPPageIndexPath * pageIndexPath;                              //@synthesize pageIndexPath=_pageIndexPath - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionIndex; 
@property (nonatomic,readonly) unsigned long long pageIndex; 
@property (nonatomic,readonly) unsigned long long documentPageIndex;                         //@synthesize documentPageIndex=_documentPageIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long lastLaidOutDocumentPageIndex; 
@property (nonatomic,readonly) unsigned long long lastLaidOutSectionIndex;                   //@synthesize lastLaidOutSectionIndex=_lastLaidOutSectionIndex - In the implementation block
@property (assign,nonatomic) void* bodyLayoutState;                                          //@synthesize bodyLayoutState=_bodyLayoutState - In the implementation block
@property (assign,nonatomic) unsigned long long bodyCharIndex;                               //@synthesize bodyCharIndex=_bodyCharIndex - In the implementation block
@property (assign,nonatomic) unsigned long long footnoteIndex;                               //@synthesize footnoteIndex=_footnoteIndex - In the implementation block
@property (assign,nonatomic) bool doingLayout;                                               //@synthesize doingLayout=_doingLayout - In the implementation block
@property (nonatomic,readonly) TPSection * section; 
@property (nonatomic,readonly) NSRange sectionCharRange; 
@property (nonatomic,readonly) bool onLastSection;                                           //@synthesize onLastSection=_onLastSection - In the implementation block
@property (nonatomic,readonly) bool isLayoutComplete; 
-(bool)isLayoutComplete;
-(id)initWithBodyStorage:(id)arg1 ;
-(unsigned long long)documentPageIndex;
-(bool)isLayoutCompleteThroughDocumentPageIndex:(unsigned long long)arg1 ;
-(bool)isLayoutCompleteUpToDocumentPageIndex:(unsigned long long)arg1 ;
-(void)setBodyCharIndex:(unsigned long long)arg1 ;
-(void)setFootnoteIndex:(unsigned long long)arg1 ;
-(bool)doingLayout;
-(void)setDocumentPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastLaidOutDocumentPageIndex;
-(void)restartLayoutFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2 ;
-(void*)bodyLayoutState;
-(void)setBodyLayoutState:(void*)arg1 ;
-(void)backUpPageIndex;
-(unsigned long long)bodyCharIndex;
-(void)setDoingLayout:(bool)arg1 ;
-(void)advancePageIndex;
-(id)pageIndexPath;
-(unsigned long long)footnoteIndex;
-(NSRange)sectionCharRange;
-(bool)onLastSection;
-(void)advanceSectionIndex;
-(unsigned long long)lastLaidOutSectionIndex;
-(void)restartLayoutFromFirstPage;
-(void)dealloc;
-(id)init;
-(id)section;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
@end

