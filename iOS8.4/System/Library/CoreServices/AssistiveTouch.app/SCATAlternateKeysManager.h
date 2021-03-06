/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElementManager.h>
#import <assistivetouchd/HNDAccessibilityManagerObserver.h>

@protocol SCATAlternateKeysManagerDelegate, SCATElement;
@class NSArray, NSString;

@interface SCATAlternateKeysManager : SCATSimpleElementManager <HNDAccessibilityManagerObserver> {

	id<SCATAlternateKeysManagerDelegate> _delegate;
	id<SCATElement> _currentKeyForAlternates;
	NSArray* _alternateKeys;

}

@property (assign,nonatomic) id<SCATAlternateKeysManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SCATElement> currentKeyForAlternates;                    //@synthesize currentKeyForAlternates=_currentKeyForAlternates - In the implementation block
@property (nonatomic,retain) NSArray * alternateKeys;                                    //@synthesize alternateKeys=_alternateKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleInputAction:(long long)arg1 withElement:(id)arg2 ;
-(void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2 ;
-(BOOL)canBeActiveElementManager;
-(id)allElements;
-(void)didFetchElements:(id)arg1 foundNewElements:(BOOL)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(BOOL)arg4 ;
-(id<SCATElement>)currentKeyForAlternates;
-(void)setAlternateKeys:(NSArray *)arg1 ;
-(id)_eventManagerPointsForKey:(id)arg1 ;
-(void)setCurrentKeyForAlternates:(id<SCATElement>)arg1 ;
-(void)_cleanUpAlternateKeyOperations;
-(NSArray *)alternateKeys;
-(void)_releaseLastShownKey;
-(void)_selectAlternateKey:(id)arg1 ;
-(void)_updateAlternateKeys;
-(void)showAlternateKeysForKey:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SCATAlternateKeysManagerDelegate>)arg1 ;
-(id)init;
-(id<SCATAlternateKeysManagerDelegate>)delegate;
-(void)orientationDidChange:(id)arg1 ;
@end

