/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol CurrentLocationDelegate;
@class FMFSALocation, MKMapView, UIColor, UILabel, UIView, UIImageView, FMFSAMapAnnotation;

@interface FMFAFUITableViewCell : UITableViewCell {

	bool displayMap;
	bool refreshingCancelled;
	bool showLocatingFriends;
	bool showAllCell;
	bool isVisibilityCell;
	bool isFirstCell;
	bool isLastCell;
	FMFSALocation* location;
	MKMapView* mapView;
	double zoomLevel;
	UIColor* borderColor;
	UILabel* nameLabel;
	UILabel* locationLabel;
	UILabel* timeLabel;
	UILabel* distanceLabel;
	UIView* border;
	UIImageView* friendImageView;
	FMFSAMapAnnotation* mapAnnotation;
	<CurrentLocationDelegate>* currentLocationDelegate;

}

@property (assign,nonatomic) <CurrentLocationDelegate> * currentLocationDelegate; 
@property (nonatomic,retain) FMFSALocation * location; 
@property (assign,nonatomic) bool displayMap; 
@property (assign,nonatomic) bool refreshingCancelled; 
@property (assign,nonatomic) bool showLocatingFriends; 
@property (assign,nonatomic) bool showAllCell; 
@property (assign,nonatomic) bool isVisibilityCell; 
@property (assign,nonatomic) bool isFirstCell; 
@property (assign,nonatomic) bool isLastCell; 
@property (nonatomic,retain) UIColor * borderColor; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (assign,nonatomic) double zoomLevel; 
@property (nonatomic,retain) UILabel * nameLabel; 
@property (nonatomic,retain) UILabel * locationLabel; 
@property (nonatomic,retain) UILabel * timeLabel; 
@property (nonatomic,retain) UILabel * distanceLabel; 
@property (nonatomic,retain) UIView * border; 
@property (nonatomic,retain) UIImageView * friendImageView; 
@property (nonatomic,retain) FMFSAMapAnnotation * mapAnnotation; 
+(id)bundle;
-(double)yOffsetForDimension:(double)arg1 ;
-(void)setIsVisibilityCell:(bool)arg1 ;
-(void)setMapAnnotation:(id)arg1 ;
-(id)locationLabel;
-(id)currentLocationDelegate;
-(id)distanceLabel;
-(bool)isVisibilityCell;
-(bool)showAllCell;
-(bool)displayMap;
-(void)setFriendImageView:(id)arg1 ;
-(id)friendImageView;
-(id)mapAnnotation;
-(void)updateMapWithLocation:(id)arg1 ;
-(void)runMapRegionAfterDelay;
-(id)showLocatingFriendsString;
-(void)setShowAllCell:(bool)arg1 ;
-(void)setIsLastCell:(bool)arg1 ;
-(void)setIsFirstCell:(bool)arg1 ;
-(void)setDisplayMap:(bool)arg1 ;
-(void)setDistanceLabel:(id)arg1 ;
-(void)setShowLocatingFriends:(bool)arg1 ;
-(bool)showLocatingFriends;
-(void)setLocationLabel:(id)arg1 ;
-(void)currentLocationUpdated:(id)arg1 ;
-(void)setCurrentLocationDelegate:(id)arg1 ;
-(void)setRefreshingCancelled:(bool)arg1 ;
-(bool)refreshingCancelled;
-(bool)isLastCell;
-(void)updateMap;
-(void)setTimeLabel:(id)arg1 ;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setBorderColor:(id)arg1 ;
-(id)location;
-(id)borderColor;
-(void).cxx_destruct;
-(bool)isFirstCell;
-(double)zoomLevel;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
-(id)timeLabel;
-(void)setZoomLevel:(double)arg1 ;
-(id)border;
-(void)setBorder:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

