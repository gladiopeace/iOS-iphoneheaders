/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SSLookupRequest;

@interface MAYelpController : NSObject {

	NSString* _appStoreURL;
	NSString* _yelp55URLString;
	NSString* _yelp53URLString;
	NSString* _yelp6URLString;
	float _installedYelpVersion;
	SSLookupRequest* _request;
	bool _needsAppStoreLaunch;

}

@property (assign) bool needsAppStoreLaunch;              //@synthesize needsAppStoreLaunch=_needsAppStoreLaunch - In the implementation block
+(id)sharedYelpController;
-(id)yelpURL;
-(id)yelpURLForItems:(id)arg1 ;
-(id)yelpURLForItem:(id)arg1 ;
-(void)openYelpForSelectedItem:(id)arg1 fromAllItems:(id)arg2 andSearchTerms:(id)arg3 siriDelegate:(id)arg4 siriController:(id)arg5 ;
-(void)setAppStoreLaunchPath:(id)arg1 siriDelegate:(id)arg2 siriController:(id)arg3 ;
-(void)checkInstalledYelpVersion;
-(id)yelpURLForSelectedItem:(id)arg1 fromAllItems:(id)arg2 andSearchTerms:(id)arg3 ;
-(bool)needsAppStoreLaunch;
-(void)setNeedsAppStoreLaunch:(bool)arg1 ;
-(void)openYelpForItem:(id)arg1 siriDelegate:(id)arg2 siriController:(id)arg3 ;
-(void)lookUpAppStoreURLForBundle:(id)arg1 siriDelegate:(id)arg2 siriController:(id)arg3 ;
-(void)openYelpForItem:(id)arg1 ;
-(void)openYelpForItem:(id)arg1 linkType:(int)arg2 linkInfo:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

