/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIPreviewControlViewElement : SKUIViewElement {

	char _enabled;
	long long _itemIdentifier;
	NSString* _mediaURLString;

}

@property (nonatomic,readonly) long long itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * mediaURLString;              //@synthesize mediaURLString=_mediaURLString - In the implementation block
-(BOOL)isEnabled;
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)mediaURLString;
@end
