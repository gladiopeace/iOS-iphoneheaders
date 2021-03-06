/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPrinterPickerControllerDelegate;
#import <UIKit/UIKit-Structs.h>
@class UIPrinter;

@interface UIPrinterPickerController : NSObject {

	/*^block*/id _completionHandler;
	id _state;
	UIPrinter* _selectedPrinter;
	id<UIPrinterPickerControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIPrinter * selectedPrinter;                                 //@synthesize selectedPrinter=_selectedPrinter - In the implementation block
@property (assign,nonatomic) id<UIPrinterPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<UIPrinterPickerControllerDelegate>)arg1 ;
-(id)init;
-(id<UIPrinterPickerControllerDelegate>)delegate;
-(id)_init;
-(void)_printerPickerDidPresent;
-(void)_printerPickerWillDismiss;
-(void)_printerPickerDidDismiss;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)_delegateFiltersPrinters;
-(BOOL)_shouldShowPrinter:(id)arg1 ;
-(void)setSelectedPrinter:(UIPrinter *)arg1 ;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_setupPickerPanel:(/*^block*/id)arg1 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIPrinter *)selectedPrinter;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)release;
@end

