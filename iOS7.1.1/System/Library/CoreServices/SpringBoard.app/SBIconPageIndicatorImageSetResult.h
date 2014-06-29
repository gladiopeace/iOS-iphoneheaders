/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _UILegibilityImageSet;

@interface SBIconPageIndicatorImageSetResult : NSObject {

	_UILegibilityImageSet* _pageIndicatorSet;
	_UILegibilityImageSet* _enabledPageIndicatorSet;

}

@property (nonatomic,readonly) _UILegibilityImageSet * pageIndicatorSet;                     //@synthesize pageIndicatorSet=_pageIndicatorSet - In the implementation block
@property (nonatomic,readonly) _UILegibilityImageSet * enabledPageIndicatorSet;              //@synthesize enabledPageIndicatorSet=_enabledPageIndicatorSet - In the implementation block
-(id)enabledPageIndicatorSet;
-(id)pageIndicatorSet;
-(id)initWithIndicatorSet:(id)arg1 enabledIndicatorSet:(id)arg2 ;
-(void)dealloc;
@end

