/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:18:30 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMCSSStyleSheet;

@interface DOMCSSRule : DOMObject

@property (readonly) unsigned short type; 
@property (copy) NSString * cssText; 
@property (readonly) DOMCSSStyleSheet * parentStyleSheet; 
@property (readonly) DOMCSSRule * parentRule; 
-(void)dealloc;
-(unsigned short)type;
-(void)setCssText:(NSString *)arg1 ;
-(void)finalize;
-(NSString *)cssText;
-(DOMCSSStyleSheet *)parentStyleSheet;
-(DOMCSSRule *)parentRule;
@end

