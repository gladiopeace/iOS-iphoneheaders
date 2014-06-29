/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLPlaceDataSource
@property (__weak) NSObject<SLPlaceDataSourceDelegate> * delegate; 
@required
-(id)currentLocation;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
@end

