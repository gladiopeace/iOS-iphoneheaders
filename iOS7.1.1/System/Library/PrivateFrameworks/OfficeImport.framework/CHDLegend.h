/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADGraphicProperties, EDCollection, EDResources;

@interface CHDLegend : NSObject {

	int mLegendPosition;
	OADGraphicProperties* mGraphicProperties;
	unsigned long long mFontIndex;
	EDCollection* mLegendEntries;
	EDResources* mResources;
	bool mIsVertical;

}
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(void)dealloc;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)graphicProperties;
-(int)legendPosition;
-(id)initWithResources:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLegendPosition:(int)arg1 ;
-(void)setIsSingleColumnLegend:(bool)arg1 ;
-(id)legendEntries;
-(bool)isSingleColumnLegend;
@end

