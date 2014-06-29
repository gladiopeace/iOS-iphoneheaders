/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSString, NSNumber, SSURLRequestProperties;

@interface SUStorePageProtocol : NSObject <NSCopying> {

	NSArray* _allowedOrientations;
	NSString* _copyright;
	NSArray* _expectedClientIdentifiers;
	NSNumber* _focusedItemIdentifier;
	NSArray* _navigationButtons;
	NSArray* _navigationHistoryItems;
	NSArray* _navigationMenus;
	SSURLRequestProperties* _overlayBackgroundURLRequestProperties;
	NSString* _rootSectionIdentifier;
	bool _shouldDisplayInOverlay;
	bool _shouldExcludeFromNavigationHistory;
	bool _shouldReplaceRootViewController;

}

@property (nonatomic,retain) NSArray * allowedOrientations;                                               //@synthesize allowedOrientations=_allowedOrientations - In the implementation block
@property (nonatomic,retain) NSString * copyright;                                                        //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,copy) NSArray * expectedClientIdentifiers;                                           //@synthesize expectedClientIdentifiers=_expectedClientIdentifiers - In the implementation block
@property (nonatomic,retain) NSNumber * focusedItemIdentifier;                                            //@synthesize focusedItemIdentifier=_focusedItemIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * navigationButtons;                                                   //@synthesize navigationButtons=_navigationButtons - In the implementation block
@property (nonatomic,retain) NSArray * navigationHistoryItems;                                            //@synthesize navigationHistoryItems=_navigationHistoryItems - In the implementation block
@property (nonatomic,copy) NSArray * navigationMenus;                                                     //@synthesize navigationMenus=_navigationMenus - In the implementation block
@property (nonatomic,retain) SSURLRequestProperties * overlayBackgroundURLRequestProperties;              //@synthesize overlayBackgroundURLRequestProperties=_overlayBackgroundURLRequestProperties - In the implementation block
@property (nonatomic,retain) NSString * rootSectionIdentifier;                                            //@synthesize rootSectionIdentifier=_rootSectionIdentifier - In the implementation block
@property (assign,nonatomic) bool shouldDisplayInOverlay;                                                 //@synthesize shouldDisplayInOverlay=_shouldDisplayInOverlay - In the implementation block
@property (assign,nonatomic) bool shouldExcludeFromNavigationHistory;                                     //@synthesize shouldExcludeFromNavigationHistory=_shouldExcludeFromNavigationHistory - In the implementation block
@property (assign,nonatomic) bool shouldReplaceRootViewController;                                        //@synthesize shouldReplaceRootViewController=_shouldReplaceRootViewController - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)shouldExcludeFromNavigationHistory;
-(void)setShouldExcludeFromNavigationHistory:(bool)arg1 ;
-(id)expectedClientIdentifiers;
-(bool)shouldDisplayInOverlay;
-(id)navigationButtonForLocation:(id)arg1 ;
-(id)navigationMenuForLocation:(long long)arg1 ;
-(id)navigationHistoryItems;
-(id)overlayBackgroundURLRequestProperties;
-(id)rootSectionIdentifier;
-(bool)shouldReplaceRootViewController;
-(id)copyright;
-(void)setValuesFromStorePageDictionary:(id)arg1 ;
-(id)focusedItemIdentifier;
-(void)setFocusedItemIdentifier:(id)arg1 ;
-(id)allowedOrientations;
-(id)overlayBackgroundURLRequest;
-(void)setAllowedOrientations:(id)arg1 ;
-(void)setCopyright:(id)arg1 ;
-(void)setOverlayBackgroundURLRequest:(id)arg1 ;
-(id)_initCommon;
-(void)setExpectedClientIdentifiers:(id)arg1 ;
-(id)_newNavigationButtonsFromArray:(id)arg1 ;
-(id)_newNavigationHistoryItemsFromArray:(id)arg1 ;
-(id)_newNavigationMenusFromArray:(id)arg1 ;
-(void)setRootSectionIdentifier:(id)arg1 ;
-(void)setShouldReplaceRootViewController:(bool)arg1 ;
-(void)setOverlayBackgroundURLRequestProperties:(id)arg1 ;
-(void)setShouldDisplayInOverlay:(bool)arg1 ;
-(id)navigationButtons;
-(void)setNavigationButtons:(id)arg1 ;
-(void)setNavigationHistoryItems:(id)arg1 ;
-(id)navigationMenus;
-(void)setNavigationMenus:(id)arg1 ;
@end

