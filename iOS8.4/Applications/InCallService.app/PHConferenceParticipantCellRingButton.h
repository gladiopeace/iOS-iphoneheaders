/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIButton.h>

@class PHInCallRoundedRectView;

@interface PHConferenceParticipantCellRingButton : UIButton {

	PHInCallRoundedRectView* _ringView;

}

@property (nonatomic,retain) PHInCallRoundedRectView * ringView;              //@synthesize ringView=_ringView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(PHInCallRoundedRectView *)ringView;
-(void)setRingView:(PHInCallRoundedRectView *)arg1 ;
@end
