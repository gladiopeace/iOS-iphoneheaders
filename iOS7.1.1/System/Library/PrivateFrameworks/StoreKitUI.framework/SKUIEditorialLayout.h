/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIEditorialComponent, SKUILayoutCache;

@interface SKUIEditorialLayout : NSObject {

	SKUIEditorialComponent* _editorial;
	long long _landscapeLinkLayoutIndex;
	long long _landscapeTextLayoutIndex;
	long long _landscapeTitleLayoutIndex;
	double _landscapeWidth;
	long long _portraitLinkLayoutIndex;
	long long _portraitTextLayoutIndex;
	long long _portraitTitleLayoutIndex;
	double _portraitWidth;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,readonly) SKUIEditorialComponent * editorialComponent;              //@synthesize editorial=_editorial - In the implementation block
-(void).cxx_destruct;
-(void)enqueueLayoutRequests;
-(id)initWithEditorial:(id)arg1 layoutCache:(id)arg2 ;
-(void)setLayoutWidth:(double)arg1 forOrientation:(long long)arg2 ;
-(id)bodyTextLayoutForOrientation:(long long)arg1 ;
-(double)layoutHeightForOrientation:(long long)arg1 expanded:(bool)arg2 ;
-(id)linkLayoutForOrientation:(long long)arg1 ;
-(id)titleTextLayoutForOrientation:(long long)arg1 ;
-(id)_bodyTextLayoutRequestWithTotalWidth:(double)arg1 ;
-(id)_titleTextLayoutRequestWithTotalWidth:(double)arg1 ;
-(id)_linkLayoutRequestWithTotalWidth:(double)arg1 ;
-(id)editorialComponent;
@end

