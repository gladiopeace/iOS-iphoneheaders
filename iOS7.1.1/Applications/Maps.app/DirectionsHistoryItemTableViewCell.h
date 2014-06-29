/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/HistoryItemTableViewCell.h>

@interface DirectionsHistoryItemTableViewCell : HistoryItemTableViewCell {

	int _currentLocationDisplayStyle;

}

@property (assign,nonatomic) int currentLocationDisplayStyle;              //@synthesize currentLocationDisplayStyle=_currentLocationDisplayStyle - In the implementation block
-(void)setHistoryItem:(id)arg1 ;
-(void)setCurrentLocationDisplayStyle:(int)arg1 ;
-(id)_destinationTextForDirectionsItem:(id)arg1 ;
-(id)_destinationLocalityTextForDirectionsItem:(id)arg1 ;
-(id)_sourceTextForDirectionsItem:(id)arg1 ;
-(id)_sourceLocalityTextForDirectionsItem:(id)arg1 ;
-(int)currentLocationDisplayStyle;
-(BOOL)_shouldHideLocalityForSearchResult:(id)arg1 sourceText:(id)arg2 locality:(id)arg3 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

