/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPrintPageRendererDataSource <NSObject>
@required
-(long long)numberOfPagesInPrintPageRenderer:(id)arg1;
-(void)printPageRenderer:(id)arg1 prepareForDrawingPages:(NSRange)arg2;
-(id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(long long)arg2 printingDone:(BOOL*)arg3;

@end

