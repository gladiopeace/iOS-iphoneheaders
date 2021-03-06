/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MusicEntityViewContentDescriptor;


@protocol MusicEntityContentDescriptorViewConfiguring <NSObject>
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
@optional
-(void)setEntityDisabled:(BOOL)arg1;

@required
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(id)arg1;
-(void)setEntityValueProvider:(id)arg1;
-(id<MusicEntityValueProviding>)entityValueProvider;

@end

