/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextViewInteractableItem.h>

@class NSURL;

@interface _UITextViewInteractableLink : _UITextViewInteractableItem {

	NSURL* _link;

}

@property (nonatomic,retain) NSURL * link;              //@synthesize link=_link - In the implementation block
+(id)interactableLinkWithURL:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(bool)allowInteraction;
-(id)defaultAction;
-(id)localizedTitle;
-(id)actions;
-(void)setLink:(id)arg1 ;
-(id)link;
-(id)dataDetectorActionsForTextView:(id)arg1 ;
-(id)linkActions;
-(void)_linkInteractionOpenURL;
-(void)_linkInteractionAddToReadingList;
-(void)_linkInteractionCopyLink;
-(void)_dataDetectorAction:(id)arg1 ;
@end

