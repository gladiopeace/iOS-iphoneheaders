/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SiriUI/SiriUI-Structs.h>
@class NSString, SAUIAppPunchOut, NSBundle, NSURL;

@interface SiriUIAttributionImage : NSObject {

	NSString* _localResourceName;
	NSString* _localPressedResourceName;
	SAUIAppPunchOut* _localPunchOut;
	NSBundle* _localResourceBundle;
	NSURL* _remoteURL;
	NSURL* _remotePressedURL;
	SAUIAppPunchOut* _remotePunchOut;
	double _remoteScale;
	double _remotePressedScale;
	CGSize _logoSize;

}

@property (nonatomic,copy) NSString * localResourceName;                     //@synthesize localResourceName=_localResourceName - In the implementation block
@property (nonatomic,copy) NSString * localPressedResourceName;              //@synthesize localPressedResourceName=_localPressedResourceName - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * localPunchOut;                //@synthesize localPunchOut=_localPunchOut - In the implementation block
@property (nonatomic,retain) NSBundle * localResourceBundle;                 //@synthesize localResourceBundle=_localResourceBundle - In the implementation block
@property (nonatomic,copy) NSURL * remoteURL;                                //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,copy) NSURL * remotePressedURL;                         //@synthesize remotePressedURL=_remotePressedURL - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * remotePunchOut;               //@synthesize remotePunchOut=_remotePunchOut - In the implementation block
@property (assign,nonatomic) double remoteScale;                             //@synthesize remoteScale=_remoteScale - In the implementation block
@property (assign,nonatomic) double remotePressedScale;                      //@synthesize remotePressedScale=_remotePressedScale - In the implementation block
@property (assign,nonatomic) CGSize logoSize;                                //@synthesize logoSize=_logoSize - In the implementation block
+(id)attributionImageFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3 ;
+(id)attributionImageFromAppPunchOut:(id)arg1 ;
+(id)attributionImageWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4 ;
-(void).cxx_destruct;
-(void)setLocalResourceBundle:(id)arg1 ;
-(void)setLocalResourceName:(id)arg1 ;
-(void)setLocalPressedResourceName:(id)arg1 ;
-(void)setLocalPunchOut:(id)arg1 ;
-(void)setRemoteURL:(id)arg1 ;
-(void)setRemoteScale:(double)arg1 ;
-(void)setRemotePressedURL:(id)arg1 ;
-(void)setRemotePressedScale:(double)arg1 ;
-(void)setLogoSize:(CGSize)arg1 ;
-(void)setRemotePunchOut:(id)arg1 ;
-(id)localResourceName;
-(void)_fetchRemoteResourcesWithCompletion:(/*^block*/ id)arg1 ;
-(void)_fetchLocalResourcesWithCompletion:(/*^block*/ id)arg1 ;
-(id)remoteURL;
-(id)_imageInLocalResourceBundleNamed:(id)arg1 ;
-(id)localPressedResourceName;
-(id)localPunchOut;
-(id)localResourceBundle;
-(double)remoteScale;
-(id)remotePressedURL;
-(double)remotePressedScale;
-(id)remotePunchOut;
-(void)getLogoWithCompletion:(/*^block*/ id)arg1 ;
-(CGSize)logoSize;
@end

