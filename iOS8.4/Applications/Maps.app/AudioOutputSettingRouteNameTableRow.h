/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/AudioSettingTableRow.h>

@class AudioOutputSetting;

@interface AudioOutputSettingRouteNameTableRow : AudioSettingTableRow {

	AudioOutputSetting* _outputSetting;

}

@property (nonatomic,readonly) AudioOutputSetting * outputSetting;              //@synthesize outputSetting=_outputSetting - In the implementation block
-(id)reuseIdentifierForCell;
-(void)configureCurrentCell;
-(id)initWithAudioOutputSetting:(id)arg1 ;
-(void)selectOutput;
-(AudioOutputSetting *)outputSetting;
@end

