/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMCSSRule.h>

@class NSString, DOMCSSRuleList;

@interface DOMWebKitCSSKeyframesRule : DOMCSSRule

@property (copy) NSString * name; 
@property (readonly) DOMCSSRuleList * cssRules; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(DOMCSSRuleList *)cssRules;
-(void)deleteRule:(id)arg1 ;
-(void)insertRule:(id)arg1 ;
-(id)findRule:(id)arg1 ;
@end
