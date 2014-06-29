/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:44:31 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/XPCServices/com.apple.Safari.SocialHelper.xpc/com.apple.Safari.SocialHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/SafariSocialHelper.h>

@protocol SafariSocialHelper
@required
-(void)performGetItemsRequestForServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 accountIdentifier:(id)arg4 completionHandler:(/*^block*/ id)arg5;
-(void)performRepostRequestForServiceType:(id)arg1 URL:(id)arg2 accountIdentifier:(id)arg3 completionHandler:(/*^block*/ id)arg4;
@end


@interface SafariSocialHelper : NSObject <SafariSocialHelper>
-(void)_performRequestForServiceType:(id)arg1 requestMethod:(int)arg2 URL:(id)arg3 parameters:(id)arg4 accountIdentifier:(id)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(void)performGetItemsRequestForServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 accountIdentifier:(id)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(void)performRepostRequestForServiceType:(id)arg1 URL:(id)arg2 accountIdentifier:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
@end

