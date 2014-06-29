/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOProblemProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester;

@interface GEOVoltaireProblemProvider : GEOProblemProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/ id _errorHandler;
	/*^block*/ id _finishedHandler;

}
+(void)setUsePersistentConnection:(bool)arg1 ;
+(unsigned short)providerID;
-(void)dealloc;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)cancelRequest;
@end

