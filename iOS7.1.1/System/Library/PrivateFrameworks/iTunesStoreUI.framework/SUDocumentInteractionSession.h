/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class UIDocumentInteractionController;

@interface SUDocumentInteractionSession : NSObject <UIDocumentInteractionControllerDelegate> {

	/*^block*/ id _completionHandler;
	UIDocumentInteractionController* _documentInteractionController;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(/*^block*/ id)completionHandler;
-(void)cancel;
-(id)initWithDocumentInteractionController:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
@end

