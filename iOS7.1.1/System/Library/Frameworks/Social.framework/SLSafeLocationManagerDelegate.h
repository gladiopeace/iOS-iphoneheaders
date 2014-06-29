/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/CLLocationManagerDelegate.h>

@protocol CLLocationManagerDelegate;
@interface SLSafeLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {

	<CLLocationManagerDelegate>* _delegate;

}

@property (__weak) <CLLocationManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

