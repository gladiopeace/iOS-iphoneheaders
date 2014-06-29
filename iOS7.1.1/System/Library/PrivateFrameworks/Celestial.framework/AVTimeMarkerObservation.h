/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface AVTimeMarkerObservation : NSObject {

	id _observer;
	NSArray* _times;
	id _context;
	int _currentIndex;

}
-(void)dealloc;
-(id)context;
-(int)currentIndex;
-(id)observer;
-(id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(int)arg4 ;
-(bool)gotoTime:(double)arg1 ;
-(double)nextInterestingTime;
-(double)prevInterestingTime;
@end

