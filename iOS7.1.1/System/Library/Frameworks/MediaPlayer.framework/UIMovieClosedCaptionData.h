/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface UIMovieClosedCaptionData : NSObject {

	NSString* _language;
	NSMutableArray* _data;

}

@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
-(id)timeMarkers;
-(void)addCaptionText:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 ;
-(id)description;
-(void).cxx_destruct;
-(id)language;
-(void)setLanguage:(id)arg1 ;
@end

