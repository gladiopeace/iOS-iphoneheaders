/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSCompletionListItem.h>

@class NSString;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {

	int _matchLocation;

}

@property (nonatomic,readonly) int matchLocation;                              //@synthesize matchLocation=_matchLocation - In the implementation block
@property (getter=isTopHit,nonatomic,readonly) char topHit; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
+(int)matchLocationForString:(id)arg1 inURLString:(id)arg2 ;
+(int)matchLocationForString:(id)arg1 inTitle:(id)arg2 ;
-(id)title;
-(id)originalURLString;
-(id)initWithMatchLocation:(int)arg1 ;
-(id)userVisibleURLString;
-(NSString *)parsecDomainIdentifier;
-(char)isTopHit;
-(int)matchLocation;
-(id)matchingStringWithUserTypedPrefix:(id)arg1 ;
@end

