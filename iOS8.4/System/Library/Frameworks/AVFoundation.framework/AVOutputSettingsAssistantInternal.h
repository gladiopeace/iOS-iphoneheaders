/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;
#import <AVFoundation/AVFoundation-Structs.h>
@interface AVOutputSettingsAssistantInternal : NSObject {

	id<AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
	id<AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
	opaqueCMFormatDescriptionRef sourceVideoFormat;
	opaqueCMFormatDescriptionRef sourceAudioFormat;
	SCD_Struct_CM4 sourceVideoAverageFrameDuration;
	SCD_Struct_CM4 sourceVideoMinFrameDuration;

}
@end

