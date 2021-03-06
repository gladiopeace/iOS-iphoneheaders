/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKActionController.h>

@interface BKPDFActionController : BKActionController {

	char _didComputePrintingAllowed;
	char _isPrintingAllowed;

}

@property (assign,nonatomic) char didComputePrintingAllowed;              //@synthesize didComputePrintingAllowed=_didComputePrintingAllowed - In the implementation block
@property (assign,nonatomic) char isPrintingAllowed;                      //@synthesize isPrintingAllowed=_isPrintingAllowed - In the implementation block
-(char)canEmailBook;
-(id)emailOutputAction;
-(char)canPrintBook;
-(id)printOutputAction;
-(char)didComputePrintingAllowed;
-(void)setDidComputePrintingAllowed:(char)arg1 ;
-(void)setIsPrintingAllowed:(char)arg1 ;
-(char)isPrintingAllowed;
@end

