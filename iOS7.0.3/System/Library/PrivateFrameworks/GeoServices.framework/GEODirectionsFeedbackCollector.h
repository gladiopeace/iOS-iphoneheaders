/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject {

	GEODirectionsFeedback* _currentDirectionsFeedback;
	GEODirectionsFeedbackCollection* _currentFeedbackCollection;
	NSMutableSet* _routeIDs;

}

@property (nonatomic,retain) GEODirectionsFeedbackCollection * currentFeedbackCollection;              //@synthesize currentFeedbackCollection=_currentFeedbackCollection - In the implementation block
@property (nonatomic,retain) GEODirectionsFeedback * currentDirectionsFeedback;                        //@synthesize currentDirectionsFeedback=_currentDirectionsFeedback - In the implementation block
@property (nonatomic,retain) NSMutableSet * routeIDs;                                                  //@synthesize routeIDs=_routeIDs - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)currentFeedbackCollection;
-(void)setCurrentFeedbackCollection:(id)arg1 ;
-(void)setCurrentDirectionsFeedback:(id)arg1 ;
-(void)setRouteIDs:(id)arg1 ;
-(void)startFeedbackSessionForResponseID:(id)arg1 ;
-(void)addRouteID:(id)arg1 stepID:(unsigned)arg2 ;
-(void)endFeedbackSessionWithLocationWhereRouteWasCancelled:(id)arg1 ;
-(id)currentDirectionsFeedback;
-(id)routeIDs;
@end
