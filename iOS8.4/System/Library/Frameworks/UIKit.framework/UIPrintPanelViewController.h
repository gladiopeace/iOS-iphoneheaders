/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPrinterBrowserOwner.h>

@class UIPrintInteractionController, UIPrintInfo, UINavigationController, UIPrintPanelTableViewController, UIViewController, UIPopoverController, UIWindow, PKPrinter, NSArray, UIPrintPaper, NSString;

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {

	UIPrintInteractionController* _printInteractionController;
	UIPrintInfo* _observedPrintInfo;
	UINavigationController* _navigationController;
	UIPrintPanelTableViewController* _tableViewController;
	UIViewController* _parentController;
	UIPopoverController* _poverController;
	UIWindow* _window;
	PKPrinter* _printer;
	BOOL _dismissed;
	BOOL _animated;
	BOOL _observingRotation;

}

@property (nonatomic,retain) PKPrinter * printer;                    //@synthesize printer=_printer - In the implementation block
@property (nonatomic,readonly) long long pageCount; 
@property (assign,nonatomic) NSRange pageRange; 
@property (assign,nonatomic) BOOL duplex; 
@property (nonatomic,readonly) NSArray * paperList; 
@property (nonatomic,retain) UIPrintPaper * paper; 
@property (assign,nonatomic) long long copies; 
@property (nonatomic,readonly) BOOL showDuplex; 
@property (nonatomic,readonly) BOOL showPageRange; 
@property (nonatomic,readonly) BOOL showCopies; 
@property (nonatomic,readonly) BOOL showPaper; 
@property (nonatomic,readonly) BOOL showPaperSelection; 
@property (nonatomic,readonly) BOOL showPrinterWarning; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)printerBrowserViewDidDisappear;
-(void)_presentWindow;
-(void)_keyWindowWillRotate:(id)arg1 ;
-(void)_presentInParentAnimated:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)filtersPrinters;
-(void)cancelPrinting;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(long long)pageCount;
-(BOOL)duplex;
-(void)setDuplex:(BOOL)arg1 ;
-(long long)copies;
-(void)setCopies:(long long)arg1 ;
-(void)printPanelDidDisappear;
-(void)printPaperViewDidDisappear;
-(void)printRangeViewDidDisappear;
-(void)dismissPrintPanel:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showPageRange;
-(NSRange)pageRange;
-(void)setPageRange:(NSRange)arg1 ;
-(id)_removeRollsFrom:(id)arg1 ;
-(UIPrintPaper *)paper;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(NSArray *)paperList;
-(BOOL)showPaper;
-(id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2 ;
-(void)presentPrintPanelAnimated:(BOOL)arg1 ;
-(void)presentPrintPanelFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)startPrinting;
-(BOOL)showDuplex;
-(BOOL)showCopies;
-(BOOL)showPrinterWarning;
-(BOOL)showPaperSelection;
@end

