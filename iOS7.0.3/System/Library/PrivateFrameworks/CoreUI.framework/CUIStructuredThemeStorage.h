/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage <NSObject>
@optional
-(unsigned)colorSpaceID;

@required
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)renditionWithKey:(const renditionkeytoken*)arg1;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
-(float)fontSizeForFontSizeType:(id)arg1;
-(BOOL)getPhysicalColor:(colordef*)arg1 withName:(id)arg2;
-(BOOL)hasPhysicalColorWithName:(id)arg1;
-(unsigned)documentFormatVersion;
-(unsigned)distilledInCoreUIVersion;
-(unsigned)authoredWithSchemaVersion;
@end

