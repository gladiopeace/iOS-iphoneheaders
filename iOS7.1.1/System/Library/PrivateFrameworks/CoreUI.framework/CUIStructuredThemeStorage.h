/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage <NSObject>
@optional
-(unsigned long long)colorSpaceID;

@required
-(bool)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)renditionWithKey:(const renditionkeytoken*)arg1;
-(bool)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3;
-(double)fontSizeForFontSizeType:(id)arg1;
-(bool)getPhysicalColor:(colordef*)arg1 withName:(id)arg2;
-(bool)hasPhysicalColorWithName:(id)arg1;
-(unsigned)documentFormatVersion;
-(unsigned)distilledInCoreUIVersion;
-(unsigned)authoredWithSchemaVersion;
@end

