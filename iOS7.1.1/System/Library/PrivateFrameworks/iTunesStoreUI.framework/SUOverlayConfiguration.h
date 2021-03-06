/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject {

	NSRegularExpression* _bagKeyPattern;
	long long _cornerRadius;
	bool _shouldShowNavigationBar;
	CGSize _size;
	NSString* _transitionName;
	NSRegularExpression* _urlPattern;

}

@property (nonatomic,readonly) long long cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) bool shouldShowNavigationBar;              //@synthesize shouldShowNavigationBar=_shouldShowNavigationBar - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSString * transitionName;                 //@synthesize transitionName=_transitionName - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(long long)cornerRadius;
-(bool)shouldShowNavigationBar;
-(id)transitionName;
-(bool)matchesURL:(id)arg1 ;
-(bool)matchesURLBagKey:(id)arg1 ;
@end

