/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GQHContext;
#import <iWorkImport/iWorkImport-Structs.h>
@class GQHXML, GQHTableState, GQSDocument;

@interface GQHState : NSObject {

	GQHXML* mHtmlDoc;
	CGSize mScale;
	CFStringRef mStyleData;
	GQHTableState* mTableState;
	GQSDocument* mProcessorState;
	CFDictionaryRef mStyleIndexes;
	CFDictionaryRef mStyleNameMap;
	CFArrayRef mImplicitStyles;
	int mColoredBackgroundLayerCount;
	int mMultiColumnedDepth;
	CFArrayRef mGraphicPropertiesStack;
	int mParagraphCount;
	int mParagraphIndex;
	int mCachedCellStyleIndex;
	CFDictionaryRef mCachedTableStyles;
	int mCachedTextStyleIndex;
	CFDictionaryRef mCachedTextStyles;
	int mInlineStyleIndex;
	CFDictionaryRef mInlineStyles;
	CFDictionaryRef mColorStrings;
	<GQHContext>* mShapeContext;
	int mOutlineLevel;
	int mOutlineStyleType;
	int mShapeIDCounter;
	unsigned mTextScale;

}
-(int)indexForStyle:(const char*)arg1 ;
-(id)tableState;
-(unsigned)textScale;
-(bool)useOutline;
-(id)htmlDoc;
-(void)setParagraphCount:(int)arg1 ;
-(void)setParagraphIndex:(int)arg1 ;
-(id)processorState;
-(bool)drawablesNeedCssZOrdering;
-(CFStringRef)cssZOrderClassForDrawable:(id)arg1 ;
-(bool)shouldMapLinkWithUrl:(CFStringRef)arg1 ;
-(void)addedDrawableWithBounds:(CGRect)arg1 ;
-(bool)allowInlineWrap;
-(CFStringRef)getColorString:(id)arg1 ;
-(void)setColoredBackground:(bool)arg1 ;
-(CFStringRef)createUniqueShapeId:(const char*)arg1 ;
-(id)shapeContext;
-(void)enterGraphicObject;
-(void)leaveGraphicObject;
-(bool)finishMainHtml;
-(id)initWithState:(id)arg1 documentSize:(CGSize)arg2 ;
-(CFStringRef)cssZOrderClassForDrawableUid:(const char*)arg1 ;
-(void)addStyle:(CFStringRef)arg1 className:(CFStringRef)arg2 srcStyle:(id)arg3 ;
-(CFStringRef)className:(id)arg1 ;
-(CFStringRef)makeInlineStyle:(CFStringRef)arg1 inDocument:(id)arg2 ;
-(CFStringRef)makeInlineStyle:(CFStringRef)arg1 ;
-(void)addCachedStyle:(CFStringRef)arg1 ;
-(void)setOutlineStyleType:(int)arg1 ;
-(bool)needAbsolutelyPositionedTables;
-(void)pushImplicitStyle:(id)arg1 ;
-(id)implicitStyle;
-(void)popImplicitStyle;
-(int)outlineStyleType;
-(bool)coloredBackground;
-(CFStringRef)cachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(bool)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(bool)arg6 ;
-(int)paragraphIndex;
-(CFStringRef)addCachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(bool)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(bool)arg6 baseClassString:(CFStringRef)arg7 cssCachedStyle:(id)arg8 ;
-(void)setTextScale:(unsigned)arg1 ;
-(void)invalidateTextScale;
-(id)initWithState:(id)arg1 needIndexFile:(bool)arg2 documentSize:(CGSize)arg3 ;
-(void)setMultiColumned:(bool)arg1 ;
-(CFStringRef)createStyleName:(id)arg1 type:(const char*)arg2 ;
-(bool)multiColumned;
-(CFStringRef)cachedClassStringForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(bool)arg6 ;
-(CFStringRef)addCacheForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(bool)arg6 baseClassString:(CFStringRef)arg7 cssCachedStyle:(id)arg8 ;
-(void)dealloc;
-(CGSize)scale;
-(void)setScale:(CGSize)arg1 ;
-(id).cxx_construct;
-(int)paragraphCount;
-(void)setOutlineLevel:(int)arg1 ;
-(int)outlineLevel;
-(id)initWithState:(id)arg1 ;
@end

