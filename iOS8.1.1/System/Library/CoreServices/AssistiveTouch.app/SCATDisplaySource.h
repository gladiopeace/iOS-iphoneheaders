/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SCATDisplaySource <NSObject>
@optional
-(BOOL)isUIContextHidden;
-(void)hidUIContext:(BOOL)arg1;
-(void)showUIContext:(BOOL)arg1;

@required
-(id)scatUIContext;
-(id)scatFrontCursorUIContext;
-(id)scatBackCursorUIContext;

@end

