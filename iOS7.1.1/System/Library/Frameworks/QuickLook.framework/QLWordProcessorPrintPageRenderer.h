/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLRemotePrintPageHelper.h>

@class UIWebPaginationInfo;

@interface QLWordProcessorPrintPageRenderer : QLRemotePrintPageHelper {

	UIWebPaginationInfo* _paginationInfo;

}
-(id)pdfDataForPageAtIndex:(long long)arg1 withSize:(CGSize)arg2 printingDone:(bool*)arg3 ;
-(id)_paginationInfo;
-(void)dealloc;
-(long long)numberOfPages;
@end

