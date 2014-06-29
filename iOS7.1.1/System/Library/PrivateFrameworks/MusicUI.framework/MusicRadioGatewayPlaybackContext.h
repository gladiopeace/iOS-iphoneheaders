/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicPlaybackContext.h>

@class MPAVItem, MusicRadioPlaybackContext;

@interface MusicRadioGatewayPlaybackContext : MusicPlaybackContext {

	MPAVItem* _gatewayItem;
	MusicRadioPlaybackContext* _radioPlaybackContext;

}

@property (nonatomic,retain) MPAVItem * gatewayItem;                                        //@synthesize gatewayItem=_gatewayItem - In the implementation block
@property (nonatomic,retain) MusicRadioPlaybackContext * radioPlaybackContext;              //@synthesize radioPlaybackContext=_radioPlaybackContext - In the implementation block
+(Class)queueFeederClass;
-(id)gatewayItem;
-(void)setGatewayItem:(id)arg1 ;
-(void).cxx_destruct;
-(id)radioPlaybackContext;
-(void)setRadioPlaybackContext:(id)arg1 ;
@end

