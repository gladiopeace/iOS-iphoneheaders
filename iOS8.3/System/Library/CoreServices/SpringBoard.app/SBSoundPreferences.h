/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:19 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBSoundPreferences : NSObject
+(void)userDefaultsDidChanged:(id)arg1 ;
+(char)playLockSound;
+(char)vibrateWhenSilent;
+(char)vibrateWhenRinging;
+(void)_loadDefaultsIfNeeded;
+(id)ringtoneIdentifier;
+(char)shouldVibrateForCurrentRingerStateWithAudioCategory:(id)arg1 ;
+(id)calendarAlarmPath;
+(id)ringtonePath;
+(id)vibratePattern;
+(char)shouldVibrateForCurrentRingerState;
@end

