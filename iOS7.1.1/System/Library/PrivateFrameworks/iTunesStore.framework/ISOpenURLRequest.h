/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSURL;

@interface ISOpenURLRequest : NSObject <NSCopying> {

	bool _isITunesStoreURL;
	NSString* _targetIdentifier;
	NSString* _urlBagKey;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * URL;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLBagKey;                                       //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (assign,getter=isITunesStoreURL,nonatomic) bool ITunesStoreURL;              //@synthesize isITunesStoreURL=_isITunesStoreURL - In the implementation block
@property (nonatomic,copy) NSString * targetIdentifier;                                //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
+(id)openURLRequestWithURL:(id)arg1 ;
-(void)setURLBagKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setTargetIdentifier:(id)arg1 ;
-(id)targetIdentifier;
-(bool)isITunesStoreURL;
-(id)URLBagKey;
-(id)initWithURLBagKey:(id)arg1 ;
-(void)setITunesStoreURL:(bool)arg1 ;
@end

