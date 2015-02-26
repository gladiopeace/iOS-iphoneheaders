/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodySubparser.h>

@protocol MFMessageBodyElement_Private;
@class NSMutableArray, DOMRange;

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser {

	/*^block*/ id _foundDedentedAttributionRangeBlock;
	/*^block*/ id _foundTrailingEmptyQuoteRangeBlock;
	<MFMessageBodyElement_Private>* _lastUnindentedElement;
	<MFMessageBodyElement_Private>* _lastUnindentedAttributionHint;
	NSMutableArray* _unindentedSiblingNodes;
	unsigned _unindentedSiblingGap;
	DOMRange* _trailingEmptyQuoteRange;
	unsigned _trailingEmptyQuoteLevel;

}
-(void)setFoundDedentedAttributionRangeBlock:(/*^block*/ id)arg1 ;
-(void)setFoundTrailingEmptyQuoteRangeBlock:(/*^block*/ id)arg1 ;
-(void)copyBlocks;
-(void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2 ;
-(void)_enumerateSurroundableRangesInRange:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
-(BOOL)doesRange:(id)arg1 containAnyElementWithTagName:(id)arg2 ;
-(void)dealloc;
@end
