/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject {

	UIStatusBarStyleRequest* _startStyleRequest;
	int _startOrientation;
	UIStatusBarStyleRequest* _endStyleRequest;
	int _endOrientation;
	int _transition;
	BOOL _zoomOther;

}

@property (nonatomic,copy) UIStatusBarStyleRequest * startStyleRequest;              //@synthesize startStyleRequest=_startStyleRequest - In the implementation block
@property (assign,nonatomic) int startOrientation;                                   //@synthesize startOrientation=_startOrientation - In the implementation block
@property (nonatomic,copy) UIStatusBarStyleRequest * endStyleRequest;                //@synthesize endStyleRequest=_endStyleRequest - In the implementation block
@property (assign,nonatomic) int endOrientation;                                     //@synthesize endOrientation=_endOrientation - In the implementation block
@property (assign,nonatomic) int transition;                                         //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) BOOL zoomOther;                                         //@synthesize zoomOther=_zoomOther - In the implementation block
-(void)setEndStyleRequest:(id)arg1 ;
-(void)setStartOrientation:(int)arg1 ;
-(void)setEndOrientation:(int)arg1 ;
-(void)setStartStyleRequest:(id)arg1 ;
-(void)setZoomOther:(BOOL)arg1 ;
-(int)startOrientation;
-(int)endOrientation;
-(id)startStyleRequest;
-(id)endStyleRequest;
-(BOOL)zoomOther;
-(void)dealloc;
-(id)description;
-(void)setTransition:(int)arg1 ;
-(int)transition;
@end

