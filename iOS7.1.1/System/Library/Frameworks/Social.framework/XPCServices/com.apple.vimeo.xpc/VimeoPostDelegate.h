/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:34:24 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.vimeo.xpc/com.apple.vimeo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VimeoPostDelegate <NSObject>
@optional
-(void)vimeoPost:(id)arg1 uploadProgressDidChange:(float)arg2;

@required
-(void)vimeoPost:(id)arg1 uploadFailedWithError:(id)arg2;
-(void)vimeoPostUploadSucceeded:(id)arg1;
-(void)vimeoPost:(id)arg1 uploadSucceededWithWarning:(int)arg2;
@end

