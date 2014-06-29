/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettingsKeyObserver.h>
#import <SpringBoard/SBBulletinAlertHandlerRegistry.h>

@protocol SBBulletinAlertHandlerRegistry
@required
-(void)addAlertHandler:(id)arg1 forSection:(id)arg2;
@end


@class NSMutableDictionary, SBAlertItemsSettings;

@interface SBBulletinAlertHandlerRegistry : NSObject <_UISettingsKeyObserver, SBBulletinAlertHandlerRegistry> {

	NSMutableDictionary* _handlersBySectionID;
	SBAlertItemsSettings* _settings;
	BOOL _disabled;

}
-(id)alertHandlersForSection:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)addAlertHandler:(id)arg1 forSection:(id)arg2 ;
@end

