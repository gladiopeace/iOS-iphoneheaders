/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RadioStationMatchMetadata;

@interface RadioStationMatchContext : NSObject {

	BOOL _shouldMatchArtist;
	RadioStationMatchMetadata* _matchMetadata;

}

@property (nonatomic,retain) RadioStationMatchMetadata * matchMetadata;              //@synthesize matchMetadata=_matchMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchArtist;                                 //@synthesize shouldMatchArtist=_shouldMatchArtist - In the implementation block
-(void)setMatchMetadata:(RadioStationMatchMetadata *)arg1 ;
-(void)setShouldMatchArtist:(BOOL)arg1 ;
-(id)copyMatchDictionary;
-(BOOL)shouldMatchArtist;
-(RadioStationMatchMetadata *)matchMetadata;
@end

