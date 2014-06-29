/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSURLCompletionMatch.h>

@class CloudTab;

@interface CloudTabCompletionMatch : WBSURLCompletionMatch {

	CloudTab* _cloudTab;

}

@property (nonatomic,readonly) CloudTab * cloudTab;              //@synthesize cloudTab=_cloudTab - In the implementation block
+(int)matchLocationForString:(id)arg1 inCloudTab:(id)arg2 ;
-(id)cloudTab;
-(id)initWithCloudTab:(id)arg1 matchLocation:(int)arg2 ;
-(void)dealloc;
-(id)title;
-(id)originalURLString;
-(id)userVisibleURLString;
@end

