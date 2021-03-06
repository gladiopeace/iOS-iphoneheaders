/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:35 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItem.h>

@class SKUIArtworkList, NSString;

@interface SKUIRedeemItem : SKUIItem {

	SKUIArtworkList* artworks;
	NSString* title;
	int itemKind;
	long long itemIdentifier;

}

@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long itemIdentifier; 
@property (nonatomic,retain) SKUIArtworkList * artworks; 
@property (assign,nonatomic) int itemKind; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)itemIdentifier;
-(void)setItemIdentifier:(long long)arg1 ;
-(int)itemKind;
-(id)artworkURLForSize:(int)arg1 ;
-(SKUIArtworkList *)artworks;
-(NSRange)ageBandRange;
-(id)largestArtworkURL;
-(void)setArtworks:(SKUIArtworkList *)arg1 ;
-(void)setItemKind:(int)arg1 ;
@end

