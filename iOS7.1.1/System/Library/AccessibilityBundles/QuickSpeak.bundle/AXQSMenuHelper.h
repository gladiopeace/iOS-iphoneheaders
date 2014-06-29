/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, UIMenuController, UICalloutBar;

@interface AXQSMenuHelper : NSObject {

	bool _showingLanguageChoices;
	NSArray* _thirdPartyMenuItems;

}

@property (nonatomic,readonly) UIMenuController * menuController; 
@property (nonatomic,readonly) UICalloutBar * calloutBar; 
@property (assign,getter=isShowingLanguageChoices,nonatomic) bool showingLanguageChoices;              //@synthesize showingLanguageChoices=_showingLanguageChoices - In the implementation block
@property (nonatomic,retain) NSArray * thirdPartyMenuItems;                                            //@synthesize thirdPartyMenuItems=_thirdPartyMenuItems - In the implementation block
+(id)sharedInstance;
-(void)setShowingLanguageChoices:(bool)arg1 ;
-(bool)isShowingLanguageChoices;
-(id)thirdPartyMenuItems;
-(void)setThirdPartyMenuItems:(id)arg1 ;
-(id)calloutBar;
-(id)menuController;
-(id)menuItemForCalloutBarButton:(id)arg1 ;
-(void)restoreMenu;
-(void)saveThirdPartyMenuItemsIfNeeded:(id)arg1 ;
-(void)dealloc;
@end

