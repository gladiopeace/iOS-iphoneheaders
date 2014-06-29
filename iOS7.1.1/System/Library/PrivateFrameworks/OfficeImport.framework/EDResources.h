/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDStylesCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection;

@interface EDResources : NSObject {

	EDCollection* mStrings;
	EDContentFormatsCollection* mContentFormats;
	EDFontsCollection* mFonts;
	EDCollection* mAlignmentInfos;
	EDStylesCollection* mStyles;
	EDColorsCollection* mColors;
	EDColorsCollection* mThemes;
	EDCollection* mNames;
	EDLinksCollection* mLinks;
	EDCollection* mBorders;
	EDCollection* mBorder;
	EDCollection* mFills;
	EDCollection* mDifferentialStyles;
	EDTableStylesCollection* mTableStyles;

}
-(void)setColors:(id)arg1 ;
-(void)setThemes:(id)arg1 ;
-(void)dealloc;
-(id)links;
-(id)strings;
-(id)colors;
-(id)borders;
-(id)styles;
-(id)fonts;
-(id)contentFormats;
-(id)initWithStringOptimization:(bool)arg1 ;
-(id)names;
-(id)themes;
-(id)differentialStyles;
-(id)tableStyles;
-(id)alignmentInfos;
-(id)fills;
-(id)border;
@end

