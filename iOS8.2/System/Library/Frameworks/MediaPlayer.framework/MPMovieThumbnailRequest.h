/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MPMovieThumbnailRequest : NSObject {

	NSArray* _times;
	int _timeOption;

}

@property (nonatomic,retain) NSArray * times;              //@synthesize times=_times - In the implementation block
@property (assign,nonatomic) int timeOption;               //@synthesize timeOption=_timeOption - In the implementation block
-(NSArray *)times;
-(void)setTimes:(NSArray *)arg1 ;
-(int)timeOption;
-(void)setTimeOption:(int)arg1 ;
@end

