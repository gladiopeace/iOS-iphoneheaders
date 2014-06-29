/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:49:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface CRPluginManager : NSObject {

	NSString* _path;
	NSMutableDictionary* _addressHandlersByKind;

}
+(id)defaultPluginPath;
-(id)addressHandlerForAddressKind:(id)arg1 ;
-(void)_loadPlugins;
-(void)_loadPluginBundle:(id)arg1 ;
-(void)_addAddressHandler:(id)arg1 ;
-(id)addressHandlers;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

