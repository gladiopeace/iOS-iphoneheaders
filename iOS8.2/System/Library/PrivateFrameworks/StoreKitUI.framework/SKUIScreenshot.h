/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>
#import <StoreKitUI/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUIScreenshot : NSObject <NSCopying, SKUICacheCoding> {

	NSString* _orientation;
	long long _uniqueIdentifier;
	NSMutableDictionary* _urls;
	NSMutableDictionary* _sizes;

}

@property (nonatomic,readonly) int numberOfVariants; 
@property (nonatomic,readonly) NSString * orientationString;                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(NSString *)orientationString;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)uniqueIdentifier;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(void)setArtwork:(id)arg1 forVariant:(id)arg2 ;
-(int)numberOfVariants;
-(id)_initSKUIScreenshot;
-(void)_addURLsFromDictionary:(id)arg1 withRemoteLocalKeysMap:(id)arg2 ;
-(id)_firstVariant;
-(id)initWithScreenshotDictionary:(id)arg1 ;
-(CGSize)sizeForVariant:(id)arg1 ;
-(id)URLForVariant:(id)arg1 ;
@end

