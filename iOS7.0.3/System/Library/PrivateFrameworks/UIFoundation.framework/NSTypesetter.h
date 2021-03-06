/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface NSTypesetter : NSObject {

	void* _reserved;

}
+(void)initialize;
+(id)sharedSystemTypesetter;
+(int)defaultTypesetterBehavior;
+(id)sharedSystemTypesetterForBehavior:(int)arg1 ;
+(int)defaultStringDrawingTypesetterBehavior;
+(BOOL)_usesATSTypesetter;
-(void)dealloc;
-(id)layoutManager;
-(void)setLineFragmentPadding:(float)arg1 ;
-(void)setUsesFontLeading:(BOOL)arg1 ;
-(void)setAttributedString:(id)arg1 ;
-(NSRange)glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(unsigned)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned short*)arg2 properties:(int*)arg3 characterIndexes:(unsigned*)arg4 bidiLevels:(char*)arg5 ;
-(id)attributedString;
-(id)textContainers;
-(NSRange)characterRangeForGlyphRange:(NSRange)arg1 actualGlyphRange:(NSRange*)arg2 ;
-(float)lineFragmentPadding;
-(float)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned)arg2 ;
-(unsigned)actionForControlCharacterAtIndex:(unsigned)arg1 ;
-(NSRange)layoutCharactersInRange:(NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned)arg3 ;
-(void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned)arg2 maxNumberOfLineFragments:(unsigned)arg3 nextGlyphIndex:(unsigned*)arg4 ;
-(id)substituteFontForFont:(id)arg1 ;
-(BOOL)_allowsEllipsisGlyphSubstitution;
-(id)_ellipsisFontForFont:(id)arg1 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 baselineOffset:(float)arg4 ;
-(SCD_Struct_NS30*)_getAuxData;
-(BOOL)bidiProcessingEnabled;
-(NSRange)paragraphCharacterRange;
-(NSRange)paragraphSeparatorCharacterRange;
-(int)_baseWritingDirection;
-(int)typesetterBehavior;
-(id)currentTextContainer;
-(void)beginLineWithGlyphAtIndex:(unsigned)arg1 ;
-(void)getLineFragmentRect:(CGRect*)arg1 usedRect:(CGRect*)arg2 remainingRect:(CGRect*)arg3 forStartingGlyphAtIndex:(unsigned)arg4 proposedRect:(CGRect)arg5 lineSpacing:(float)arg6 paragraphSpacingBefore:(float)arg7 paragraphSpacingAfter:(float)arg8 ;
-(float)lineSpacingAfterGlyphAtIndex:(unsigned)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(float)paragraphSpacingBeforeGlyphAtIndex:(unsigned)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(float)paragraphSpacingAfterGlyphAtIndex:(unsigned)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(void)setLocation:(CGPoint)arg1 withAdvancements:(const float*)arg2 forStartOfGlyphRange:(NSRange)arg3 ;
-(void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)endLineWithGlyphRange:(NSRange)arg1 ;
-(void)beginParagraph;
-(void)endParagraph;
-(void)getLineFragmentRect:(CGRect*)arg1 usedRect:(CGRect*)arg2 forParagraphSeparatorGlyphRange:(NSRange)arg3 atProposedOrigin:(CGPoint)arg4 ;
-(float)hyphenationFactor;
-(unsigned)layoutParagraphAtPoint:(CGPoint*)arg1 ;
-(SCD_Struct_NS30*)_allocateAuxData;
-(/*function pointer*/ void**)_lineFragmentRectForProposedRectArgs;
-(NSRange)paragraphGlyphRange;
-(NSRange)paragraphSeparatorGlyphRange;
-(id)currentParagraphStyle;
-(BOOL)_forceOriginalFontBaseline;
-(id)textTabForGlyphLocation:(float)arg1 writingDirection:(int)arg2 maxLocation:(float)arg3 ;
-(BOOL)_isLineBreakModeOverridden;
-(float)tightenThresholdForTruncation;
-(BOOL)usesFontLeading;
-(void)substituteGlyphsInRange:(NSRange)arg1 withGlyphs:(unsigned*)arg2 ;
-(void)insertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned)arg2 characterIndex:(unsigned)arg3 ;
-(void)setAttachmentSize:(CGSize)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setBidiLevels:(const char*)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setHardInvalidation:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)_setForceOriginalFontBaseline:(BOOL)arg1 ;
-(void)setTypesetterBehavior:(int)arg1 ;
-(void)setParagraphGlyphRange:(NSRange)arg1 separatorGlyphRange:(NSRange)arg2 ;
-(void)deleteGlyphsInRange:(NSRange)arg1 ;
-(unsigned)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned*)arg3 glyphInscriptions:(unsigned*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char*)arg6 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(id)attributesForExtraLineFragment;
-(void)_updateParagraphStyleCache:(id)arg1 ;
-(unsigned)_getRemainingNominalParagraphRange:(NSRange*)arg1 andParagraphSeparatorRange:(NSRange*)arg2 charactarIndex:(unsigned)arg3 layoutManager:(id)arg4 string:(id)arg5 ;
-(void)_setLineBreakModeOverridden:(BOOL)arg1 ;
-(void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned)arg2 maxNumberOfLineFragments:(unsigned)arg3 maxCharacterIndex:(unsigned)arg4 nextGlyphIndex:(unsigned*)arg5 nextCharacterIndex:(unsigned*)arg6 ;
-(void)setBidiProcessingEnabled:(BOOL)arg1 ;
-(void)setTightenThresholdForTruncation:(float)arg1 ;
-(void)finalize;
@end

