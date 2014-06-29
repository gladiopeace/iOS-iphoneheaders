/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUICommonAssetStorage : NSObject {

	carheader* _header;
	renditionkeyfmt* _keyfmt;
	void* _imagedb;
	void* _colordb;
	void* _fontdb;
	void* _fontsizedb;
	void* _zcglyphdb;
	void* _zcbezeldb;
	void* _facetKeysdb;
	void* _elementDebugInfoDB;
	void* _partDebugInfoDB;
	bool _swap;

}
+(void)initialize;
-(id)_dataForIdentifier:(unsigned)arg1 fromDebugTree:(void*)arg2 ;
-(id)_constantNameForIdentifier:(unsigned)arg1 fromDebugTree:(void*)arg2 ;
-(id)_displayNameForIdentifier:(unsigned)arg1 fromDebugTree:(void*)arg2 ;
-(id)constantNameForElementID:(long long)arg1 ;
-(id)displayNameForElementID:(long long)arg1 ;
-(id)constantNameForPartID:(long long)arg1 ;
-(id)displayNameForPartID:(long long)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(unsigned)colorSpaceID;
-(bool)usesCUISystemThemeRenditionKey;
-(id)zeroCodeGlyphList;
-(id)initWithPath:(id)arg1 forWriting:(bool)arg2 ;
-(void)_initDefaultHeader;
-(void)_swapHeader;
-(void)_bringHeaderInfoUpToDate;
-(void)_swapKeyFormat;
-(long long)_storagefileTimestamp;
-(const renditionkeyfmt*)keyFormat;
-(long long)maximumRenditionKeyTokenCount;
-(id)assetForKey:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(bool)swapped;
-(void)_swapRenditionKeyArray:(unsigned short*)arg1 ;
-(renditionkeytoken)_swapRenditionKeyToken:(renditionkeytoken)arg1 ;
-(void)_swapZeroCodeInformation:(SCD_Struct_CU14*)arg1 ;
-(id)_zeroCodeListFromTree:(const void*)arg1 ;
-(const FontValue*)fontValueForFontType:(id)arg1 ;
-(unsigned)storageVersion;
-(unsigned)coreuiVersion;
-(unsigned)schemaVersion;
-(long long)storageTimestamp;
-(int)keySemantics;
-(id)keyFormatData;
-(unsigned)renditionCount;
-(unsigned)associatedChecksum;
-(bool)assetExistsForKey:(id)arg1 ;
-(id)assetForKey:(id)arg1 ;
-(id)allAssetKeys;
-(const renditionkeytoken*)renditionKeyForName:(const char*)arg1 hotSpot:(CGPoint*)arg2 ;
-(id)allRenditionNames;
-(id)zeroCodeBezelList;
-(bool)getColor:(colordef*)arg1 forName:(const char*)arg2 ;
-(bool)hasColorForName:(const char*)arg1 ;
-(bool)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3 ;
-(bool)getBaselineOffset:(float*)arg1 forFontType:(id)arg2 ;
-(float)fontSizeForFontSizeType:(id)arg1 ;
-(const char*)versionString;
-(id)uuid;
-(void)finalize;
@end

