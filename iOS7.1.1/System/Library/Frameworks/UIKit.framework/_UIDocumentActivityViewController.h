/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class UIDocumentInteractionController;

@interface _UIDocumentActivityViewController : UIActivityViewController {

	bool hideSystemActivities;
	UIDocumentInteractionController* _documentInteractionController;
	bool _hideSystemActivities;

}

@property (assign,nonatomic) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (assign,nonatomic) bool hideSystemActivities;                                                    //@synthesize hideSystemActivities=_hideSystemActivities - In the implementation block
-(void)viewDidDisappear:(bool)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(bool)sourceIsManaged;
-(id)documentInteractionController;
-(bool)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(void)setDocumentInteractionController:(id)arg1 ;
-(bool)hideSystemActivities;
-(void)setHideSystemActivities:(bool)arg1 ;
@end

