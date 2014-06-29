/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface WebPluginDatabase : NSObject {

	NSMutableDictionary* plugins;
	NSMutableSet* registeredMIMETypes;
	NSArray* plugInPaths;
	NSMutableSet* pluginInstanceViews;

}
+(id)_defaultPlugInPaths;
+(void)setAdditionalWebPlugInPaths:(id)arg1 ;
+(id)sharedDatabase;
+(void)closeSharedDatabase;
-(void)_removePlugin:(id)arg1 ;
-(id)_scanForNewPlugins;
-(void)_addPlugin:(id)arg1 ;
-(id)_plugInPaths;
-(void)dealloc;
-(id)init;
-(void)close;
-(void)refresh;
-(id)plugins;
-(void)setPlugInPaths:(id)arg1 ;
-(id)pluginForMIMEType:(id)arg1 ;
-(id)pluginForExtension:(id)arg1 ;
-(bool)isMIMETypeRegistered:(id)arg1 ;
-(void)addPluginInstanceView:(id)arg1 ;
-(void)removePluginInstanceView:(id)arg1 ;
-(void)removePluginInstanceViewsFor:(id)arg1 ;
-(void)destroyAllPluginInstanceViews;
@end

